/* This Program illustrates the and does below mentioned operations in Binary tree 
			1) Add an Element to Binary tree
			2) Delete an Element from Binary tree
			3) Find the depth of tree
			4) Search for element in tree
*/			
# include <cstdlib>
# include <iostream>
using namespace std;
 
class btree
{
  
	struct node
	{
		int data;
		node *rnode;
		node *lnode;
	};
	node *root;
	node* CreateNode(int data);
	void AddNodePrivate(int data, node* Ptr);
	void ShowNodePrivate(node* ptr);
	node* SearchNodePrivate(int data,node* Ptr);

	public:
	btree();
	void AddNode(int data);
	void ShowNode(int data);
	node* SearchNode(int data);
	void GetChild(int data); 
};

btree::btree()
{
	root=NULL;
}

btree::node* btree::CreateNode(int data)
{
	node* n = new node;
	n->data = data;
	n->lnode=NULL;
	n->rnode=NULL;
	return n ;
}
void btree::GetChild(int data)
{
	node* NodeAdd=SearchNode(data);
	if(NodeAdd==NULL)
	{
		cout<< "The Value you have entered does not Exist in tree !!";
	}
	else 
	{
		NodeAdd->rnode == NULL?
		cout<< "Right Node of "<< data <<" is NULL\n":
		cout << "Right Node of " << data << " is "<< NodeAdd->rnode->data <<endl;
		NodeAdd->lnode == NULL?
		cout<< "Left Node of "<< data <<" is NULL\n":
		cout <<  "Left Node of " << data <<" is "<< NodeAdd->lnode->data << endl;
	}
}
btree::node* btree::SearchNode(int data)
{
	return SearchNodePrivate(data,root);
}
btree::node* btree::SearchNodePrivate(int data,node* Ptr)
{
	
	if(Ptr!=NULL)
	{
		if( data == Ptr->data )
		{
			return Ptr;
		}
		else if(data > Ptr->data)
		{
			if(Ptr->rnode != NULL)
			{
			SearchNodePrivate(data,Ptr->rnode);
			}
			else
			{
				return NULL;
			}
		}
			else if(data < Ptr->data)
		{
			if(Ptr->lnode != NULL)
			{
			SearchNodePrivate(data,Ptr->lnode);
			}
			else
			{
				return NULL;
			}
		}
		
	}
	else
	{
		cout<< " Trying to search for water in desert !! Its an Empty Tree !!!";
		return NULL;
	}
	
}
void btree::AddNode(int data)
{
	AddNodePrivate(data,root);
}
void btree::AddNodePrivate(int data,node* Ptr )
{
	if(root==NULL)
	{
		root=CreateNode(data);
	}
	else if(data < Ptr->data)
		{
			if(Ptr->lnode!=NULL)
			{
				AddNodePrivate(data,Ptr->lnode);
			}
			else
			{
				Ptr->lnode=CreateNode(data);
			}
		}
	else if(data > Ptr->data)
		{
			if(Ptr->rnode!=NULL)
			{
				AddNodePrivate(data,Ptr->rnode);
			}
			else
			{
				Ptr->rnode=CreateNode(data);
			}
		}
	else
	{
		cout<<" Your Lucky number already exists in tree, Sorry Try me again !!\n";
	}
}
void btree::ShowNode(int data)
{
	ShowNodePrivate(root);
}

void btree::ShowNodePrivate(node* ptr)
{
	if (root=NULL)
	{
		cout<< " Hey !!! Tree your tried to serach is Empty \n";
	}
	else
	{
	 
		if(ptr->lnode!=NULL)
			{
				ShowNodePrivate(ptr->lnode);
			}
	
		cout<<" Data in give nodes are :" << ptr->data<<"\n";
		if(ptr->rnode!=NULL)
			{
				ShowNodePrivate(ptr->rnode);
			}

	}
}

int main()
{
	char option;
	int value;
	btree b1;
//	b1.AddNode(100);
	int b[15]={2,80,30,14,23,56,17,16,96,78,36,69,99,55,22};
	for(int i=0;i<15;i++)
	{
		b1.AddNode(b[i]);
	}
	
	while(option != 'E'|| 'e')
{
	
	cout <<"------ Welcome to Naresh Binary Search Programming------------ \n";
	cout<< "| 	(A)dd new element to the tree                              |\n";
	cout<< "|	(C)Show Children of Node                                   |\n";
	cout<< "|	(D)elete an element from                                   |\n";
	cout<< "|	(S)how the nodes of the tree                               |\n";
	cout<< "|	(E)xit from menu and abort Execution                       |\n";
	cout<< "|    Please select one among the below options                : ";
	cin >> option;
	
	switch (option)
	{
		case 'e':
		case 'E':
			return 1;
			break;
		case 'A':
		case 'a':
			cout << "Enter the Value to be inserted into Tree: \n";
			cin >> value;
			b1.AddNode(value);
			break;
		case 'S':
		case 's':
				for(int i=0;i<15;i++)
					{
						b1.ShowNode(b[i]);
					}
				break;
		case 'D':
		case 'd':
			cout<<" Enter the value to be deleted from the tree :\n";
			cin >> value;
		case 'C':
		case 'c':
			cout << " Enter the value of node : \n";
			cin >> value;
			b1.GetChild(value);
			break;
		default:
			cout << " Hey Buddy!! Seemed to be that you have selected Incorrect Option !!";
			
		
	}
}
	
	return 0;
}



