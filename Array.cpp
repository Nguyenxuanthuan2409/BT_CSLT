//#define Max 100
//#include<iostream>
//using namespace std;
//void NhapMang(int a[],int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap phan tu a" << "[ " << i+1 << " ] : "; cin >> a[i];
//	}
//}
//void XuatMang(int a[], int n)
//{
//	cout << "Mang a : ";
//	for(int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//int timMax(int a[], int n)
//{
//	int max = INT_MIN;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	return max;
//}
//bool Tim(int arr[],int size,int x)
//{
//	bool kq = false;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == x)
//		{
//			kq = true;
//			break;
//		}
//		else
//			kq = false;
//	}
//	return kq;
//}
//void xoa(int arr[], int &size, int vt)
//{
//	if (vt <= size && vt > 0)
//	{
//		if (vt != size )
//		{
//			for (int i = vt-1; i <= size; i++)
//				arr[i] = arr[i + 1];
//		}
//		size--;
//	}
//	else
//		cout << "Khong co phan tu nao o vi tri " << vt << endl;
//}
//void them(int arr[], int &size, int vt,int x)
//{
//	int i;
//	if (vt > 0 && vt <= size + 1)
//	{
//		size++;
//		if (vt == size)
//		{
//			arr[vt - 1] = x;
//		}
//		else
//		{
//			for (i = size; i >= vt ; i--)
//			{
//				arr[i-1] = arr[i-2];
//			}
//			arr[vt-1] = x;
//		}
//	}
//	else
//		cout << "a";
//}
//void main()
//{
//	int a[100];
//	int size;
//	cout << "Nhap so luong phan tu mang : "; cin >> size;
//	NhapMang(a, size);
//	them(a, size, 1,999);
//	XuatMang(a, size);
//	cout << endl;
//	cout << "Phan tu lon nhat trong mang la : " << timMax(a, size) << endl;
//	system("pause");
//}
