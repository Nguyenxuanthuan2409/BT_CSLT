// chuc mung sinh nhat
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main ()
{
	string hoten;
	int tuoi;
	cout <<" Moi ban nhap vao ho va ten cua ban: ";
	getline ( cin , hoten );
	do {
		cout <<" Moi ban nhap vao tuoi cua minh hien tai: ";
		cin >> tuoi;
		if ( tuoi <= 0 )
			cout <<" Ban ngu qua. Tuoi ma co so am na ban\n";
		else
			if (tuoi > 105)
				cout <<" Ban gia qua roi. Ban la nguoi ngoai hanh tinh\n";
		_getch ();
		system ("cls");
		} while ( tuoi <= 0 || tuoi > 105);
	cout <<" Chuc mung sinh nhat ban: " << hoten << endl;
	cout <<" Hien nay ban da tron: " << tuoi << " tuoi roi "<< endl;
	cout <<" Chuc mung sinh nhat nhe ban cua tui. Chuc ban mot ngay sinh nhat that vui ve\n"
		 <<" Them mot tuoi moi them nheu niem vui, luon mim cuoi va thanh cong trong cuoc song nha.\n"
		 <<" \n "
		 <<" ********************* HAPPY BIRTHDAY TO YOU ************************\n";
	cout <<" \t " " \t " " \t " " \t " " \t " " \t " " Than tang \n";
	cout <<" \t " " \t " " \t " " \t " " \t " " \t " " \b " " \b " " Thuan \n";
	cout <<" \t " " \t " " \t " " \t " " \t " "\b " " \b " " \b " " \b " " \b " " Nguyen Xuan Thuan \n ";
	_getch ();
	system ("pause");
	return 0;
}