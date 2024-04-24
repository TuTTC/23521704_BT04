#include "CDuongTron.h"


CDuongTron::CDuongTron()
{
	I.setXY(0, 0);
	R = 0;
}

CDuongTron::CDuongTron(const CDuongTron& P) {
	I = P.I;
	R = P.R;
}

CDuongTron::CDuongTron(CDiem II, float RR) {
	I = II;
	R = RR;
}

CDuongTron::~CDuongTron()
{
	return;
}

istream& operator>>(istream& is, CDuongTron& O)
{
	cout << "Nhap tam I: " << endl;
	is >> O.I;
	cout << "Nhap ban kinh: ";
	is >> O.R;
	return is;
}

ostream& operator<<(ostream& out, CDuongTron O) {
	cout << "Duong tron vua nhap la: " << "\n";
	out << "Duong tron tam I" << O.I << " ban kinh R = " << O.R << "\n";
	return out;
}
