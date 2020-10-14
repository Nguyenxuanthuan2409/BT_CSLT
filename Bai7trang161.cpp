// ct fibonaki
#include <iostream>
using namespace std;
int Fib ( int n)
{
	if ( n== 0|| n==1)
		return n;
	else
		return Fib ( n-1 ) + Fib( n - 2);
}
int main ()
{
	for ( int i = 0; i < 30; i++)
		cout << Fib( i) <<"\t" ;
	system ( "pause");
	return 0;
}