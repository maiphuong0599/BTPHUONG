#include<iostream>
using namespace std;
int main()
{
	int n, str;
	cout<<"Nhap so n = ";
	cin>>n;
	int s=0;
	while(n!=0){
		str=n%10;
		s+=str;
		n/=10;		
	}
	cout<<"S = "<<s;
	return 0;
}
