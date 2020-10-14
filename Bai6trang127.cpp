// chuong trinh nhap vao mot chuoi so vaf tinh xem co bao nhieu so lap lai 2 lan
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int dem = 1;
	int truoc = INT_MIN; 
	cout <<" Nhap vao mot chuoi so nguyen va ket thuc bang Ctrt + Z : ";
	while (cin >> n)
	{
		truoc = n;
		if ( truoc == n )
			dem ++;
		else
			if (dem == 2)
				cout << truoc << " " ;
		dem = 1;
	}
	truoc = n;
	system ("pause");
	return 0;
}        