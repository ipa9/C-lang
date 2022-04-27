#include<iostream>
using namespace std;
int main()
{
	int n, i, a[100], j, temp;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}

	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	cout<<"Sorted list in ascending order :\n";
	for(i=0; i<n; i++)
	{
		cout<<"The "<< i+1 << " number is: " << a[i]<<"\n";
	}
}
