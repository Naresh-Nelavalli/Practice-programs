# include <cstdlib>
# include <iostream>
# include <string>
using namespace std;
int count = 0;
int main()
{
	char option;
	int length;
	string inputs;
	cout<< "Enter the string to check :";
	cin >> inputs;
	length = inputs.size();
	void compare_str(char c1,char c2);
	//cout<<"the length of string is :" << length<< endl ;
	for(int i=0;i < length/2;i++)
	{
	
	compare_str(inputs[i],inputs[length-1-i]);
	
	}
	
	cout<< " the number of iterations required to convert in to palindrome is : " << count << endl;
	return 0;
}


	void compare_str(char c1, char c2)
	{
		char get_prev(char t);
		while( c1 != c2)
		{
			if (c1 < c2 )
			{
				c2 = get_prev(c2);
				count= count + 1;
							
			}
			else if(c1 > c2)
			{
				c1 = get_prev(c1);
				count= count + 1;
				
			}
			else
			{
				continue;
			}
		}
		
	}
	
	char get_prev(char t)
	{
		int n= (int) t;
		t= char(n-1);
		return t;
	}
