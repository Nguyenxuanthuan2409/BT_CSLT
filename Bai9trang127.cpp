// ct nhap vao so nhi phan va xuat ra so thap phan
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int thapphan = 0;
	int i = 0;
	cout <<" Nhap vao mot so nhi phan: ";
	cin >> n;
	int tam = n;
	while (tam > 0)
	{
		int chuso = tam % 10;
		thapphan += chuso * pow (2 * 1.0, i);
		i++;
		tam = tam / 10;
	}
	cout << " Chu so thap phan tuong ung cua nhi phan la: " << thapphan << endl;
	system ("pause");
	return 0;
}