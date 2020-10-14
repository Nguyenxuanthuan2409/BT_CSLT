// ct tinh nang nhu may tinh bo tui.
# include <iostream>
# include <cmath>
# include <iomanip>
 using namespace std;
 
 int main ()
 {
	 int a,b,chon;
	 cout << " nhap 2 so nguyen:   ";
	 cin >> a >> b;
	 cout << "  cac phep tinh cung cap: \n ";
	 cout << " 1.Cong (+)    \n";
	 cout << " 2.Tru  (-)     \n";  
	 cout << " 3.Nhan (*)      \n";
	 cout << " 4.CHia (/)       \n";
	 cout << " 5.Chia lay du (%) \n";
	 cout << " 6.Thoat            \n";
	 cout << " ban chon ? ";
	 cin >> chon;

	 switch ( chon)
	 {
	 case 1: cout << a << "+" << b << "=" <<  a + b << endl; break;
	 case 2: cout << a << "-" << b << "=" <<  a - b << endl; break;
	 case 3: cout << a << "*" << b << "=" <<  a * b << endl; break;
	 case 4: 
		 if ( b==0)
			 cout << " phep chia sai " << endl;
		 else
			 cout << a << "/" << b << "=" <<  a / b << endl; break;
	 case 5: 
		  if ( b==0)
			 cout << " phep chia sai " << endl;
		  else
			  cout << a << "%" << b << "=" <<  a % b << endl; break;
	 case 6: cout << " Tam biet ban  "; break;
	 default:
		 cout << " nhap khong hop le " << endl;

	 }
	 system ("pause");
	 return 0;

 }
