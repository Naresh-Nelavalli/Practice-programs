#include <iostream>
#include <map>
#include <utility>

using namespace std ;

class test()
{
	
}

int main()
{
	multimap<string,string> naresh;
	naresh.insert(pair<string,string>("Ram","9704088661"));
	naresh.insert(pair<string,string>("Sam","9704088669"));
	naresh.insert(pair<string,string>("Ram","9704088662"));
	naresh.insert(pair<string,string>("Sam","9704088663"));
	naresh.insert(pair<string,string>("Ram","9704088664"));
	naresh.insert(pair<string,string>("Sam","9704088665"));
	string searchName = "Ram";
	multimap<string,string>::iterator id= naresh.find(searchName);
	multimap<string,string>::iterator last= naresh.upper_bound(searchName);
	for (;id!= last ; ++ id )
	{
		cout<<id->first<<":"<<
		id->second << endl;
	}	
	return 0;
}
