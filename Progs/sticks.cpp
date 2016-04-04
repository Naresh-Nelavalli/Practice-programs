#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	int n=0;
	int count = 0;
	int small=0;
	cout << " Enter the lenght of n:";
	cin >> n;
	void bsort(int *a,int size);
	int *a = new int[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	
	while(a[n-1]!=0)
	{	
	int x=0;
	bsort(a,n);
	
	for (int i=0;i<n;i++)
	{
		if(a[i] != 0)
		{
			small = a[i];
			break;
		}
	}
	
	for (int i=0;i<n;i++)
	{ 
		if (a[i] > 0)
		{
			a[i]=a[i]-small;
			x=x+1;
		}
	}
	
	
	cout << "The Count is :" << x <<endl;
	}
	 

	return 0;
	}
	
	
void bsort(int *a,int size)
{
	int size1=size;
	for(int j=0;j<size;j++)
	{
			int switch1=0;
		for(int i=0;i<size1-1;i++)
		
			{
				if(a[i] > a[i+1])
					{
						int c =a[i];
						a[i]=a[i+1];
						a[i+1]=c;
						switch1=1;
					}
			}
		if (switch1==0)
		{
			
			break;
		}
	}

}
