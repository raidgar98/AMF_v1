#ifndef RAREMatrix
#define RAREMatrix
#include <list>
#include <exception>
#include <map>
#include <vector>
#include "Shared.h"
using real = double;
struct XYVal {
	size_t x;
	size_t y;
	real value;
	XYVal(size_t x, size_t y, real val){
		this->x = x;
		this->y = y;
		this->value = val;
	}
	bool operator==(const XYVal& temp)const {
		return x == temp.x&&y == temp.y&&value == temp.value;
	}
};
class RareMatrix{
	std::list<XYVal> notnull;
	size_t xmatrix;
	size_t ymatrix;
	static real zero_value;
public:
	explicit RareMatrix(size_t xmax=1000,size_t ymax=1000):xmatrix(xmax),ymatrix(ymax) {}
	RareMatrix(real ** tab, size_t x, size_t y):ymatrix(y),xmatrix(x) {
		for (size_t iy = 0; iy < y; iy++) {
			for (size_t ix = 0; ix < x; ix++) {
				if (tab[iy][ix] != 0.0)
					notnull.push_back(XYVal(ix, iy, tab[iy][ix]));
			}
		}
	}
	~RareMatrix(){}
	///dodaje do macierzy
	void add(size_t xpos, size_t ypos, real v) {
		if (v != 0.0) {
			if ((xpos-1 < xmatrix && xpos > 0) && (ypos-1 < ymatrix && ypos > 0)) {
				for (const auto& temp : notnull)
					if (temp.x == xpos && temp.y == ypos)
						throw "Duplicate coord";
				notnull.push_back(XYVal(xpos, ypos, v));
			}
			else throw std::out_of_range("Out of range");
		}
		else throw"Value is 0";
	}
	///zmienia macierz
	void update(size_t xpos, size_t ypos, real v) {
		if ((xpos-1 < xmatrix && xpos > 0) && (ypos-1 < ymatrix && ypos > 0)) {
			if (v != 0.0) {
				bool flaga = true;
				for (auto& temp : notnull) 
					if (temp.x == xpos && temp.y == ypos) {
						temp.value = v;
						return;
					}
				notnull.push_back(XYVal(xpos, ypos, v));
			}
			else {
				for (const auto& temp : notnull)
					if (temp.x == xpos && temp.y == ypos) {
						notnull.remove(temp);
						return;
					}
			}
		}
		else 
			throw std::out_of_range("Out of range");
	}
	real get(size_t xpos, size_t ypos)const {
		if ((xpos - 1 < xmatrix && xpos > 0) && (ypos - 1 < ymatrix && ypos > 0)) {
			for (auto temp : notnull) {
				if (temp.x == xpos && temp.y == ypos) return temp.value;
			}
			return 0.0;
		}
		else throw std::out_of_range("Out of range");
	}
	size_t x_matrix()const { return xmatrix; }
	size_t y_matrix()const { return ymatrix; }
	void x_matrix(size_t x) { xmatrix = x; }
	void y_matrix(size_t y) { xmatrix = y; }
	void operator()(size_t xpos, size_t ypos, real v) {
		if (v != 0.0) {
			if ((xpos - 1 < xmatrix && xpos > 0) && (ypos - 1 < ymatrix && ypos > 0)) {
				for (const auto& temp : notnull)
					if (temp.x == xpos && temp.y == ypos)
						throw "Duplicate coord";
				notnull.push_back(XYVal(xpos, ypos, v));
			}
			else throw std::out_of_range("Out of range");
		}
		else throw"Value is 0";
	}
	real operator()(size_t xpos, size_t ypos)const {
		if ((xpos - 1 < xmatrix && xpos > 0) && (ypos - 1 < ymatrix && ypos > 0)) {
			for (const auto&temp : notnull) {
				if (temp.x == xpos && temp.y == ypos) return temp.value;
			}
			return 0.0;
		}
		else throw std::out_of_range("Out of range");
	}
	RareMatrix operator *(const real * vector)const {
		if (vector != nullptr) {
			RareMatrix temp(1,ymatrix);
			std::vector<real> temp_vec(ymatrix);
			for (int i = 0; i < ymatrix; i++)
				temp_vec[i] = 0;
			for (const auto &xyval : notnull) {
				temp_vec[xyval.y - 1] += xyval.value * vector[xyval.x - 1];
			}
			int y = 1;
			for (const auto& val : temp_vec) {
				temp.update(1, y, val);
				y++;
			}
			return temp;
		}
		else throw "Null ptr vector";
	}
	RareMatrix operator *(const std::vector<real> & vector)const {
		if (vector.size() == this->y_matrix()) {
			RareMatrix temp(1, ymatrix);
			std::vector<real> temp_vec(ymatrix);
			for (int i = 0; i < ymatrix; i++)
				temp_vec[i] = 0;
			for (const auto &xyval : notnull) {
				temp_vec[xyval.y - 1] += xyval.value * vector[xyval.x - 1];
			}
			int y = 1;
			for (const auto& val : temp_vec) {
				temp.update(1, y, val);
				y++;
			}
			return temp;
		}
		else {
			throw "Wrong vector size";
		}
	}
	RareMatrix transpozition()const noexcept{
		//::cout << "Transpozycja\n";
		RareMatrix temp(ymatrix, xmatrix);
		for (const auto&val : notnull)
			temp.add(val.y, val.x, val.value);
		//std::cout << "Po transpozycji\n";
		return temp;
	}
	RareMatrix operator *(const RareMatrix & matrix)const {
		if (xmatrix == matrix.y_matrix()) {
			RareMatrix temp(matrix.x_matrix(), ymatrix);
			for (int i = 1; i <= temp.y_matrix(); i++) {
				for (int j = 1; j <= temp.x_matrix(); j++) {
					for (int z = 1; z <= xmatrix; z++) {
						temp.update(j, i, temp.get(j, i) + (this->get(z, i)*matrix.get(j, z)));
					}}}
			return temp;
		}
		else throw std::exception("Wrong matrix size");
	}
	size_t get_count()const noexcept {
		return notnull.size();
	}
	real& operator[](const coord &point) {
		size_t xpos = point.x();
		size_t ypos = point.y();
		if ((xpos - 1 < xmatrix && xpos > 0) && (ypos - 1 < ymatrix && ypos > 0)) {
			for (auto temp : notnull) {
				if (temp.x == xpos && temp.y == ypos) return temp.value;
			}
			return zero_value;
		}
		else throw std::out_of_range("Out of range");
	}
	real& operator[](coord &&point) {
		size_t xpos = point.x();
		size_t ypos = point.y();
		if ((xpos - 1 < xmatrix && xpos > 0) && (ypos - 1 < ymatrix && ypos > 0)) {
			for (auto temp : notnull) {
				if (temp.x == xpos && temp.y == ypos) return temp.value;
			}
			return zero_value;
		}
		else throw std::out_of_range("Out of range");
	}
};
#endif