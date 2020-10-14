// viet ham tinh giai thua
#include <iostream>
using namespace std;
int GiaiThua ( int n )
{
	int gt = 1;
	for ( int i = 1; i <= n ; i++)
		gt = gt * pow ( i , 1.0);
	return gt;
}
int main ()
{
	int n;
	cout <<" Nhpa vao mot con so n ban muon tinh giai thua: ";
	cin >> n;
	cout <<" Tich cac giai thua la: " << GiaiThua ( n ) << endl;
	system ("pause" );
}