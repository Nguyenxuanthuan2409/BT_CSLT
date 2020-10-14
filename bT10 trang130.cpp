// bai tap 10
#include <iostream>
using namespace std;

int main ()
{
	int h;
	cout <<" Nhap vao chieu dai canh: ";
	cin >>h;
	for ( int i =1; i <=h;i++)
	{
		for ( int j = 1; j <= i; j++)
			cout <<"*";
		cout << endl;
	}
	system ("pause");
	return 0;
}