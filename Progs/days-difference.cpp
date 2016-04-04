// Program to detect the number of days between given two dates 
#include <iostream>
#include <cstdlib>
using namespace std;
class measure
{
	int dd1,mm1,yy1;
	public :
	long determine(int dd1,int mm1,int yy1);
};

long measure::determine(int dd,int mm,int yy)
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int leap_days = abs(yy-1 /4);
	int year_days = (yy-1) * 365;
	int month_days=0,total_days=0;
	for (int i=1;i<mm;i++)
	{
		month_days = month_days + month[mm-1] ;
	}
	month_days = month_days + dd;
	total_days= leap_days + year_days + month_days ;
	return total_days;
}
int main()
{    int dd,mm,yy,dd1,mm1,yy1;
	 long num_days;
	 long num_days1;
	measure time= measure();
	cout<<"enter the value of days :";
	cin >> dd; 
	cout<< "enter the values of month : ";
	cin >> mm;
	cout<< "enter the values of year : ";
	cin >> yy;
	cout<<"enter the value of days for second year:";
	cin >> dd1; 
	cout<< "enter the values of month for second year: ";
	cin >> mm1;
	cout<< "enter the values of year for second year: ";
	cin >> yy1;
	while (mm >12 || mm1 > 12)
	{
	
		cout << "Please enter month value correctly (should be less than 12) :";
		cin >> mm;
	}
	while (dd >31 || dd1 > 12)
	{
	
		cout << "Please enter days value correctly (should be less than 31) :";
		cin >> dd;
	}
	num_days =	time.determine(dd,mm,yy);
	num_days1 = time.determine(dd1,mm1,yy1);
	num_days=abs(num_days1 -num_days);
cout << "Number of days difference are :" << num_days;	
}
