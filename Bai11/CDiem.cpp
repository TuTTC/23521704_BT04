#include "CDiem.h"
using namespace std;

CDiem::CDiem()
{
	x = 0;
	y = 0;
}

CDiem::CDiem(const CDiem& P) {
	x = P.x;
	y = P.y;
}

CDiem::CDiem(float xx, float yy) {
	x = xx;
	y = yy;
}

CDiem::~CDiem()
{
	return;
}

void CDiem::setXY(float aa, float bb)
{
	x = aa;
	y = bb;
}

istream& operator >> (istream& in, CDiem& C) {
	cout << "Nhap x: ";
	in >> C.x;
	cout << "Nhap y: ";
	in >> C.y;
	return in;
}
ostream& operator << (ostream& out, CDiem C) {
	out << "(" << C.x << ", " << C.y << ")\n";
	return out;
}

float CDiem::KhoangCach(CDiem B) {
	float khoangcach = sqrt((this->x - B.x) * (this->x - B.x) + (this->y - B.y) * (this->y - B.y));
	return khoangcach;
}