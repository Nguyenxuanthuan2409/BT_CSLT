// 
#include <iostream>
using namespace std;
const int arrsize = 100;
double arr[ arrsize];
void Nhap ( int arr[], int arrsize )
{
	for ( int i =0; i <= arrsize -1;i++)
		cin >> arr [i];
}
void Xuat (const int arr[], int arrsize )
{
	for ( int i =0; i <= arrsize -1; i++)
		cout << arr[i] <<" , " ;
	cout << endl;
}
bool Tim ( const int arr[], int arrsize, int x )
{
	for ( int i =0; i <= arrsize -1;i++)
		{if ( arr[i] == x )
			return true;
		}
	return false;
}
void DaoNguoc ( int arr[], int arrsize)
{
	int left = 0;
	int right = arrsize - 1;
	for ( int i =0; i <= arrsize - 1; i++)
	{
		while ( arr[left] < arr[right] )
		{
			int tam = arr[left];
			arr[left] = arr[right];
			arr[right] = tam;
			left ++;
			right --;
		}
	}
}
void Xoa ( int arr[], int & arrsize, int vt )
{
	if ( vt == arrsize - 1)
		arrsize --;
	else
	{
		for ( int i = vt; i < arrsize - 1; i++)
			arr[i] = arr[ i +1];
		arrsize--;
	}
}
int main ()
{
	int n,x, vt;
	int arr[ arrsize ];
	cout <<" Ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap vao cac gia tri cua mang: ";
	Nhap ( arr, n );
	Xuat ( arr, n );
	cout <<" Ban muon tim gia tri nao: ";
	cin >> x;
	if ( Tim ( arr, n , x ) == true )
		cout << x << " co trong mang\n";
	else
		cout << x << " Khong co trong mang\n";
	//DaoNguoc ( arr, n );
	//cout <<" Mang sau khi dao nguoc la: ";
	//Xuat ( arr, n );
	///*DaoNguoc ( arr, n );*/
	cout <<" ban muon xoa phan tu tai vi tri : ";
	cin >> vt;
	/*DaoNguoc ( arr, n );*/
	Xoa ( arr, n , vt );
	Xuat ( arr, n );
	system ("pause");
	return 0;

}