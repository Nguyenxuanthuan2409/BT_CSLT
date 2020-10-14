// chuong trinh in bang cuu chuong
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int h = 10;
	for (int i = 1; i <= h;i++)
	{
		for (int j = 1; j <=h ; j++)
			cout << setw ( 4 ) << right << i * j << " " ;
		cout << endl;
	}
	system ("pause");
	return 0;
}