//Tim kiem va thay the
#include<iostream>
#include <stdlib.h>
#include<time.h>
#include <bits/stdc++.h>
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
void ThayThe(int a[], int n, int x, int y)
{
		for(int i=0; i<n; i++)
		if(a[i]==x)
		replace(a, a+n, x, y);
}

int main()
{
	int a[MAX], n, x,y;
		cout<<"So luong phan tu thuc: "; 
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<"\nNhap x= ";
	cin>>x;
	cout<<"Nhap y= ";
	cin>>y;
	ThayThe(a,n,x,y);
	XuatMang(a,n);
	return 0;
}
