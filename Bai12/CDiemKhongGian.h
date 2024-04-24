#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	float x;
	float y;
	float z;
public:
	CDiemKhongGian();
	CDiemKhongGian(const CDiemKhongGian&);
	CDiemKhongGian(float, float, float);
	~CDiemKhongGian();
	void setXYZ(float, float, float);
	friend istream& operator>>(istream& is, CDiemKhongGian& P);
	friend ostream& operator<<(ostream& out, CDiemKhongGian P);
};