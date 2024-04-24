#pragma once
#include "CDiem.h"
class CTamGiac
{
private:
	CDiem A;
	CDiem B;
	CDiem C;
public:
	CTamGiac();
	CTamGiac(const CTamGiac&);
	CTamGiac(CDiem, CDiem, CDiem);
	~CTamGiac();
	friend std::ostream& operator << (std::ostream&, CTamGiac);
	friend std::istream& operator >> (std::istream&, CTamGiac&);
	int ktHopLe();
};

