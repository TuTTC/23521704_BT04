#include "CDiemKhongGian.h"

CDiemKhongGian::CDiemKhongGian()
{
    x = 0;
    y = 0;
    z = 0;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& P) {
    x = P.x;
    y = P.y;
    z = P.z;
}

CDiemKhongGian::CDiemKhongGian(float xx, float yy, float zz) {
    x = xx;
    y = yy;
    z = zz;
}

CDiemKhongGian::~CDiemKhongGian()
{
    return;
}

void CDiemKhongGian::setXYZ(float aa, float bb, float cc) {
    x = aa;
    y = bb; 
    z = cc;
}
istream& operator>>(istream& is, CDiemKhongGian& P)
{
    cout << "Nhap x: ";
    is >> P.x;
    cout << "Nhap y: ";
    is >> P.y;
    cout << "Nhap z: ";
    is >> P.z;
    return is;
}

ostream& operator<<(ostream& out, CDiemKhongGian P)
{
    out << "(" << P.x << ", " << P.y << ", " << P.z << ")";
    return out;
}
