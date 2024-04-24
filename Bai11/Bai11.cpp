#include<iostream>
#include"CDiem.h"
#include"CTamGiac.h"
using namespace std;

int main()
{
	CTamGiac a;
	cin >> a;
	while (a.ktHopLe() == 0)
	{
		cout << "Tam giac khong hop le!" << "\n";
		cin >> a;
	}
	cout << a;
	return 0;
}