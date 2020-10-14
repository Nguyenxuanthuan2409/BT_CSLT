// chuong trinh in ra man hinh so ngay tinh tu dau nam ts ngay nhap la bao nhieu ngay
// ngay dau tien cach ngay nhap
#include <iostream>
using namespace std;
int main ()
{
	int ngay,thang,nam;
	cout <<" Nhap vao ngay, thang, nam can tinh: ";
	cin >> ngay >> thang >> nam;
	int songay = ngay;// de bat dau tinh tu cac thang con lai, ngay da tinh r
	for ( int i = 1; i < thang ; i++)
	{
		switch ( i )
		{
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
			songay += 31;
			break;
		case 4 : case 6 : case 9 : case 11 :
			songay +=30;
			break;
		default :
			if ( nam % 4 ==0 && nam != 100 || nam % 400 == 0 )
				songay += 29;
			else
				songay += 28;
		}
	}
	cout <<" Ngay nhap cach ngay dau tien trong nam la: " << songay << endl;
	system ("pause");
	return 0;
}
