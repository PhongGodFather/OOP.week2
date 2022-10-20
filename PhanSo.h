#pragma once
#ifndef _PHANSO_H_
#define _PHANSO_H_
#include <iostream>
using namespace std;
class PhanSo {
	int tu, mau;
public:
	int getTu();
	int getMau();
	void changeTu();
	void changeMau();
	void ToiGian();
	PhanSo operator+(PhanSo);
	PhanSo operator-(PhanSo);
	PhanSo operator*(PhanSo);
	PhanSo operator/(PhanSo);
	friend istream& operator>>(istream& in, PhanSo& temp);
	friend ostream& operator<<(ostream& out, PhanSo temp);
};
istream& operator>>(istream& in, PhanSo& temp);
ostream& operator<<(ostream& out, PhanSo temp);
#endif // !Ham
