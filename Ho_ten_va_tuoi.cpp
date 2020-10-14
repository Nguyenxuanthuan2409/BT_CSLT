// ct in ra man hinh ho ten va tui
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string hoten;
	int tuoi;

	cout << "Ho va ten cua ban: ";
	getline (cin, hoten);
	cout << "Ban bao nhieu tuoi: ";
	cin >> tuoi;
	cout <<"Chao: "<< hoten << "\t" << tuoi <<"tuoi";
	getchar ();
	getchar ();
	return 0;
}