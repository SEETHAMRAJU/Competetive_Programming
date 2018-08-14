#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
struct node
{
	int l,r,data;
	struct node *left,*right,*parent;
};
struct node *generatetree(vector <llint> arr,llint n,llint m);
llint findmin(vector <llint> arr,llint n,llint m);
llint RMQ(llint i,llint j,struct node *head,vector <llint> arr);
llint findnode(struct node *head,int a,int b);
int main()
{
	llint N,M;
	vector <llint> arr;
	scanf("%lld",&N);
	for(llint i=0;i<N;i++)
	{
		scanf("%lld",&temp);
		arr.append(temp);
	}
	scanf("%lld",&M);
	vector <pair<llint,llint>> query;
	for(llint i=0;i<M;i++)
	{
		scanf("%lld %lld"&temp1,temp2);
		query.append(make_pair(temp1,temp2));
	}
	struct node *head;
	head = new struct node(1);
	head = generatetree(arr,0,N-1);
	vector <llint> answer;
	for(llint i=0;i<M;i++)
	{
		llint ans = RMQ(head,query[i].first,query[i].second);
		answer.append(ans);
	}
	for(llint i=0;i<M;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
struct node *generatetree(vector <llint> arr,llint i,llint j)
{
	struct node *head;
	head = new struct node (1);
	if(i == j)
	{
		head->l = i;
		head->r = j;
		head->data = arr[i];
		head->left = NULL;
		head->right = NULL;
		return head;
	}
	else
	{
		head->l = i;
		head->r = j;
		head->data = findmin(arr,i,j);
	}
	llint mid = (i+j)/2;
	head->left = generatetree(arr,i,mid);
	head->right = generatetree(arr,mid+1,j);
	return head;
}
llint findmin(vector <llint> arr,llint i,llint j)
{
	llint minsofar = arr[i];
	while(i<=j)
	{
		minsofar = min(minsofar,arr[i]);
		i++;
	}
	return minsofar;
}
llint RMQ(llint i,llint j,struct node *head)
{
	if(i == j)
	{
		return i;
	}
	else
	{
		while(head != NULL)
		{
			if((head->left->r) >= j)
			{
				head = head->left;
			}
			else if((head->right->l) <= i)
			{
				head = head->right;
			}
			else
			{
				
			}
		}

	}
}


