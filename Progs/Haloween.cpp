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
        long long k = 0;
        long  long temp = 0;
        long long answer =0;
         cin >> k;
         if (k % 2 == 0)
             {
               answer = k/2 * k/2;
               cout << answer << endl;
              }
         else
             {
               temp = (k+1)/2;
               answer = temp * (temp - 1);
               cout << answer << endl;
              }
     }
    return 0;
}

