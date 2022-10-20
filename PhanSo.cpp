#include "PhanSo.h"
void PhanSo::changeTu()
{
	cout << "Nhap tu: ";
	cin >> tu;
}
void PhanSo::changeMau()
{
	cout << "Nhap mau: ";
	cin >> mau;
	while (mau == 0)
	{
		cout << "Nhap lai mau: ";
		cin >> mau;
	}
}
int PhanSo::getTu()
{
	return tu;
}
int PhanSo::getMau()
{
	return mau;
}
istream& operator>>(istream &in, PhanSo &temp)
{
	cout << "Nhap vao tu: ";
	in >> temp.tu;
	cout << "Nhap vao mau: ";
	in >> temp.mau;
	while (temp.mau == 0)
	{
		cout << "Nhap lai mau: ";
		in >> temp.mau;
	}
	temp.ToiGian();
	return in;
}
void PhanSo::ToiGian()
{
	if (tu == 0)
		return;
	int min = (tu < mau) ? tu : mau;
	while (true)
	{
		if (tu % min == 0 && mau % min == 0)
			break;
		min--;
	}
	tu /= min;
	mau /= min;
}
ostream &operator<<(ostream &out, PhanSo temp)
{
	if (temp.tu == 0 && temp.mau == 0)
		out << "ERROR\n" << endl;
	else if (temp.tu == 0)
		out << "Phan so: " << 0 << endl;
	else if (temp.mau == 1)
		out << "Phan so: " << temp.tu << endl;
	else
		out << "Phan so: " << temp.tu << "/" << temp.mau << endl;
	return out;
}
PhanSo PhanSo::operator+(PhanSo b)
{
	PhanSo temp;
	temp.tu = tu * b.mau + mau * b.tu;
	temp.mau = mau * b.mau;
	temp.ToiGian();
	return temp;
}
PhanSo PhanSo::operator-(PhanSo b)
{
	PhanSo temp;
	temp.tu = tu * b.mau - mau * b.tu;
	temp.mau = mau * b.mau;
	temp.ToiGian();
	return temp;
}
PhanSo PhanSo::operator*(PhanSo b)
{
	PhanSo temp;
	temp.tu = tu * b.tu;
	temp.mau = mau * b.mau;
	temp.ToiGian();
	return temp;
}
PhanSo PhanSo::operator/(PhanSo b)
{
	PhanSo temp;
	if (b.tu == 0)
	{
		temp.tu = 0;
		temp.mau = 0;
		return temp;
	}
	temp.tu = tu * b.mau;
	temp.mau = mau * b.tu;
	temp.ToiGian();
	return temp;
}