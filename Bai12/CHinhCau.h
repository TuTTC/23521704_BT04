#pragma once
#include <iostream>
#include "CDiemKhongGian.h"
using namespace std;
class CHinhCau
{
private:
	CDiemKhongGian I;
	float R;
public:
	CHinhCau();
	CHinhCau(const CHinhCau&);
	CHinhCau(CDiemKhongGian, float);
	~CHinhCau();
	friend std::ostream& operator << (std::ostream&, CHinhCau);
	friend std::istream& operator >> (std::istream&, CHinhCau&);
};

