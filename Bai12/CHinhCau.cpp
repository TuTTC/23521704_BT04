#include "CHinhCau.h"

CHinhCau::CHinhCau()
{
	I.setXYZ(0, 0, 0);
	R = 0;
}

CHinhCau::CHinhCau(const CHinhCau& P)
{
	I = P.I;
	R = P.R;
}

CHinhCau::CHinhCau(CDiemKhongGian II, float RR)
{
	I = II;
	R = RR;
}

CHinhCau::~CHinhCau()
{
	return;
}


istream& operator >> (std::istream& in, CHinhCau& O) {
	cout << "Nhap tam I: " << endl;
	in >> O.I;
	cout << "Nhap ban kinh: ";
	in >> O.R;
	return in;
}

ostream& operator << (std::ostream& out, CHinhCau O) {
	cout << "Hinh cau vua nhap la: " << "\n";
	out << "Hinh cau tam I" << O.I << " ban kinh R = " << O.R << "\n";
	return out;
}


