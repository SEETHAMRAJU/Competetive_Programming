#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left,*right,*parent;
};

class BST{
	int size = 0;
	struct node *head;
	head = new struct node;
	head->right = NULL;
	head->left  = NULL;
	head->parent = NULL;
	
	void Insert(int key)
	{
		if(size == 0)
		{
			head->data = key;
			size++;
			return ;
		}
		struct node *temp,*temp1;
		tempq = new struct node(1);
		temp = head;
		size++;
		temp1->data = key;
		temp1->left = NULL;
		temp1->right = NULL;
		struct node *pr;
		pr = new struct node (1);
		while(temp != NULL)
		{
			
			if(temp->data < key)
			{
				pr = temp;
				temp = temp->right;
			}
			else
			{
				pr = temp;
				temp = temp->left;
			}
		}
		temp1->parent = pr;
		if(pr->data > key)
		{
			pr->left = temp1;
		}
		else
		{
			pr->right = temp1;
		}
	}
	int search(int key)
	{
		struct node *temp;
		temp = new struct node (1);
		while(temp != NULL)
		{
			if(key == temp->data)
			{
				return 1;
			}
			else if(temp->data < key)
			{
				temp = temp->right;
			}
			else
			{
				temp = temp->left;
			}
		}
		return 0;
	}
	int minimum()
	{
		while(head->left != NULL)
		{
			head = head->left;
		}
		return head->data;
	}
	int maximum()
	{
		while(head->right != NULL)
		{
			head = head->right;
		}
		return head->data;
	}
	int predecessor()
	{
		if(head->left != NULL)
		{
			head = head->left;
			while(head->right!= NULL)
			{
				head = head->right;
			}
			return head->data;
		}
		return -1;
	}
	int succeessor()
	{
		if(head->right != NULL)
		{
			head = head->right;
			while(head->left != NULL)
			{
				head = head->left;
			}
			return head->data;
		}
	}
	void inorder(struct node *h)
	{
		BST.inorder(h->left);
		cout << h->data << " " << endl;
		BST.inorder(h->right);
	}
}
int main()
{


	return 0;
}





