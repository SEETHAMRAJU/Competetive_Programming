#include <stdio.h>
#include <stdlib.h>
struct treen{
	int data;
	int l;
	int r;
	struct treen *left,*right;
};
struct treen *generatesegmentree(int *arr,int n,int m);
int findmin(int *a,int i,int j);
int RMQ(int i,int j,struct treen *head,int *a);
int min(int a,int j);
int findnode(struct treen *had,int a,int b); //B is a bool value to check whether the pointer we want to check is a left one or a right one
int answer[50001];
int main()
{
	int n;
	scanf("%d",&n);
	int *arr;
	arr = malloc(sizeof(int)*n);
	int i = 0;
	while(i<n)
	{
		scanf("%d",(arr+i));
		i++;
	}
	struct treen *head;
	head = malloc(sizeof(struct treen));
	head = 	generatesegmentree(arr,0,n-1);			
	int N,a,b;
	i =0;
	scanf("%d",&N);
	while(i<N)
	{
		scanf("%d%d",&a,&b);
		answer[i] = RMQ(a-1,b-1,head,arr);
		i++;
	}
	for( i=0;i<N;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}

//Functions start from here
struct treen* generatesegmentree(int *a,int i,int j)
{
	int mid = (i+j)/2;
	int min = findmin(a,i,j);
	struct treen *head;
	head = malloc(sizeof(struct treen));
	if(i>j)
	{
		return NULL;
	}
	if(i==j)
	{
		head->data = i;
		head->l = i;
		head->r = i;
		head->left = NULL;
		head->right = NULL;
		return head;
	}
	head->l = i;
	head->r = j;
	head->data = min;
	head->left = generatesegmentree(a,i,mid);
	head->right = generatesegmentree(a,mid+1,j);
		
}

//Finds the minimum for a given range in an array
int findmin(int *a,int i,int j)
{
	int min = i;
	for(int k=i;k<j+1;k++)
	{
		if(*(a+min)<*(a+k))
		{
			min = k;
		}
	}
	return min;
}
//The Range Minimum Query
int RMQ(int i,int j,struct treen *head,int *a)
{
	while(head!=NULL)
	{
		if((head->left)->r >= j)
		{
			head = head->left;
		}
		else if ((head->right)->l <= i)
		{
			head = head->right;
		}
		else 
		{
			//If the min is in the range is the min of the left subtree itself
			if((head->left)->data >= i && (head->right)->data <= j)
			{
				return min(*(a+(head->left)->data),*(a+(head->right)->data));
			}
			int l,k;
			l = findnode(head->left,i,0);
			k = findnode(head->right,j,1);
			return min(*(a+l),*(a+k));

		}
	}
}

//Function for finding a minimum of given two numbers
int min(int a,int b)
{
	if(a<b)
	{
		return b;
	}
	
	return a;
}

//Function for searching the whether the given number has a range
int findnode(struct treen *head,int a,int b)
{
	if(b==0)
	{
		while(head->l != a)
		{
			if((head->left)->l < a && (head->left)->r > a)
			{
				head = head->left;
			}
			else if ((head->right)->l < a)
			{
				head = head->right;
			}
		
		}
		return head->data;
	}
	else
	{
		while((head->r) != a)
		{
			if((head->left)->r < a)
			{
				head = head->right;
			}
			else if((head->right)->l > a)
			{
				head = head->left;
			}
		}
		return head->data;
	}
}

