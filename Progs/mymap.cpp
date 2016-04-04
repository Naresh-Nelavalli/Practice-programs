// multimap::equal_range
#include <iostream>
#include <map>
#include <string>
using namespace std;

  multimap<int,int> mymm;
  multimap<int,int>::iterator it	;
  
void inser(int ch,int num)
{

  mymm.insert(pair<int,int>(ch,num));
}
void display(int name)
{
	 std::cout << "mymm contains:\n";
 	int searchName = name;
	multimap<int,int>::iterator id= mymm.find(searchName);
	multimap<int,int>::iterator last= mymm.upper_bound(searchName);
	for (;id!= last ; ++ id )
	{
		cout<<id->first<<":"<<
		id->second << endl;
	}	
}
int main ()

{
	char option;
	int carno;
	int key, value;
	int key1 ;
	while (option != 'e')
	{
	
		cout << " Please select option below : "<< "\n";
		cout << "      (I)nsert an element     "<< "\n";
		cout << "      (S)how element          "<< "\n";
		cout << "      (E)xit -  Take me away  "<< "\n";
		cin  >> option;
	
   if (option=='e')
   	{
   		return(1);
	}
	if (option=='i')
	{
		cout << "Enter the value of key :";
		cin >> carno;
		key = carno % 10;
		value=carno;
		cout << key <<":"<<value;
		inser(key,value);
	}
	if (option=='s')
	{
		
		cout << "Enter the key value you are looking for :";
		cin >> key1;
		display (key1);
	}
    }
  return 0;
}
