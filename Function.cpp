//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int timMax(int a, int b)
//{
//	int Max;
//	if (a > b)
//		Max = a;
//	else
//		Max = b;
//	return Max;
//}
//
//int tong(int n)
//{
//	int tong = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		tong += i;
//	}
//	return tong;
//}
//
//double trungbinh(int a, int b)
//{
//	double tb;
//	tb = (a + b) / 2;
//	return tb;
//}
//
//int giaithua(int n)
//{
//	int gt = 1;;
//	for (int i = 1; i <= n; i++)
//	{
//		gt = gt * i;
//	}
//	return gt;
//}
//
//void Fibonacci(int n)
//{
//	int a = 0, b = 1, c;
//	cout << "Day Fibonacci : " << " 0  1  ";
//	for (int i = 2; i < n; i++)
//	{
//		c = a + b;
//		cout << c << "  ";
//		a = b;
//		b = c;
//	}
//}
//
//bool isSoNguyenTo(int a)
//{
//	bool kt = true;
//	for (int i = 2; i < a; i++)
//	{
//		if (a%i == 0)
//		{
//			kt = false;
//			break;
//		}
//	}
//	return kt;
//}
//
//int doiCoSo(int n)
//{
//	int sonhiphan = 0;
//	int k = 0;
//	while (n > 0)
//	{
//		sonhiphan = n % 2 * pow(10, k) + sonhiphan;
//		n = n / 2;
//		k++;
//	}
//	return sonhiphan;
//}
//
//void inHinhVuong(int soCanh)
//{
//	for (int i = 0; i < soCanh; i++)
//	{
//		for(int j=0;j<soCanh;j++)
//			cout << "*";
//		cout << endl;
//	}
//}
//
//void tamgiac(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout<<setw(i+1);
//		for (int j = 0; j < n - i ; j++)
//			cout<<"*";
//		cout << endl;
//	}
//}
//
//void main()
//{
//	// fibonacci
//	/*int n;
//	cout << "Nhap so luong n : "; cin >> n;
//	Fibonacci(n);*/ 
//
//	// in so nguyen to tu 1 -> n
//	/*int n;
//	cout << "Nhap n : "; cin >> n;
//	for (int i =1; i < n; i++)
//	{
//		if (isSoNguyenTo(i))
//			cout << i << "  ";
//	}*/
//
//	// in hinh vuong 
//	/*int soCanh;
//	cout << "Nhap chieu dai canh : "; cin >> soCanh;
//	inHinhVuong(soCanh);*/
//
//	// doi cac so tu 1 -> n tu co he 10 sang he so 2
//	/*int n;
//	cout << " Nhap n : "; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << i << " : " << doiCoSo(i) << endl;
//	}*/
//
//	// ve tam giac
//	/*int n;
//	cout << "Nhap n : "; cin >> n;
//	tamgiac(n);*/
//	cout << endl;
//	system("pause");
//}
//
//
