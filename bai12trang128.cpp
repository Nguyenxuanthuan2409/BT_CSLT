// chuong trinh nhap vao 2 so n1 va n2.Tinh tong cac so chan va le giua n1 va n2
#include <iostream>
using namespace std;
int main ()
{
	int n1,n2;
	int tongchan = 0;
	int i ;
	do {cout << "Nhap vao hai so n1 va n2 ( n1 < n2 ): ";
		cin >> n1 >> n2 ;
		if ( n1 < 0|| n1 > n2 )
			cout <<" Nhap sai. Nhap lai\n";
	}while ( n1 < 0|| n1 > n2 );
	i = n1;
	cout <<" cac so le tu " << n1 << " den " << n2 << " la: ";
	while (i <= n2)
	{
		if ( i % 2 == 0)
			tongchan += i;
		else
			cout << i <<" ";
		i++;
	}
	cout <<" \nTong cac so chan tu " << n1 <<" den " << n2 <<" la: "<< tongchan << endl;
	system ("pause");
	return 0;

}