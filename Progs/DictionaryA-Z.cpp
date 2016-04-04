// multimap::equal_range
#include <iostream>
#include <map>
using namespace std;

  multimap<char,int> mymm;
  multimap<char,int>::iterator it	;
  
void inser(char ch,int num)
{

  mymm.insert(pair<char,int>(ch,num));
}
void display()
{
	 std::cout << "mymm contains:\n";
  for (char ch='a'; ch<='z'; ch++)
  {
    pair <multimap<char,int>::iterator,multimap<char,int>::iterator> ret;
    ret = mymm.equal_range(ch);
    cout << ch << " =>";
    for (it=ret.first; it!=ret.second; ++it)
      cout << ' ' << it->second;
      cout << '\n';
  }
}
int main ()

{
	char option,key;
	int value;
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
		cin >> key;
		cout << "Enter value associated to key :";
		cin >> value;
		inser(key,value);
	}
	if (option=='s')
	{
		display ();
	}
    }
  return 0;
}
