// ct nhap vao mot so nguyen va in ra mot so dao nguoc
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int chuso;
	int sdn = 0;
	cout <<" Nhap vao mot so nguyen: ";
	cin >> n;
	while (n > 0)
	{
		chuso = n % 10;
		sdn = sdn * 10 + chuso;
		n /= 10;
	}
	cout <<" So dao nguoc cua so vua nhap la: " << sdn << endl;
	system ("pause");
	return 0;
}