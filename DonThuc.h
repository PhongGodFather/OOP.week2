#pragma once
#ifndef _DONTHUC_H_
#define _DONTHUC_H_
#include <iostream>
using namespace std;
class DonThuc
{
private:
	float heSo;
	float soMu;
public:
	void compute(int x);
	float getHeSo();
	float getSoMu();
	void setHeSo();
	void setSoMu();
	DonThuc daoHam();
	DonThuc nguyenHam();
	DonThuc operator+(DonThuc a);
	DonThuc operator-(DonThuc a);
	DonThuc operator*(DonThuc a);
	DonThuc operator/(DonThuc a);
	friend istream& operator>>(istream& in, DonThuc& temp);
	friend ostream& operator<<(ostream& out, DonThuc temp);
};
istream& operator>>(istream& in, DonThuc& temp);
ostream& operator<<(ostream& out, DonThuc temp);
#endif