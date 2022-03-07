/*
From decimal to binary by recursion
*/
#include<iostream>
using namespace std;
int find(int number)
{
    if (number == 0)
        return 0;
    else
        return (number % 2 + 10 *  find(number / 2));
}
int main()
{
    int number;
    cin >> number;
    cout<<find(number);
}
