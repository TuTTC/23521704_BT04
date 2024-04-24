#pragma once
#include <iostream>
using namespace std;

class CHonSo
{
private:
	int Wholenumber;
	int Numerator;
	int Denominator;
public:
	CHonSo();
	CHonSo(int, int, int);
	CHonSo(const CHonSo&);
	~CHonSo();
	friend istream& operator>>(istream& is, CHonSo& P);
	friend ostream& operator<<(ostream& out, CHonSo P);
};

