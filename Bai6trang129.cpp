// Tinh gia tri xap xi cua PI
#include <iostream>
using namespace std;
int main ()
{
	double PI = 0;
	int n;
	cout <<" Nhap vao mot gia tri n: ";
	cin >> n;
	for (int i = 1;i<= n;i++)
	{
		if ( i % 2 == 0)
			PI= PI -4/( 2 * i - 1 );
		else
			PI= PI +4/(2 * i - 1 );
	}
	cout <<" Gia tri cua Pi la: " << PI << endl;
	system ("pause");
}