#include <iostream>
using namespace std;

int height(int n) 
{
    int h;
    if (n == 0)
        return 1;
    
     for(int i=1;i<=n;i++)
        {
        	
           if(i % 2== 0)
               h = h + 1;
           else if ( i % 2 == 1)
           {   cout << "hi";
               h = 2 * h;
               cout << h;
           }
        }
    
    return h;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}

