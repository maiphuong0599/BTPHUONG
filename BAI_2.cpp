#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define MAX 1000

void NhapMang(int a[],int n)
{
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i] = rand() % 100;
	}
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

int Tong(int a[],int n)
{
	int s=0;
	for(int i=0; i<n ;i++)
		{
			s+=a[i];
		}
	return s;
}

int Chiahet5(int a[], int n)
{
	int s=0;
	for(int i=0; i<n; i++)
		if(a[i]>0 && a[i]%5==0)
			s += a[i];
	return s;
}

bool SNT(int x)
{
	if(x<2)
		return -1;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return -1;
	return 1;
}

int TongSNT(int a[], int n)
{
	int s=0;
	for(int i=0; i<n; i++)
		if(SNT(a[i])==true)
			s+= a[i];
	return s;
}

int main()
{
	int n, a[MAX];
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	XuatMang(a,n);
	cout<<"\nTong cac phan tu trong mang: "<<Tong(a,n)<<endl;
	cout<<"Tong cac phan tu chia het cho 5: "<<Chiahet5(a,n)<<endl;
	cout<<"Tong cac phan tu là SNT: "<<TongSNT(a,n);
	return 0;
}

