// Program to detect the angle between hours and minutes hand in clock
#include <iostream>
#include <cstdlib>
using namespace std;
class measure
{
	double angle;
	int hour,minutes;
	public :
	double determine(int hour,int minutes);
	
};

double measure::determine(int hour,int minutes)
{
	int an_hour,an_min;
	float an_lat;
	double angle;
	an_hour = hour * 30;
	an_min  = minutes * 6;
	an_lat  = minutes / 2;
	angle= an_hour + an_lat - an_min;
	return angle;
}
int main()
{    int hour,minutes;
	 double angle;
	 float angle1;
	measure time= measure();
	cout<<"enter the value of hours :";
	cin >> hour; 
	cout<< "enter the values of minutes : ";
	cin >> minutes;
	while (hour>12)
	{
	
		cout << "Please enter hours value correctly (should be less than 12) :";
		cin >> hour;
	}
	while (minutes>60)
	{
	
		cout << "Please enter minutes value correctly (should be less than 60) :";
		cin >> minutes;
	}
	angle=	time.determine(hour,minutes);
	if (angle < 0)
	{
			angle = -(angle);
	}
	angle= min(360-angle,angle);
	cout << "Angle between hand for given time is :" << angle; 
	
}
