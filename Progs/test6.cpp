#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    
    int *a = new int[n];
    for (int i=0;i<n;i++)
    {
    	cout << "Enter the value :";
    	cin >> a[i];
	}
	std::vector<int> myvector (a, a+n);              
    std::sort (myvector.begin(), myvector.begin()+n);   
    /*while(n--)
     {
        cout << a[n];
     }*/
	std::cout << "myvector contains:";
  	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    	std::cout << ' ' << *it;
  		std::cout << '\n';
    return 0;
}

