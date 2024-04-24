#include "CDiem.h"
#include <iostream>
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


istream& operator>>(istream& is, CDiem& P)
{
    cout << "Nhap x: ";
    is >> P.x;
    cout << "Nhap y: ";
    is >> P.y;
    return is;
}

ostream& operator<<(ostream& out, CDiem P)
{
    cout << "\nDiem vua nhap la: \n";
    out << "(" << P.x << ", " << P.y << ")\n";
    return out;
}

