#pragma once
#include <iostream>
using namespace std;

class CDuongThang
{
private:
	int a;
	int b;
	int c;
public:
	CDuongThang();
	CDuongThang(int, int, int);
	CDuongThang(const CDuongThang&);
	~CDuongThang();
	friend std::ostream& operator << (std::ostream&, CDuongThang);
	friend std::istream& operator >> (std::istream&, CDuongThang&);
};

