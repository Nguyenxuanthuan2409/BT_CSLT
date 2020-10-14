// bai tap lam them
// Nguyen Xuan Thuan _ 24/09/1999.
#include <iostream>
using namespace std;
const int MAX = 100;

void NhapDaThuc ( int HeSoDaThuc [], int & BacCuaDaThuc)
{
	do {
		cout <<"\nBan hay nhap vao bac cua da thuc: ";
		cin >> BacCuaDaThuc;
		if ( BacCuaDaThuc < 0)
			cout << "\n Bac cua da thuc khong hop le.Xin kiem tra lai";
		} while (BacCuaDaThuc < 0);
	int j = BacCuaDaThuc;
	for (int i = BacCuaDaThuc; i >=0; i--)
	{
		cout <<"\nBan hay nhap vao he so cua x^ " << j << " : ";
		cin >> HeSoDaThuc [i];
		j--;
	}
}
void XuatDaThuc (int HeSoDaThuc [], int BacCuaDaThuc)
{
	// int j = BacCuaDaThuc;
	for (int i = BacCuaDaThuc; i >= 0;i--)
	{
		if (i != 0)
		{
			cout << HeSoDaThuc [i] <<" ^ " << i << " + ";
			// j --;
		}
		else
			cout << HeSoDaThuc [i];
	}
}
void TinhTong (int HeSoDaThuc1[], int BacCuaDaThuc1,int HeSoDaThuc2[],int BacCuaDaThuc2,int HeSoTong[],int & BacTong)
{
	int i;
	HeSoTong [i] = BacCuaDaThuc1 <= BacCuaDaThuc2 ? BacCuaDaThuc2 : BacCuaDaThuc1;
	for (int i = 0;i <= BacTong;i++)
	{
		HeSoTong [i] = BacCuaDaThuc1 <= BacCuaDaThuc2 ? HeSoTong[i] += HeSoDaThuc1[i] : HeSoTong[i] += HeSoDaThuc2[i];
	}
	XuatDaThuc (HeSoTong, BacTong);
}
int main ()
{
	int BacCuaDaThuc1;
	int HeSoDaThuc1 [ MAX];
	int BacCuaDaThuc2;
	int HeSoCuaDaThuc2 [ MAX];
	int BacTong;
	int HeSoTong [ MAX];
	cout <<"\nBan hay nhap vao bac va he so cua da thuc thu nhat: ";
	NhapDaThuc ( HeSoDaThuc1, BacCuaDaThuc1);
	// for (int i =0; i <= BAccuadathuc1;i++)
	// cout <<HESoDAThuc1 [i]<< "\t";
	cout <<"\nBan hay nhap vao bac va he so cua da thuc hai: ";
	NhapDaThuc(HeSoCuaDaThuc2, BacCuaDaThuc2);
	cout <<"\nDa thuc thu nhat la: ";
	XuatDaThuc (HeSoDaThuc1,BacCuaDaThuc1);
	cout <<"\nDa Thuc Thu hai la: ";
	XuatDaThuc (HeSoCuaDaThuc2, BacCuaDaThuc2);
	cout <<"\nTong 2 so dax tinh la: ";
	TinhTong (HeSoDaThuc1, BacCuaDaThuc1,HeSoCuaDaThuc2, BacCuaDaThuc2,HeSoTong, BacTong);
	return 0;

}