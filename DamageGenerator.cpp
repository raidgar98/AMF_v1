#include "DamageGenerator.h"

#include <functional>
#include <random>

void DamageGenerator::makeDamage(QImage &dst, container<bool>& missing_ones, const size_t number_of_damages, const size_t damage_size) noexcept
{
    std::random_device engine;

    std::uniform_int_distribution<coord_num> width  (0, static_cast<coord_num>(dst.width()  ));
    std::uniform_int_distribution<coord_num> height (0, static_cast<coord_num>(dst.height() ));

    std::function<void(const int, const std::function<coord()> , const std::function<bool(const coord &)> &)> damager;
    std::function<bool(const coord&)> make_damage = [&](const coord& pos)
    {
        if(pos.x() >= static_cast<coord_num>(dst.width()) || pos.y() >= static_cast<coord_num>(dst.height())) return false;
        dst.setPixel(pos, Qt::transparent);
        missing_ones[pos] = false;
        return true;
    };
    std::function<coord()> generate_random_coordination = [&]()
    {
        return coord{ width(engine), height(engine) };
    };

    switch(current_damage_kind)
    {
        case euclidean: damager = &DamageGenerator::euclidean_generator; break;
        case chaos: damager = &DamageGenerator::chaos_generator; break;
        default: damager = &DamageGenerator::euclidean_generator; break;
    }

    for(size_t i = 0; i < number_of_damages; i++)
        damager(damage_size, generate_random_coordination, make_damage);

}

void DamageGenerator::renderMapFromRawData(const container<bool>& input, QImage& output) noexcept
{
    output.fill(qRgba(0,0,0,255));
    for(const auto& var : input)
        output.setPixel(var.first, qRgba(255,255,255,255));
}

void DamageGenerator::euclidean_generator(const int dmg_size, const std::function<coord()>& gen, const std::function<bool(const coord &)> &make_damage) noexcept
{
    const coord pos = gen();
    for(int i = -(dmg_size/2); i < (dmg_size/2); i++)
        for(int j = -(dmg_size/2); j < (dmg_size/2); j++)
            make_damage({pos.x() + i, pos.y() + j});
}

void DamageGenerator::chaos_generator(const int dmg_size, const std::function<coord ()> &gen, const std::function<bool (const coord &)> &make_damage) noexcept
{
    for(int i = 0; i < dmg_size; i++)
        make_damage(gen());
}
