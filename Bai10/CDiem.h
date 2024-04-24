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
	void setXY(float, float);
	friend istream& operator>>(istream&, CDiem&);
	friend ostream& operator<<(ostream& out, CDiem P);
};


