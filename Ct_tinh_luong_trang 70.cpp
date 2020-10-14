//chuong trinh tinh luong nhan vien bai tap 3 trang 70
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string hoten;
	int ngaylamviec;
	double tiencong = 0.0;
	double tienluong = 0.0;

	cout << "Ho ten nhan vien: ";
	getline (cin, hoten);
	cout << "So ngay lam viec: ";
	cin >> ngaylamviec;
	cout << "Tien cong mot ngay: ";
	cin >> tiencong;

	tienluong = ngaylamviec * tiencong;
	cout << "Nhan vien: "<< hoten <<"\t"<<"Tien luong nhan duoc la: "<< tienluong;
	getchar ();
	getchar();
	return 0;


}