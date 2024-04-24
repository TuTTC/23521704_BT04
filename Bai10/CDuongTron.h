#pragma once
#include "CDiem.h"
#include <iostream>
class CDuongTron
{
private:
	CDiem I;
	float R;
public:
	CDuongTron();
	CDuongTron(CDiem, float);
	CDuongTron(const CDuongTron&);
	~CDuongTron();
	friend std::ostream& operator << (std::ostream&, CDuongTron);
	friend std::istream& operator >> (std::istream&, CDuongTron&);
};

