#pragma once
#include <iostream>
using namespace std;
class CDiem
{
private:
	float x;
	float y;
public:
	CDiem();
	CDiem(const CDiem&);
	CDiem(float, float);
	~CDiem();
	friend istream& operator>>(istream& is, CDiem& P);
	friend ostream& operator<<(ostream& out, CDiem P);
};

