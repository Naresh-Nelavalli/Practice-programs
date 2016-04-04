// Binary Execution - Insertion , Sorting and Deleting the values 
# include <iostream>
# include <cstdlib>
using namespace std;
class btree{

	public:	
	struct node{
	int data;
	node* lnode;
	node* rnode;
	};

		//btree()
		node* root;
		node* CreateNode(int data);
		void AddNode1(int data);
		void ShowNode1();
		void ShowNode(node* root);
		void AddNode(int data,node* ptr);
		
};

btree::node* btree::CreateNode(int data)
{
	node* n =new node;
	n-> data = data;
	n-> lnode=NULL;
	n-> rnode=NULL;
	return n;
}
void btree::AddNode1(int data)
{
	AddNode(data,root);
}
void btree::AddNode(int data, node* ptr )
{
	if (root==NULL)
	{
		root = CreateNode(data);
	}
	else if (data < ptr->data)
	{
		if (ptr->lnode != NULL)
		{
			AddNode(data,ptr->lnode);
		}
		else
		{
			ptr->lnode = CreateNode(data);
		}
	}
	else if (data > ptr->data)
	{
		if (ptr->rnode != NULL)
		{
			AddNode(data,ptr->rnode);
		}
			else
		{
			ptr->rnode = CreateNode(data);
		}
	}
	else
	{
		cout<<"there are aleardy value in key";
	}
}
void btree::ShowNode1()
{
	ShowNode(root);
}

void btree::ShowNode(node* ptr)
{
	if (root=NULL)
	{
		cout<< " Hey !!! Tree your tried to serach is Empty ";
	}
	else
	{
	 
	if(ptr->lnode!=NULL)
	{
		ShowNode(ptr->lnode);
	}
		cout<<" Data in give nodes are :" << ptr->data;
	if(ptr->rnode!=NULL)
	{
		ShowNode(ptr->rnode);
		cout<<ptr->data;
	}
	}
}
int main()
{
	char option;
	int key;
	btree b1;
/*	while (option != 'e')
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
	}
		if (option=='s')
	{
		ShowNode()
	}

	return 0;
	} 
	int b[15]={2,80,30,14,23,56,17,16,96,78,36,69,99,55,22};
	
	for(int i=0;i<15;i++)
	{
		b1.AddNode1(b[i]);
	}
	for(int i=0;i<15;i++)
	{
		b1.ShowNode1();
	}*/
	b1.ShowNode1();
	return 0;
}
