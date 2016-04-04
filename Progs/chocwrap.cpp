#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    //cin>>t;
    t =1;
    while(t--){
        //cin>>n>>c>>m;
        n=6;
        c=2;
        m=2;
        int answer=0;
        int rem =0;
        // Computer answer
        int numchoc = n/c;
        answer = numchoc;
        while(numchoc + rem >= m)
            {
            int t =numchoc;
             numchoc = (numchoc + rem) / m;
             if ( t > m)
             {
             rem = t%m;
         	 }
         	 else
         	 {
         	 	rem=0;
			  }
             answer= answer + numchoc;
              
            }
  
        
        cout<<answer<<endl;
    }
    return 0;
}

