// bai 17 ct tinh manu
#include <iostream>
#include <conio.h>
using namespace std;

void menu ()
{
	cout <<" MENU\n ";
	cout <<"1. Cong\n";
	cout <<"2. Tru\n";
	cout <<"3. Nhan\n";
	cout <<"4. Chia\n";
}
int cong (int a, int b)
{
	return a + b;
}
int tru ( int a, int b)
{
	return a - b;
}
int nhan (int a,int b)
{
	return a * b;
}
double chia (int a,int b)
{
	return (a * 1.0) / b;
}
int main ()
{
	int a, b;
	int chon;
	char kt;
	do {menu ();
		cout <<" Nhap vao hai so nguyen: ";
		cin >> a >> b;
	do {cout <<" Chon ( 1 - 4 ): ";
		cin >> chon;
		if ( chon < 1 || chon > 4 )
			cout <<" Lua chon khong hop le. Nhap lai\n";
		break;
		} while ( chon < 1 || chon > 4 );
	switch ( chon )
	{
	case 1: cout << a << " + " << b << " = " << cong ( a, b ) << endl;
		break;
	case 2: cout << a << " - " << b << " = " << tru ( a, b ) << endl;
		break;
	case 3: cout << a << " * " << b << " = " << nhan ( a, b ) << endl;
		break;
	case 4: if ( b == 0)
				 cout <<" Loi chia 0\n";
			 else
				 cout << a << " / " << b << " = " << chia ( a, b ) << endl;
		break;
		
	}+
	cout << " Ban co muon tiep tuc ( C / K ): ";
	cin >> kt;
	_getch ();
	system ("cls");
	}while ( kt == 'C' || kt == 'c');
	return 0;
}