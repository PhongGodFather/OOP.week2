#include"DonThuc.h"
istream& operator>>(istream& in, DonThuc& temp)
{
	cout << " Enter he so: ";
	in >> temp.heSo;
	cout << " Enter so mu: ";
	in >> temp.soMu;
	return in;
}
ostream& operator<<(ostream& out, DonThuc temp)
{
	if (temp.heSo != 1) {
		if (temp.heSo == -1)
			out << "-";
		else
			out << temp.heSo;
	}
	if (temp.soMu == 1)
		out << "X" << endl;
	else if (temp.soMu != 0)
		out << "X^" << temp.soMu << endl;
	if (temp.soMu == 0 && temp.heSo == 1)
		out << 1;
	return out;
}
void DonThuc::compute(int x)
{
	cout << "Value: " << heSo * pow(x, soMu) << endl;
}
float DonThuc::getHeSo() {
	return heSo;
}
float DonThuc::getSoMu() {
	return soMu;
}
void DonThuc::setHeSo() {
	cout << "Enter new he so: ";
	cin >> heSo;
}
void DonThuc::setSoMu()
{
	cout << "Enter new so mu: ";
	cin >> soMu;
}
DonThuc DonThuc::daoHam()
{
	DonThuc temp;
	temp.heSo = heSo * soMu;
	temp.soMu = soMu - 1;
	return temp;
}
DonThuc DonThuc::nguyenHam()
{
	DonThuc temp;
	temp.soMu = soMu + 1;
	temp.heSo = heSo / (soMu + 1);
	return temp;
}
DonThuc DonThuc::operator+(DonThuc a)
{
	DonThuc tmp;
	if (soMu != a.soMu)
	{
		cout << "Khong cong duoc vi khong cung so mu" << endl;
		tmp.heSo = 0;
		tmp.soMu = 0;
		return tmp;
	}
	tmp.heSo = heSo + a.heSo;
	tmp.soMu = soMu;
	return tmp;
}
DonThuc DonThuc::operator-(DonThuc a)
{
	DonThuc tmp;
	if (soMu != a.soMu)
	{
		cout << "Khong tru duoc vi khong cung so mu" << endl;
		tmp.heSo = 0;
		tmp.soMu = 0;
		return tmp;
	}
	tmp.heSo = heSo - a.heSo;
	tmp.soMu = soMu;
	return tmp;
}
DonThuc DonThuc::operator*(DonThuc a)
{
	DonThuc tmp;
	tmp.heSo = heSo * a.heSo;
	tmp.soMu = soMu + a.soMu;
	return tmp;
}
DonThuc DonThuc::operator/(DonThuc a)
{
	DonThuc tmp;
	tmp.heSo = heSo / a.heSo;
	tmp.soMu = soMu - a.soMu;
	return tmp;
}