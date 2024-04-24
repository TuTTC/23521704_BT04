#include "CHonSo.h"

CHonSo::CHonSo()
{
	Wholenumber = 0;
	Numerator = 0;
	Denominator = 1;
}

CHonSo::CHonSo(int aa, int bb, int cc)
{
	Wholenumber = aa;
	Numerator = bb;
	Denominator = cc;
}

CHonSo::CHonSo(const CHonSo& P)
{
	Wholenumber = P.Wholenumber;
	Numerator = P.Numerator;
	Denominator = P.Numerator;
}

CHonSo::~CHonSo()
{
	return;
}
