// ct in hinh vuong va nhap vao mot gia tri
#include <iostream>
using namespace std;

void InHinhVuong ( int h, char kt )
{
	for (int i = 1; i <= h;i++)
	{
		for (int j = 1; j <=h; j++)
			cout << kt ;
		cout << endl;
	}
	
}
int main ()
{
	int h;
	char kt;
	cout <<" Nhap vao canh hinh vuong va mot ki tu: ";
	cin >> h >> kt;
	InHinhVuong ( h, kt);
	system ("pause");

}