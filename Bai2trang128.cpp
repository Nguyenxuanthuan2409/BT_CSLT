// chuong trinh nhap vao mot so nguyen , tinh va in ra giai thua cua no
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int n;
	int kq = 1;
	cout <<" Nhap vao mot so nguyen ban muon tinh giai thua: ";
	cin >> n;
	if ( n == 0 || n == 1)
		cout <<" Giai thua bang 1 ";
	else
		for (int i =1; i <= n; i++)
		{
			kq = kq * pow ( i, 1.0);
		}
		cout <<" Giai thua cua " << n << " la: " << kq << endl;
		system ("pause");
		return 0;
}