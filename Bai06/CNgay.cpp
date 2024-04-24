#include "CNgay.h"

CNgay::CNgay()
{
	ng = 1;
	th = 1;
	nm = 1;
}

CNgay::CNgay(int aa, int bb, int cc)
{
	ng = aa;
	th = bb;
	nm = cc;
}

CNgay::CNgay(const CNgay& P)
{
	ng = P.ng;
	th = P.th;
	nm = P.nm;
}

CNgay::~CNgay()
{
	return;
}

std::istream& operator >> (std::istream& in, CNgay& x) {
	std::cout << "Nhap ngay: ";
	in >> x.ng;
	std::cout << "Nhap thang: ";
	in >> x.th;
	std::cout << "Nhap nam: ";
	in >> x.nm;
	return in;
}
std::ostream& operator << (std::ostream& out, CNgay x) {
	out << x.ng << "/" << x.th << "/" << x.nm << "\n";
	return out;
}