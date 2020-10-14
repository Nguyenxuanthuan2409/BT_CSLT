// ct in ra man hinh hinh chu nhat rong ruot
#include <iostream>
using namespace std;
int main ()
{
	int d,r;
	cout <<" Nhap vao chieu dai hinh chu nhat: ";
	cin >> d;
	cout <<" Nhap vao chieu rong hinh chu nhat: ";
	cin >> r;
	for ( int i = 1; i <= r;i++)
	{
		for ( int j = 1; j <=d; j++)
			{
				if ( i ==1 || i == r || j ==1|| j == d )
					cout <<"*";
				else
					cout <<" " ;
			}
		cout << endl;
	}
	system ( "pause");
	return 0;
}