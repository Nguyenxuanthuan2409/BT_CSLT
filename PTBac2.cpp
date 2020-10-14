// giai phuong trinh bac 2
#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	double x, x1,x2;
	double denta = 0;
	cout <<" Nhap vao ba he so cua ptb 2: ";
	cin >> a >> b >> c;
	if ( a==0 )
		if ( b==0)
			if ( c==0)
				cout <<" Pt vo so nghiem\n";
			else
				cout <<" Pt vo nghiem\n";
		else
			{x= -(c *1.0)/b;
	cout <<" Pt co nghiem la: " << x << endl;}
	else
	{
		denta = b * b -4 *a *c;
		if ( denta ==0)
			{x= -(b*1.0)/2*a;
		cout <<" Pt co nghiem la: " << x << endl;}
		else
			if ( denta > 0)
			{
				x1 = (-b + sqrt(denta))/(2*a);
				x2 = (-b - sqrt(denta))/(2*a);
				cout <<" Pt co hai nghiem phan biet la: " << x1 << " \t " << x2 << endl;
			}
			else
				cout <<" Phuong trinh vo nghiem\n";

	}
	system ("pause");
	return 0;
}