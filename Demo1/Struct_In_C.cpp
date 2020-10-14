#include<stdio.h>
#include<conio.h>
struct Employee
{
	char code [8];
	char name[20];
	double salary, allowance;
	
};

void InputOneEmployee ( Employee &NV)
{
	fflush(stdin);
	printf("\nNhap ma nhan vien: ");
	gets(NV.code);
	fflush(stdin);
	printf("\nNhap Ten nhan vien: ");
	gets(NV.name);
	fflush(stdin);
	printf("\nNhap vao luong nhan vien: ");
	scanf("%lf",&NV.salary);
	fflush(stdin);
	printf("\nNhap vao phu cap: ");
	scanf("%lf",&NV.allowance);

}
void OutPutOneEmployee ( Employee NV)
{
	printf("\nMa nhan vien: %s",NV.code);
	printf("\nTen Nhan Vien: %s",NV.name);
	printf("\nLuong nhan vien: %.2f",NV.salary);
	printf("\nPhu cap: %.2f",NV.allowance);

}

void InputNEmployee(Employee a[100], int n)
{
	printf("\nNhap thong tin nhan vien");
	for(int i=0;i< n;i++)
	{
		printf("\nNhan vien thu %d",i+1);
		InputOneEmployee ( a[i]);
	}
}

void OutPutNEmployee ( Employee a[100], int n)
{
	for ( int i = 0; i < n; i++)
	{
		printf("\nNnhan vien thu %d",i+1);
		OutPutOneEmployee (a[i]);
	}
	

}
int CountSalary ( Employee a[100], int n)
{
	int count = 0;
	for ( int i = 0; i < n; i++)
	{
		if ( a[i].salary > 1000)
			count++;
	}
	return count;
}
void main()
{
	int n;
	Employee a[100];
	printf("\nNhap so luong nhan vien: ");
	scanf("%d",&n);
	InputNEmployee ( a, n);
	OutPutNEmployee( a, n);
	printf ("\nSo luong nhan vien luong lon hon 1000 la: %d", CountSalary(a, n));
	getch();
}




//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//
//int main(){
//	char s[255];
//	printf("Nhap ten SV: ");
//	do{
//		gets(s);
//	} while(strlen(s)==0);
//	printf("Ten Sinh Vien ban vua nhap la: %s\n",s);
//
//	getch();
//	return 0;
//}

//#include<conio.h>
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char HoLot[30], Ten[12];
//    printf("Nhap Ho Lot: ");
//	gets(HoLot);
//    printf("Nhap Ten: ");
//	gets(Ten);
//    strcat(HoLot, Ten); /* Ghep Ten vao HoLot*/
//    printf("Ho ten la: ");
//	puts(HoLot);
//    getch();
//    return 0;
//}
