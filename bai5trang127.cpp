// ct yeu cau nhap vao mot chuoi so nguyen va ket thuc bang Ctrt + Z
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int demchan = 0;
	int demle = 0;
	int max = INT_MIN;
	int min = INT_MAX;
	cout <<" Nhap vao mot chuoi so nguyen va ket thuc bang Ctrt + Z : ";
	while (cin >> n)
	{
		if (min > n)
			min = n;
		else
			if (max < n)
				max = n;
		if ( n % 2 == 0)
			demchan ++;
		else
			demle ++;
	}
	cout <<" Gia tri nho nhat la: " << min << endl;
	cout <<" Gia tri lon nhat la: " << max << endl;
	cout <<" Co " << demchan << " so chan " << endl;
	cout <<" Co " << demle << " so le " << endl;
	system ("pause");
	return 0;
}