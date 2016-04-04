# include <fstream>
# include <iostream>
# include <string>
# include <cstdlib>
using namespace std;

class Person
{
string name;
string college;
string country;
public:
	Person() { cout << "Constructing the person";	}
	~Person(){ cout << " Destructing the person";	}
	void SetPersonName(string X) { name = X	;}
	void SetPersonCollege(string X) { college = X;	}
	void SetPersonCountry(string X) { country = X;	}	
	string GetPersonName() { return name ;}
	string GetPersonCollege() { return college ;}
	string GetPersonCountry() { return country ;}	
	
};

void writefile();
void readfile();
void createfile();
void displayfile();
void editfile();
void showall();
char option[10];
Person *person;

int main(int argc, char *argv[])
//void main()
{

	//cout<< "-----------------------------------------------------------------" <<"\n" ;
	person = new Person();
	cout << option[0];
	while(option[0]!='q')
	{
		cout<< "----------Select one of the option from menu---------------------"<<"\n" ;
		cout<< "|              (L)oad the profile                               |" <<"\n" ;
		cout<< "|              (C)reate profile                                 |" <<"\n" ;
		cout<< "|              (S)ave the profile                               |" <<"\n" ;
		cout<< "|              (E)dit the profile                               |" <<"\n" ;
		cout<< "|              (D)isplay the profile                            |" <<"\n" ;
		cout<< "|              (A)howall the program                            |" <<"\n" ;
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
		case 'c' :
			createfile();
			break;
		case 'd' :
			displayfile();
			break;
		case 'a' :
			showall();
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
		datafile << person->GetPersonName() << "\t\n";
		datafile << person->GetPersonCollege() << "\t\n";
		datafile << person->GetPersonCountry() << "\t\n";
		datafile.close();
	}
	catch (exception X)
	{
		cout << " Failed to open file !!";
		exit(1);
	}
	
}

void createfile()
{
	person=new Person;
}
void readfile()
{
	string temp;
	try{
		ifstream datafile;
		datafile.open("sample", ios::in);
		getline(datafile,temp);
		person->SetPersonName(temp);
		getline(datafile,temp);
		person->SetPersonCollege(temp);
		getline(datafile, temp);
		person->SetPersonCountry(temp);
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
	cout << "my name is :" << person->GetPersonName() << "\t\n";
	cout << "my college name is :" << person->GetPersonCollege() << "\t\n";
	cout << "Im from  :" << person->GetPersonCountry() << "\t\n";
}

void showall()
{
		string temp;
	try{
		ifstream datafile;
		datafile.open("sample", ios::in);
		while(!datafile.eof())
		{
		getline(datafile,temp);
		person->SetPersonName(temp);
		getline(datafile,temp);
		person->SetPersonCollege(temp);
		getline(datafile, temp);
		person->SetPersonCountry(temp);
		if (datafile.bad())
			continue;		
		cout << "my name is :" << person->GetPersonName() << "\t\n";
		cout << "my college name is :" << person->GetPersonCollege() << "\t\n";
		cout << "Im from  :" << person->GetPersonCountry() << "\t\n";
		}
		datafile.close();
	}
	catch (exception X)
	{
		cout << " Failed to open file !!";
		exit(1);
	}
}
void editfile()

{
	string temp;
	
	try{
		ofstream datafile;
		datafile.open("sample", ios::app);
		
			cout << "------------Please enter below requested details--------- " << "\n";
			cout << "Enter Your Name : "<< "\n";
			cin.ignore();
			getline(cin,temp);
			person->SetPersonName(temp);
			cout << "Enter College name :" << "\n";
			getline(cin,temp);
			person->SetPersonCollege(temp);
			cout << "Enter you origin details :" << "\n";
			getline(cin,temp);	
			person->SetPersonCountry(temp);
			datafile << person->GetPersonName() << "\t\n";
			datafile << person->GetPersonCollege() << "\t\n";
			datafile << person->GetPersonCountry() << "\t\n";
			datafile.close();
	}
	catch (exception X)
	{
		cout << " Failed to open file !!";
		exit(1);
	}
	
}
