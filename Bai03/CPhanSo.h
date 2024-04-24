#pragma once
#include <iostream>
using namespace std;
class CPhanSo
{
private:
	int tu;
	int mau;
public:
	CPhanSo();
	CPhanSo(const CPhanSo&);
	CPhanSo(int, int);
	~CPhanSo();
	friend istream& operator>>(istream& is, CPhanSo& P);
	friend ostream& operator<<(ostream& out,const CPhanSo& P);
};

