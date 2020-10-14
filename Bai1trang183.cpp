// ct in mang alpha
#include <iostream>
using namespace std;
const int MAXSIZE = 50;
double a[ MAXSIZE ];
int main ()
{
	for ( int i =0; i <= MAXSIZE -1; i ++)
		{
			if ( i <= 24 )
				a[i] =i * i;
			else
				a[i] = i*i*i;
		}
	
	for ( int i =0; i <= MAXSIZE - 1;i++)
		{cout << a[ i] <<" ";
	if (( i +1 ) % 10 == 0 )
		cout << endl;}
	system ("pause");
}
