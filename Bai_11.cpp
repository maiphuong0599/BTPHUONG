#include<iostream>
#include <stdlib.h>
#include<time.h>
#include <bits/stdc++.h> 
#define MAX 100
using namespace std;
void NhapMang(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

int Tong(int n)
{
	int s=0;
	for(int i=0; i<=n ;i++)
		s+=i;
	return s;
}

int main()
{
	int a[MAX],n;
	cout<<"Nhap so phan tu n: ";
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<"\nS= "<<Tong(n);
}
