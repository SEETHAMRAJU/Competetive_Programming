#include <stdio.h>

int main()

{
   int y,i,x=0,count=0;
   scanf("%d",&i);
   int a[i];
   while(x<i)
   {
       scanf("%d",&a[x]);
       x++;  
   
   }
   x = 0;
   while(x<i)
   {
	y = 1;   
   	if(a[x]!=0 || a[y]!=0)
	{
	   while(y<i)
	   {
	     if(a[x]==a[y])
	       {
	           a[x]=0;
		   
		   a[y]=0;
		   
		   count++; 
	       	       
	       }	      	 	     
	     y++; 
	   
	   }
	}
	x++;
	printf("%d after %d\n",count,x-1);
   
   }
   printf("%d",count);
	   
	   
	   
	return 0;
}

