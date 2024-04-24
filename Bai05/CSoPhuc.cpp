#include "CSoPhuc.h"

CSoPhuc::CSoPhuc()
{
	thuc = 0;
	ao = 0;
}

CSoPhuc::CSoPhuc(int aa, int bb)
{
	thuc = aa;
	ao = bb;
}

CSoPhuc::CSoPhuc(const CSoPhuc& P)
{
	thuc = P.thuc;
	ao = P.ao;
}

CSoPhuc::~CSoPhuc()
{
	return;
}

istream& operator>>(istream& is, CSoPhuc& P)
{
	cout << "Nhap thuc: ";
	is >> P.thuc;
	cout << "Nhap ao: ";
	is >> P.ao;
	return is;
}

ostream& operator<<(ostream& out, const CSoPhuc& P)
{
	out << P.thuc << " + " << P.ao << "i" << "\n";
	return out;
}

