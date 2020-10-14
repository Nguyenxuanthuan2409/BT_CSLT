// ct dem so nhap vao co bao nhieu chu so
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int dem = 0;
	cout <<"' Nhap vao mot so nguyen : ";
	cin >> n;
	int tam = n;
	while ( tam > 0)
	{
		dem += 1;
		tam = tam / 10;
	}
	cout <<" So ban nhap vao co tat ca " << dem << " chu so " << endl;
	system ("pause");
	return 0;
}