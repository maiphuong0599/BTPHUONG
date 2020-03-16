//kiem tra mang doi xung, tang dan, sap xep mang tang dan
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

int DoiXung(int a[],int n)
{	
	for(int i=0; i<n/2 ;i++){
		if(a[i]!=a[n-1-i]) 
		return -1;
	}
	return 1; 	
}

int TangDan(int a[], int n) {
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]) return false;
    }
    return true;

}

void SXTangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
int main()
{
	int a[MAX], n;
	cout<<"Nhap so luong phan tu n: ";
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	DoiXung(a,n);
	if (DoiXung(a,n)==1){
		cout << "\nDX" << endl;
	}else 
		cout << "\nKDX" << endl;
	if (TangDan(a,n)==1){
		cout << "TD" << endl;
	}else 
		cout << "KTD" << endl;
	SXTangDan(a,n);
	XuatMang(a,n);
		
	return 0;
}
