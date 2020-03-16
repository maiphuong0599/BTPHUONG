#include <iostream>
using namespace std;
int USCLN(int a, int b)
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int BSCNN(int a, int b)
{
    int result = USCLN(a, b);
    return a * b / result;
}

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    USCLN(a,b);
    cout << "UCSLN : "<<USCLN(a,b);
    BSCNN(a,b);
    cout << "\nBSCNN : " <<BSCNN(a,b);
}
