// Chuong trinh bt 9
#include <iostream>
using namespace std;

int main ()
{
	int canh;
	cout <<"Nhap vao canh: ";
	cin >> canh;
	for (int i =1;i <= canh;i++)
	{
		for (int j =1; j <= 2 * canh +1; j++)
			if (j == canh +1)
				cout <<" ";
			else
				if ((j >= 1 && j <= canh)|| j == canh +2|| j == 2*canh+1||i ==1||i == canh||j == canh)
					cout <<"*";
				else
					cout <<" ";
		cout << endl;
	}
	getchar ();
	getchar ();
	return 0;
}