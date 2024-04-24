#pragma once
#include <iostream>
#include <vector>
using namespace std;
class CDonThuc
{
private:
	int a;
	int n;
public:
	CDonThuc();
	CDonThuc(int, int);
	CDonThuc(const CDonThuc&);
	~CDonThuc();
	friend std::ostream& operator << (std::ostream&, CDonThuc);
	friend std::istream& operator >> (std::istream&, CDonThuc&);
};

