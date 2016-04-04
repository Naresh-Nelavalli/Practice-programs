#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    n=4;
	int **input = new int*[n];
		for (int i = 0; i < n; i++)
		{
    		input[i] = new int[n];
    		input[i] = 0;
    	}
    	
    	
    	for (int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			cout << "Enter the value for a[" << i <<"]["<<j<<"] :" << endl;
    			cin >> input[i][j];
			}
		}
		
		for (int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			cout <<input[i][j] << "\t";
			}
			
			cout << endl;
		}
		
		return 0;
}
