// bai tap tinh luy thua
#include <iostream>
using namespace std;

double LuyThua ( double x, double y)
{
	double Lt = 1;
	for (int i = 1;i <= y ;i++)
	{
		Lt = Lt * x;
	}
	return Lt;
}
//double LuyThua ( double x , double y)
// sai
//{
//	double Lt = 1;
//	for ( int i = 1; i <= y ; i++)
//		Lt = x * x;
//	return Lt;
//}
int main ()
{
	double a,b;
	do {cout <<"Nhap vao 2 so a, b ( b >0) : ";
	cin >> a >> b;
	if ( b <=0 )
		cout <<"Nhap sai \n";}while ( b <=0);
	cout <<"Luy thua cua hai so la: " << LuyThua (a,b)<< endl;
	system ("pause");

}