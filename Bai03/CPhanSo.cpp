#include <iostream>
#include "CPhanSo.h"
using namespace std;




CPhanSo::CPhanSo()
{
	tu = 0;
	mau = 1;
}

CPhanSo::CPhanSo(const CPhanSo& P)
{
	tu = P.tu;
	mau = P.mau;
}

CPhanSo::CPhanSo(int aa, int bb)
{
	tu = aa;
	mau = bb;
}

CPhanSo::~CPhanSo()
{
	return;
}

istream& operator>>(istream& is, CPhanSo& P)
{
	cout << "Nhap tu: ";
	is >> P.tu;
	cout << "\rNhap mau: ";
	is >> P.mau;
	return is;
}

ostream& operator<<(ostream& out, const CPhanSo& P)
{
	out << P.tu << "/" << P.mau << "\n";
	return out;
}