// chuong trinh nhap vao mot so nguyen va in ra cac chu so dax nhap va tong cua no
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int chuso;
	int sdn = 0;
	int tong = 0;
	cout <<" Nhap vao mot so nguyen bat ky: ";
	cin >> n;
	int tam = n;
	while ( tam > 0)
	{
		int chuso = tam % 10;
		sdn = sdn *10 + chuso;
		tong = tong + chuso;
		tam /= 10;
	}
	cout <<" Cac chu so la: ";
	while ( sdn > 0)
	{
		int chuso = sdn % 10;
		cout << chuso <<" ";
		sdn /= 10;
	}
	cout <<" \nTong cac chu so da nhap la: " << tong << endl;
	system ("pause");
}