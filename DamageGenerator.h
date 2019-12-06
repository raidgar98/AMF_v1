#pragma once

//Qt libraries

//STL libraries

//Own dependencies
#include "baseFilter.h"

class DamageGenerator
{
public:

    /// @enum here are storred avaiable damage algorithms, that generates shapes:
    enum damage_kinds
    {
        euclidean,      /// @var squares
        manhattan,      /// @var ?
        chaos           /// @var dots

    };

    /// @brief This is static class, no constructors at all
    DamageGenerator() = delete;

    /// @brief This methode will generate damages, using algorithm setted by DamageGenerator::setKindOfDamage
    /// @param dst - Here should be orginal picture, it will be destroyed (modifed)
    /// @param missing_ones - also output parameter. container with modified coordinates
    /// @param number_of_damages - defines how many times damage should be executed
    /// @param damage_size - how big single damage should be
    static void makeDamage(QImage& dst, container& missing_ones, const size_t number_of_damages, const size_t damage_size) noexcept;

    /// @brief This methode render visual representation of given damage
    /// @param input - container with already damaged coordinates
    /// @param output - output parameter, white mean missing, black mean normal ones
    static void renderMapFromRawData(const container& input, QImage& output) noexcept;

    /// @brief Simple setter
    static void setKindOfDamage(const damage_kinds iKindOfDamage) noexcept { current_damage_kind = iKindOfDamage; }

private:

    /// @brief Definition of euclidean damage algorithm, generates square holes
    /// @param dmg_size - side of square
    /// @param gen - methode to generate coordinates
    /// @param make_damage - methode to save damaged pixel
    /// @warning DEVELOP: If you want to implement another algorithm, signature as below is required to works. don't rewrite param documentation (or just type: same as euclidean)
    static void euclidean_generator(const int dmg_size, const std::function<coord()>& gen, const std::function<bool(const coord &)> &make_damage) noexcept;

    /// @brief generates single pixel dots
    static void chaos_generator(const int dmg_size, const std::function<coord()>& gen, const std::function<bool(const coord &)> &make_damage) noexcept;

    /// @variable what can i say? Enum holder
    inline static damage_kinds current_damage_kind{ damage_kinds::euclidean };

};


