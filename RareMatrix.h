#pragma once

#include <map>
#include <exception>
#include "izimageobjects.h"

template<typename T = double>
class RareMatrix
{

	using real = T;
	std::map<coord, real> notnull;
	size_t xmatrix;
	size_t ymatrix;

	inline static real zero_value = 0;

public:

	explicit RareMatrix(size_t xmax=1000,size_t ymax=1000):xmatrix(xmax),ymatrix(ymax) {}

	RareMatrix(real ** tab, size_t x, size_t y):ymatrix(y),xmatrix(x) {
		for (size_t iy = 0; iy < y; iy++) 
			for (size_t ix = 0; ix < x; ix++) 
				if (tab[iy][ix] != zero_value)
					notnull.insert(std::make_pair(coord(ix, iy), tab[iy][ix]));
	}
	
	~RareMatrix(){}
	
	void add(size_t xpos, size_t ypos, real v)
	{
		if ((xpos >= xmatrix ) || (ypos >= ymatrix )) THROW( std::out_of_range, "Out of range" )
		const auto ret = notnull.find({xpos, ypos});
		if(ret != notnull.end()) THROW( std::invalid_argument, "element already exist" )
		else notnull[{xpos, ypos}] = v;
	}

	void set(size_t xpos, size_t ypos, real v)
	{
		if ((xpos >= xmatrix ) || (ypos >= ymatrix )) THROW( std::out_of_range, "Out of range" )
		else if(v == zero_value) notnull.erase({xpos, ypos});
		else notnull[{xpos, ypos}] = v;
	}

	const real& at(const size_t xpos, const size_t ypos) const
	{
		if ((xpos >= xmatrix ) || (ypos >= ymatrix )) THROW( std::out_of_range, "Out of range" );
		const auto ret = notnull.find({ xpos, ypos });
		return ( ret != notnull.end() ? ret->second : zero_value );
	}

	real& at(const size_t xpos, const size_t ypos)
	{
		if ((xpos >= xmatrix ) || (ypos >= ymatrix )) THROW( std::out_of_range, "Out of range" );
		auto ret = notnull.find({ xpos, ypos });
		if(ret != notnull.end()) return ret->second;
		else return notnull.insert({{xpos, ypos}, 0.0}).first->second;
	}


	size_t	x_matrix() const			{ return xmatrix; }
	size_t	y_matrix() const			{ return ymatrix; }
	void	x_matrix(const size_t x) 	{ xmatrix = x; }
	void	y_matrix(const size_t y) 	{ xmatrix = y; }

	void operator()(size_t xpos, size_t ypos, real v) {	set(xpos, ypos, v);	}
	real& operator()(size_t xpos, size_t ypos) { return at(xpos, ypos);	}
	const real& operator()(size_t xpos, size_t ypos) const { return at(xpos, ypos);	}
	
	RareMatrix operator *(const real * vector)const {
		if (vector != nullptr) {
			RareMatrix temp(1,ymatrix);
			std::vector<real> temp_vec(ymatrix);
			for (int i = 0; i < ymatrix; i++)
				temp_vec[i] = 0;
			for (const auto &xyval : notnull) {
				temp_vec[xyval.first.y() - 1] += xyval.second * vector[xyval.first.x() - 1];
			}
			int y = 1;
			for (const auto& val : temp_vec) {
				temp.set(1, y, val);
				y++;
			}
			return temp;
		}
		else throw "Null ptr vector";
	}

	RareMatrix operator *(const std::vector<real> & vector) const 
	{
		if (vector.size() != this->y_matrix()) THROW(std::invalid_argument, "Wrong vector size" )

		RareMatrix temp(1, ymatrix);
		std::vector<real> temp_vec( ymatrix );
		memset(temp_vec.data(), 0, temp_vec.size() * sizeof(real));

		for (const auto &xyval : notnull) 
			temp_vec[xyval.first.y() - 1] += xyval.second * vector[xyval.first.x() - 1];

		int y = 1;
		for(auto val = temp_vec.begin(); val != temp_vec.end(); val++, y++)
			temp.set(1, y, *val);

		return temp;
	}

	RareMatrix transpozition()const noexcept
	{
		RareMatrix temp(ymatrix, xmatrix);
		for (const auto& val : notnull)
			temp.add(val.first.y(), val.first.x(), val.second);
		return temp;
	}

	RareMatrix operator *(const RareMatrix & matrix) const {
		if (xmatrix != matrix.y_matrix()) THROW( std::invalid_argument, "Wrong matrix size" )
		RareMatrix temp(matrix.x_matrix(), ymatrix);
		for (int i = 1; i <= temp.y_matrix(); i++) 
			for (int j = 1; j <= temp.x_matrix(); j++) 
				for (int z = 1; z <= xmatrix; z++) 
					temp.set(j, i, temp.at(j, i) + (this->at(z, i)*matrix.at(j, z)));
		return temp;
	}

	size_t get_count() const noexcept { return notnull.size(); }
	static void set_zero_value(const T val) noexcept { zero_value = val; }

	real& operator[](const coord &point) { return at(point.x(), point.y());	}
	real& operator[](coord &&point) { return at(point.x(), point.y()); }
	const real& operator[](const coord &point) const { return at(point.x(), point.y()); }
	const real& operator[](coord &&point) const	{ return at(point.x(), point.y()); }

	auto begin() const noexcept { return notnull.begin(); }
	auto end() const noexcept { return notnull.end(); }
	void clear() noexcept { notnull.clear(); }
};
