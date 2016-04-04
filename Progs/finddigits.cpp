#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
     while(n--)
     {
        long long k ;
        long  long temp = 0;
        long long answer =0;
        int digit=0;
        cin >> k;
        temp = k;
        while(temp > 9)
        {
        	digit = temp % 10;
        	if (digit != 0)
        	{
        	if (k % digit ==0)
        	{
        		answer = answer + 1;
			}
			}
			temp = temp / 10;
		}
		
		if (temp < 10 )
		{
			if (k % temp == 0)
			{
				answer = answer + 1;
			}
			
		 } 
		 
		 cout << answer;

     }
    return 0;
}

