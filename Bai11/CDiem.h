#pragma once
#include <iostream>
using namespace std;
class CDiem
{
private:
	int x;
	int y;
public:
	CDiem();
	CDiem(const CDiem&);
	CDiem(float, float);
	~CDiem();
	void setXY(float, float);
	friend istream& operator>>(istream& is, CDiem& P);
	friend ostream& operator<<(ostream& out, CDiem P);
	float KhoangCach(CDiem);
};

