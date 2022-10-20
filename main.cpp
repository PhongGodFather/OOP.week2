#include "PhanSo.h"
#include "Complex.h"
#include "DonThuc.h"
void PhanSoTest()
{
	PhanSo a;
	cin >> a;
	a.ToiGian();
	cout << a;

	PhanSo b;
	cin >> b;
	cout << b;

	cout << "Tong 2 phan so tren: \n";
	cout << a + b;

	cout << "Hieu 2 phan so tren: \n";
	cout << a - b;

	cout << "Tich 2 phan so tren: \n";
	cout << a * b;

	cout << "Thuong 2 phan so tren: \n";
	cout << a / b;

	cout << a.getTu() << "/" << a.getMau() << endl;
	a.changeTu();
	a.changeMau();
	cout << a.getTu() << "/" << a.getMau() << endl;
}
void ComplexTest()
{
	Complex a;
	cin >> a;
	cout << a;

	cout << "Real part: " << a.getReal() << endl;
	cout << "Imaginary part: " << a.getImaginary() << endl;

	Complex b;
	cin >> b;
	cout << b;

	cout << "Module cua so phuc a: " << a.computeModule() << endl;
	cout << "Tong 2 so phuc tren: " << a + b << endl;
	cout << "Hieu 2 so phuc tren: " << a - b << endl;
	cout << "Tich 2 so phuc tren: " << a * b << endl;
	cout << "Thuong 2 so phuc tren: " << a / b << endl;

	a.setReal();
	a.setImaginary();
}
void DonThucTest()
{
	DonThuc A;
	cin >> A;
	cout << A;

	A.compute(2);
	A.daoHam().compute(2);
	A.nguyenHam().compute(2);

	DonThuc B;
	cin >> B;
	cout << B;
	cout << "Tong 2 don thuc tren: " << A + B << endl;
	cout << "Hieu 2 don thuc tren: " << A - B << endl;
	cout << "Tich 2 don thuc tren: " << A * B << endl;
	cout << "Thuong 2 don thuc tren: " << A / B << endl;

	cout << "He so: " << A.getHeSo() << "\n";
	cout << "So mu: " << A.getSoMu() << "\n";
	cout << "Nhap he so:";
	A.setHeSo();
	cout << "Nhap so mu:";
	A.setSoMu();
	cout << "He so: " << A.getHeSo() << "\n";
	cout << "So mu: " << A.getSoMu() << "\n";
}
int main()
{
	PhanSoTest();
	ComplexTest();
	DonThucTest();
}