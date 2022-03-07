#include<iostream>
using namespace std;
int pow(int x1, int x2);
int main()
{
    int n, n1, p;
    cout<<"Enter n: ";
    cin>> n;

    cout<<"Enter power: ";
    cin>> n1;

    p = pow(n, n1);
    cout<<n<<" Par power "<<n1<<" = "<<p;
}

int pow(int num, int p1)
{
    if(p1 == 0)
        return 1;
    return num*pow(num,p1-1);
}
