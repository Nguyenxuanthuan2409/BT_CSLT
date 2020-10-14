#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//	//2 xuat ra man hinh tong cac chu so tu 1 den n
//	/*
//	int n;
//	int tong = 0;
//	int i = 1;
//	cout << "nhap n : "; cin >> n;
//	while (i <= n)
//	{
//		tong += i;
//		i++;
//	}
//	cout << " tong cac so tu 1 -> " << n << " la : " << tong << endl;
//	*/
//
//	//1 xuat ra man hinh cac so tu 1 den n
//	/*
//	int n;
//	int i = 1;
//	cout << "nhap so nguyen duong n : "; cin >> n;
//	while (i <= n)
//	{
//		cout << i << " ";
//		i++;
//	}
//	cout << endl;
//	*/
//	
//	//3 xuat ra so dao nguoc cua 1 so nguyen duong
//	/*int n;
//	int sdn=0;
//	int i;
//	cout << "nhap so nguyen duong n: "; cin >> n;
//	while (n > 0)
//	{
//		sdn = (sdn * 10) + (n % 10);
//		n = n / 10;
//	}
//	cout << sdn;*/
//
//	//4 tong cac chu so cua 1 so nguen duong
//	/*int n;
//	int tong = 0;
//	cout << "nhap so nguyen n : "; cin >> n;
//	while (n > 0)
//	{
//		tong += n % 10;
//		n = n / 10;
//	}
//	cout << "tong cac chu so la : ";
//	cout << tong;*/
//
//	//5 kiem tra 1 số có phải là số nguyên tố k ?
//	/*int n;
//	cout << "nhap so nguyen duong n : "; cin >> n;
//	int i = 2;
//	bool issonguyento = true;
//	while (i<n)
//	{
//		if (n%i == 0)
//		{
//			issonguyento = false;
//			break;
//		}
//		else
//			i++;
//	}
//	if (issonguyento == true || n==1 || n==2 )
//		cout << n << " la so nguyen to ";
//	else
//		cout << n << " khong phai so nguyen to ";*/
//
//	//6 nhập vào 1 dãy sồ nguyên kết thúc bằng ctrl z , xuất ra màn hình max , min , số các chữ số chẵn , số lẻ
//	/*
//	int max = int_min, min = int_max;
//	int n;
//	int demchan = 0, demle = 0;
//	cout << "nhap day so ";
//	while (cin >> n)
//	{
//		if (n > max)
//			max = n;
//		if (n < min)
//			min = n;
//		if (n % 2 == 0)
//			demchan++;
//		else
//			demle++;
//	}
//	cout << "max : " << max << endl;
//	cout << "min : " << min << endl;
//	cout << "so cac chu so chan : " << demchan << endl;
//	cout << "so cac chu so le : " << demle << endl;
//	*/
//
//	// 7 đổi hệ số 2 -> 10
//	/*int n;
//	int sothapphan = 0;
//	cout << "nhap so nhi phan : "; cin >> n;
//	int m = n;
//	int i = 0;
//	while (n > 0)
//	{
//		sothapphan += n % 10 * pow(2, i);
//		n = n / 10 ;
//		i++;
//	}
//	cout << "so thap phan cua " << m << " : " << sothapphan;*/
//	
//
//	//8 đổi cơ số 10 -> 2
	/**int n;
	int sonhiphan = 0;
	int k = 0;
	cout << "nhap n : "; cin >> n;
	while (n > 0)
	{
		sonhiphan = n % 2 * pow(10, k) + sonhiphan;
		n = n / 2;
		k++;
	}
	cout << "dang nhi phan cua so 16 : " << sonhiphan;*/*/

//	// do while
//	// 1 yêu cầu nhập n > 0 , nếu người dùng nhập n < 0 yêu cầu người dùng nhập lại
//	/*int n;
//	cout << "nhap n : "; cin >> n;
//	do
//	{
//		if (n <= 0)
//		{
//			cout << "nhap lai n > 0 : "; cin >> n;
//		}
//	} while (n <= 0);
//	cout << "ban da nhap dung yeu cau ";*/
//	cout << endl;
	system("pause");
}