//
#include<iostream>
#include<string>
using namespace std;


int main()
{
	// bai tap voi cin cout 
/*
	string name;
	cout << "nhap ten cua ban: ";
	Sleep(1000);
	cin >> name;

	cout << "*****************" << endl;
	cout <<	"*  bai tap      *" << endl;
	cout << "*****************" << endl;
*/

	// bai tap voi bien 
	//tong 2 so a va b
	/*
	int a, b;
	int tong;
	
	cout << "nhap so a: ";
	cin >> a;
	cout << "nhap so b: ";
	cin >> b;
	cout << "a + b = " << a + b << endl;
	tong = a + b;
	cout << "a + b = " << tong << endl;
*/

	// tinh dien tich 
/*
	int dai, rong;
	int s = 0;

	cout << "nhap chieu dai: ";
	cin >> dai;
	cout << "nhap chieu rong: ";
	cin >> rong;
	s = a * b;
	cout << "dien tich la: " << s << endl;
*/

	// tinh phan du % 
/*
	int a;
	cout << "nhap 1 so bat ki: ";
	cin >> a;
	
	cout << "a / 10 du  " << a % 10 << endl;
*/

	// kieu du lieu string 
/*	string ten;
	string ho;

	cout << "nhap ten: ";
	cin >> ten;
	cout << "nhap ho: ";
	cin >> ho;

	string hoTen = ho + " " + ten;

	cout << endl << hoTen;
*/

	// kieu du lieu double 
/*
	double tongTienThucTe, tongTienDaGiamGia;
	double giamGia = 1.0 * 33/100;

	cout << "tong tien: ";
	cin >> tongTienThucTe;
	tongTienDaGiamGia = tongTienThucTe * giamGia;
	cout << tongTienDaGiamGia << endl;
*/

	// bai tap ve if 
	// so sanh 2 so a va b dung if
/*	
	int a, b;
	
	cout << "nhap a,b : ";
	cin >> a >> b;

	if (a > b)
		cout << " a lon hon b" << endl;
	if (a < b)
		cout << " a nho hon b" << endl;
	if ( a == b)
		cout << " a bang b " << endl;

*/

	// so sanh 2 so a va b dung if else
/*
	int a, b;

	cout << "nhap a,b : ";
	cin >> a >> b;

	if (a > b)
		cout << " a lon hon b" << endl;
	if (a < b)
		cout << " a nho hon b" << endl;
	else
		cout << " a bang b " << endl;
*/

	// if else long nhau
/*
	int a, b;

	cout << "nhap a,b : ";
	cin >> a >> b;

	if (a > b)
		cout << " a lon hon b" << endl;
	else
		if (a < b)
			cout << " a nho hon b" << endl;
		else
			cout << " a bang b " << endl;
*/

	// tim so lon nhat trong 3 so
/*	int a, b, c;
	cout << "nhap so a: ";
	cin >> a;
	cout << "nhap so b: ";
	cin >> b;
	cout << "nhap so c: ";
	cin >> c;

	int max;
	if (a > b)
		if (a > c)
			max = a;
		else
			max = c;
	else
		if (b > c)
			max = b;
		else
			max = c;
		
	cout <<"so lon nhat la: " << max << endl;
*/

	// tinh xem nam do co phai nam nhuan hay k
	int nam;
	cout << "nhap mot nam bat ki: ";
	cin >> nam;

	if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
		cout << "nam " << nam << " la nam nhuan.\n";
	else
		cout << "nam " << nam << " khong phai la nam nhuan.\n";
// chon thang va xuat ra ngay 
/*
	int thang;
	int soNgay;
	cout << "chon thang: ";
	cin >> thang;

	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		{
			soNgay = 31;
			break;
		}
		case 4: case 6: case 9: case 11:
		{
			soNgay = 30;
			break;
		}
		case 2 :
		{
			soNgay = 28;
			break;
		}
		default:
		{
			soNgay = 0;
			break;
		}
	}
	cout << "thang " << thang << " co " << soNgay << " ngay.\n";
*/
	system("pause");

}
