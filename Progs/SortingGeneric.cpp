//Various Sorting Algorithms - 
/*
Insertion Sorting 
for i = 2:n,
    for (k = i; k > 1 and a[k] < a[k-1]; k--) 
        swap a[k,k-1]
    ? invariant: a[1..i] is sorted
end

Selection Sorting 

for i = 1:n,
    k = i
    for j = i+1:n, if a[j] < a[k], k = j
    ? invariant: a[k] smallest of a[i..n]
    swap a[i,k]
    ? invariant: a[1..i] in final position
end

Bubble Sorting 

for i = 1:n,
    swapped = false
    for j = n:i+1, 
        if a[j] < a[j-1], 
            swap a[j,j-1]
            swapped = true
    ? invariant: a[1..i] in final position
    break if not swapped
end



*/

# include <iostream>
# include <cstdlib>
using namespace std;

class bubble
{
int *a,size;
public:
bubble(int *b, int t)
{
	a=b;
	size=t;
}
void swap();
void bsort();	
};

void bubble::bsort()
{
	int size1=size;
	for(int j=0;j<size;j++)
	{
			int switch1=0;
		for(int i=0;i<size1-1;i++)
		
			{
				if(a[i] > a[i+1])
					{
						int c =a[i];
						a[i]=a[i+1];
						a[i+1]=c;
						switch1=1;
					}
			}
		if (switch1==0)
		{
				for(int k=0;k<size;k++)
			{
				cout<<"The element in " << k+1  <<"th position is \n" << a[k] << endl;
			}
			break;
		}
	}

}
int main()
{
	int *a, n;
	
	cout<<"Enter the length of an Array :";
	cin >> n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the number in array :";
		cin >> a[i];
	}
	bubble b1(a,n);
	b1.bsort();
	return 0;
}
