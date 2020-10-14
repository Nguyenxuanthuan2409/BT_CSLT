#include<cmath>
#include<iostream>
using namespace std;

bool SONGUYENTO(int n)
{
	bool KQ = true;		// Hang 6: bool chu khong phai int
	if (n < 2)
	{
		KQ = false;	// Em muon gan KQ = False thi cho hang 6 em phai khai bao kieu bool
		return KQ;
	}
	else if (n == 2)	// So sanh 2 dau =
	{
		KQ = true;
		return KQ;
	}
	//else if (n % 2 == 0)	// phai them == 0. Tuc co so nao chia het cho 2
	//{
	//	KQ = false;
	//	return KQ;

	//}
	else
	{
		for (int i = 2; i <= sqrt((double)n); i++)	// i++ thôi
		{
			if (n % i == 0)
			{
				KQ = false;
				return KQ;
				//break;
			}
			
		}
		return KQ;
	}

}	// Thieu 1 dau ngoac nek co nuong. Lam la phai mo va dong lien

int main(/*int argc, char**argv*/)	// Ham main k can tham so
{
	int n;
	cout << "Nhap so nguyen n= ";
	cin >> n;
	if (SONGUYENTO(n) == true)
		cout << "So " << n << " la so nguyen to " << endl;
	else
		cout << "So " << n << " khong phai la so nguyen to " << endl;
	system("pause");
	return 0;
}

// Em co the lam cach nay ngan hon nek


//#include<iostream>
//#include < cmath>
//using namespace std;
//
//
//
//bool KT_SNT(int n)
//{
//	
//	if (n < 2)
//		return false;
//
//	else
//		{
//			double x = sqrt(n * 1.0);
//			for (int i = 2; i <= x; i++)
//			{
//				if (n % i == 0)
//					return false;
//			}
//			return true;
//		}
//}
//
//int main()
//{
//	int n;
//	cout << " Nhap vao mot so nguyen: ";
//	cin >> n;
//	if (KT_SNT(n) == true)
//		cout << "La so nguyen to\n";
//	else
//		cout << "Khong la so nguyen to\n";
//	system("pause");
//	return 0;
//}