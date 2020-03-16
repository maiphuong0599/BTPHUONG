//Viet ham dem so lan xuat hien phan tu x co trong mang.

#include<iostream>
#include <stdlib.h>
#include<time.h>
#define MAX 100
using namespace std;
void NhapMang(int a[],int n)
{
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]= -100 + rand()%201;
	}
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

void SoLanXuatHienPTuX(int a[], int n, int x)
{
	int DemPTuX=0;
	for(int i=0; i<n; i++)
		if(a[i]==x)
			DemPTuX = DemPTuX + 1;
	cout<<"So phan tu "<< x <<" xuat hien trong Mang la: "<<DemPTuX;

}

int main()
{
	int a[MAX], n, x;
		cout<<"So luong phan tu thuc: "; 
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<"\nSo phan tu x can kiem tra: "; 
	cin>>x;
	SoLanXuatHienPTuX(a,n,x);
	cout<<endl;
	return 0;
}
