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
    cout << "\nDiem vua nhap la: \n";
    out << "(" << P.x << ", " << P.y << ", " << P.z << ")\n";
    return out;
}
