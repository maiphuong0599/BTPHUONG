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

void ThemPhanTuVaoMang(int a[], int &n, int idx, int x)
{
	if (idx >= 0 && idx <= n)
	{
		for (int i = n; i > idx; i--)
			a[i] = a[i - 1];
		a[idx] = x;
		n++;
	}
}
void XoaMotPhanTuTrongMang(int a[], int &n, int de)
{
	if (de >= 0 && de < n)
	{
		for (int i = de; i < n - 1; i++)
			a[i] = a[i + 1];
		n--;
	}
}
int main()
{
	int a[MAX],n,idx,x,de;
	cout<<"Nhap so luong phan tu n: ";
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	cout << "\nNhap vi tri can them: ";
	cin >> idx;
	cout << "\nNhap gia tri can them: ";
	cin >> x;
	ThemPhanTuVaoMang(a,n,idx,x);
	XuatMang(a,n);
	cout << "\nNhap vi tri can xoa: ";
	cin >> de;
	XoaMotPhanTuTrongMang(a,n,de);
	XuatMang(a,n);
	return 0;
	
}
