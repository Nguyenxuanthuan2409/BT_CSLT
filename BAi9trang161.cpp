// ct kiem tra ki tu chu hay so
#include <iostream>
#include <string>
using namespace std;

bool LaKiTuChu ( char kt )
{
	if ( kt >= 'A' && kt <= 'Z'|| kt >='a' && kt <='z')
		return true;
	return false;
}
bool LaKiTuSo (char kt)
{
	if ( kt >= '0' && kt <= '9')
		return true;
	return false;
}
int main ()
{
	string s;
	int demso = 0,demchu = 0;
	cout <<"Nhap vao mot chuoi: ";
	getline (cin, s);
	for (int i= 0;i < s.length();i++)
	{
		if ( LaKiTuSo (s.at(i)) == true)
			demso ++;
		if ( LaKiTuChu (s.at(i))==true)
			demchu ++;
	}
	cout <<"Cac Ki Tu so dem duoc la: " << demso << endl;
	cout <<"Cac Ki Tu chu dem duoc la: " << demchu << endl;
	system ( "pause" );
	return 0;

}