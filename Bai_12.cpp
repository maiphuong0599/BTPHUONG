// Kiem tra so n co phai la so nguyen to
#include<iostream>
#define MAX 100
using namespace std;

int SNT(int x)
{
	if(x<2)
		return -1;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return -1;
	return 1;
}

int main()
{
	int a[MAX],n;
	cout<<"Nhap so n: ";
	cin>>n;
	if(SNT(n)==1)
		cout<<"La SNT";
	else
		cout<<" Khong phai la SNT";
	return 0;
}	
