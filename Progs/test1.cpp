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
	public:
		btree()
		{
			root = NULL;
		}
		void AddNode(int data);
	//void ShowNode(int data);
	
};


btree::node* btree::CreateNode(int data)
{
	node* n = new node;
	n->data = data;
	n->lnode=NULL;
	n->rnode=NULL;
	return n ;
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
		else
	{
		cout<<" The value you tried to enter already exists in tree\n";
		cout<<root;
	}
}

int main()
{
	btree b1;
	b1.AddNode(100);
	int b[15]={2,80,30,14,23,56,17,16,96,78,36,69,99,55,22};
	for(int i=0;i<14;i++)
	{
		cout <<b[i];
		b1.AddNode(b[i]);
	}
	return 0;
}



