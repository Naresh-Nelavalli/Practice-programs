# include<cstdlib>
# include<iostream>
# include<vector>
# include<string>
using namespace std;
 int main()
 {
 	string s,st;
 	cin>> s;
 	int hour,min,sec;
 
 
 	st = s.substr(0,2);
	hour = atoi(st.c_str()); 
	string isitAM;
	isitAM=s.substr(8,2);
	
 if (isitAM.compare(0,2,"AM") == 0)
	{
		if(hour==12)
		{
			hour = 0;
		
		}
		if (hour<10)
			{
			cout<<'0'<<hour<<s.substr(2,6)<<endl;
			}
		else
			{
			cout<<hour<<s.substr(2,6)<<endl;
			}
	}
else 
	{
		if (hour != 12)
		{
		hour = hour + 12;
		}
	cout<<hour<<s.substr(2,6)<<endl;
	}
	

 	
 	
 	return 0;
 }
