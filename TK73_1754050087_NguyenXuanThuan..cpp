// bai tap ve nha
// TK73_1754050087_Nguyen Xuan Thuan.
#include<iostream>
#include<conio.h>
using namespace std;
const int MAXSIZE = 100;
void Nhap(int a[], int bac);
void Xuat(int a[], int bac);
int Tinh(int a[], int bac, int x);

int main()
{
	int a[MAXSIZE], bac;
	int t;
	int ketqua;
	do {cout <<"Ban can tinh toan da thuc bac may: ";
	cin >> bac;
	if ( bac < 0)
			cout << "\n Bac cua da thuc khong hop le.Xin kiem tra lai\n";
		} while (bac < 0);
	cout <<" Moi ban nhap cac he so: ";
	Nhap(a,bac);
	cout <<"Mang sau khi nhap co dang la: ";
	Xuat(a, bac);
	cout <<"Nhap he so cho x: ";
	cin >> t;
	ketqua =Tinh(a, bac,t);
	cout <<"Gia tri cua da thuc can tinh la: "<< ketqua << endl;
	_getch ();

	
}
void Nhap(int a[], int bac)
{
	for(int i = 0; i <= bac; i++)
		cin >> a[i];
}
void Xuat(int a[], int bac)
{
	for(int i = 0; i <= bac; i++)
	{
		if(i == bac)
			cout << (a[i]) <<".x^" << i <<" = 0 " ;
		else
		   cout << (a[i]) <<".x^" << i <<" + ";
	}
	cout <<endl;
}
int Tinh(int a[], int bac, int x)
{
	int kq = 0;
	int luythua = 1;
	for(int i = 0; i <= bac; i++)
	{
		kq = kq + luythua * a[i];
		luythua = luythua * x;
	}
	return kq;
}