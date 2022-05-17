#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int del, i, n;
    int x = -1;
    
    cin>>n;
    
    for(i=0; i<n; i++){
    	cin>>arr[i];
	}

    cin>> del;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == del)
        {
            x = i;
            break;
        }
    }

    if(x != -1)
    {
        for(i = x; i < n - 1; i++)
            arr[i] = arr[i+1];
        for(i = 0; i < n - 1; i++)
            cout<<arr[i] << " ";
    }
    return 0;
}
