// chuong trinh nhap vao mot so nguyen va kiem tra xem no la so nguyen to hay khong
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int i = 1;
	cout <<" Nhap vao mot so nguyen : ";
	cin >> n;
	bool flag = true;
	if ( n < 2 )
		flag = false;
	else
		if (n == 2)
			flag = true;
		else
		{
			double x = sqrt ( n * 1.0 );
			while ( i <= x)
			{
				if ( i % 2 == 0)
					{
						flag = false;
						break;
					}
				i ++;
				
			}
		}
		if (flag == true)
			cout << n << " la so nguyen to\n" ;
		else
			cout << n << " khong la so nguyen to\n";
		system("pause");
		return 0;
			
}