//Dang 1:Nhap, xuat, tim kiem, kiem tra, tach, gop, tim gia tri nho-lon, sap xep, them, xoa, sua.
#include <iostream>
using namespace std;
void Nhapmang (int a[], int n)
{
	do{
		cout <<"Nhap so luong phan tu trong mang: ";
		cin >> n;
		if( n<0 || n>100 )
			cout <<"Nhap sai. Nhap lai\n";
	}while(n<0 || n>100);
	for( int i = 0; i<=n-1 ; i++)
	{
		cout <<"Nhap vao gia tri phan tu thu " << a[i+1] <<" : " ;
	    cin >>a[i];
	}
}
void Xuatmang (const int a[], int n)
{
	for( int i = 0 ; i<=n-1 ;i++)
	{
		cout << a[ i] << " " ;
	}
}
//Tim kiem 1 phan tu trong mang
bool TimKiem (int a[], int n, int x) //x la con so can tim.
{
	for( int i = 0 ; i<=n -1; i++)
	{
		if( x == a[i])
			return true;
		return true;
	}
}
//Kiem tra mang nay co tat ca la so duong ko?
bool KiemTraduong (int a[], int n)
{
	for( int i = 0 ; i<=n-1 ; i++)
	{
		if(a[i] > 0)
			return true;
		return false;
	}
}
//Kiem tra mang co doi xung
bool KiemTradx (int a[], int n)
{
	for( int i = 0 ; i<=n-1 ; i++)
	{
		int left = 0;
		int right = n-1;
		while(a[left] < a[right])
		{
			if (a[left] == a[right])
				{left ++;
			     right --;
			    } 
			else 
				return false;
		}
		return true;
		
	}
}
//Tach mang: tach cac so am thanh 1 mang moi
//*bool Tachmang (int a[], int n, int b[], int nb)
//{
//}
int main ()
{
	const int MAXSIZE = 100;
	int a[MAXSIZE];
	int n;
	int x;
	do{
		cout <<"Nhap so luong phan tu trong mang: ";
		cin >> n;
		if( n<0 || n>100 )
			cout <<"Nhap sai. Nhap lai\n";
	}while(n<0 || n>100);
	for( int i = 0; i<=n-1 ; i++)
	{
		cout <<"Nhap vao gia tri phan tu thu a[ " << i + 1 << "]:";
	    cin >>a[i];
	}
	cout <<" So luong phan tu trong mang hien tai la: ";
	Xuatmang ( a,n );
	cout << endl;
	cout <<"Nhap vao con so ban muon tim: ";
	cin >> x;
	TimKiem (a,n,x);
	{ 
		if( TimKiem (a,n,x) == true)
			cout <<" Phan tu " << x <<" co ton tai trong mang\n";
		else
			cout <<" Phan tu " << x <<" khong ton tai trong mang\n";
	}
	KiemTraduong (a,n);
	{
		if( KiemTraduong (a,n) == true )
			cout <<"Mang la so duong\n";
		else
			cout <<"Mang khong la so duong\n";
	}
	
	KiemTradx (a,n);
	{
		if( KiemTradx( a, n) == true)
			cout <<"La mang doi xung\n";
		else
			cout <<"Khong la mang doi xung\n";
	}
	system ("pause");
}
