# include <fstream>
# include <iostream>
# include <string>
# include <cstdlib>
using namespace std;
void writefile();
void readfile();
void displayfile();
void editfile();
char option[10];
string name;
string college;
string country;

int main(int argc, char *argv[])
//void main()
{

	//cout<< "-----------------------------------------------------------------" <<"\n" ;
	
	cout << option[0];
	while(option[0]!='q')
	{
		cout<< "----------Select one of the option from menu---------------------"<<"\n" ;
		cout<< "|              (L)oad the profile                               |" <<"\n" ;
		cout<< "|              (C)reate profile                                 |" <<"\n" ;
		cout<< "|              (S)ave the profile                               |" <<"\n" ;
		cout<< "|              (E)dit the profile                               |" <<"\n" ;
		cout<< "|              (D)isplay the profile                            |" <<"\n" ;
		cout<< "|              (Q)uit the program                               |" <<"\n" ;
		cin >> option; 
	switch (option[0])
	{
	
		case 'l' :
			readfile();
			cout<< " Successfully loaded file !!!";
			//displayfile();
			break;
		case 's' :
			writefile();
			cout<< "successfully written file !!!";
			break;
		case 'e' :
			editfile();
			break;
		//case "c" :
		//	break;
		case 'd' :
			displayfile();
			break;
		case 'q' :
			exit(0);
			break;	
		default:
			cout<<" Hey yaa !! To meet you honey select correct option ";
			break;
	}
	}
	return 0;
	
}
void writefile()
{
	try{
		ofstream datafile;
		datafile.open("sample", ios::out);
		datafile << "Name : Naresh Nelavalli" << "\t\n";
		datafile << "College : Villanova University" << "\t\n";
		datafile << "Country  : INDIA" << "\t\n";
		datafile.close();
	}
	catch (exception X)
	{
		cout << " Failed to open file !!";
		exit(1);
	}
	
}

void readfile()
{

	try{
		ifstream datafile;
		datafile.open("sample", ios::in);
		//datafile >> name ;
		//datafile >> college;
		//datafile >> country;
		getline(datafile, name);
		getline(datafile, college);
		getline(datafile, country);
		datafile.close();
	}
	catch (exception X)
	{
		cout << " Failed to open file !!";
		exit(1);
	}

}

void displayfile()
{
	cout << "my name is :" << name << "\t\n";
	cout << "my college name is :" << college << "\t\n";
	cout << "Im from  :" << country << "\t\n";
}

void editfile()

{
	
	try{
		ofstream datafile;
		datafile.open("sample", ios::app);
		
			cout << "------------Please enter below requested details--------- " << "\n";
			cout << "Enter Your Name : "<< "\n";
			cin.ignore();
			getline(cin,name);
			datafile << name ;
			cout << "Enter College name :" << "\n";
			getline(cin,college);
			datafile << college;
			cout << "Enter you origin details :" << "\n";
			getline(cin,country);	
			datafile << country;
			datafile.close();
	}
	catch (exception X)
	{
		cout << " Failed to open file !!";
		exit(1);
	}
	
}
