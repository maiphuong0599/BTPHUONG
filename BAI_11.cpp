#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define MAX 15

void NhapMang(int a[],int n)
{
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=1 + rand()%n;
	}
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

int Tongam(int a[],int n)
{
	int s=0;
	for(int i=0; i<n ;i++)
		if(a[i]<0){
			s+=a[i];
		}
	return s;
}

double TBTchan(int a[], int n)
{
	double avg,s=0;
	int dem=0;
	for(int i=0 ; i<n ; i++){
		if(a[i]%2==0)
		{
			s+=a[i];
			dem++;
		}
	avg=double(s/dem);
	}
	return avg;
}

int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}

void Hoanvi(int &y, int &z)
{
	int x=y;
	y=z;
	z=x;
}

void GiamDan(int a[], int n)
{
	for(int i=0; i<n-1; i++) 
		for(int j=i+1; j<n; j++) 
			if(a[j]>a[i]) 
				Hoanvi(a[i], a[j]);	
	
}

int main()
{
	int n, a[MAX];
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	XuatMang(a,n);
	cout <<"\nTong cac phan tu am cua mang: " << Tongam(a,n)<<endl;
	cout <<"Trung binh cong cua so chan: " << TBTchan(a,n)<<endl;
	cout <<"Max: " << max(a,n)<<endl;
	cout <<"Min: " << min(a,n)<<endl;
	cout <<"Day giam dan: ";
	GiamDan(a,n);
	XuatMang(a,n);
	return 0;
}
