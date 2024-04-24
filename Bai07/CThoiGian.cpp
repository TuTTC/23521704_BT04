#include "CThoiGian.h"
using namespace std;

CThoiGian::CThoiGian()
{
	hour = 0;
	minute = 0;
	second = 0;
}

CThoiGian::CThoiGian(int aa, int bb, int cc)
{
	hour = aa;
	minute = bb;
	second = cc;
}

CThoiGian::CThoiGian(const CThoiGian& P)
{
	hour = P.hour;
	minute = P.minute;
	second = P.sec;
}

CThoiGian::~CThoiGian()
{
	return;
}

istream& operator >> (istream& in, CThoiGian& P) {
	cout << "Nhap gio: ";
	in >> P.hour;
	cout << "Nhap phut: ";
	in >> P.minute;
	cout << "Nhap giay: ";
	in >> P.second;
	return in;
}

ostream& operator << (ostream& out, CThoiGian P) {
	cout << "Thoi gian da nhap: ";
	out << P.hour << ":" << P.minute << ":" << P.second << "\n";
	return out;
}
