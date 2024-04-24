#include "CDonThuc.h"
using namespace std;

CDonThuc::CDonThuc()
{
	a = 0;
	n = 0;
}

CDonThuc::CDonThuc(int aa, int nn)
{
	a = aa;
	n = nn;
}

CDonThuc::CDonThuc(const CDonThuc& P)
{
	a = P.a;
	n = P.n;
}

CDonThuc::~CDonThuc()
{
	return;
}

istream& operator >> (istream& in, CDonThuc& P) {
	cout << "Nhap he so: ";
	in >> P.a;
	cout << "Nhap so mu: ";
	in >> P.n;
	return in;
}

ostream& operator << (ostream& out, CDonThuc P) {
	cout << "Don thuc vua nhap la: ";
	if (!P.a) {
		out << 0 << "\n";
	}
	else if (P.n == 1 && P.a == 1) {
		out << "x" << "\n";
	}
	else if (P.n == 1 && P.a != 0)
	{
		out << P.a << "x" << "\n";
	}
	else if (P.n == 0 && P.a != 0)
	{
		out << P.a << "\n";
	}
	else
	{
		out << P.a << "x^" << P.n << "\n";
	}
	return out;
}