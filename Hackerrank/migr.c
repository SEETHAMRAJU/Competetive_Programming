#include<stdio.h>
int main()
{
    int x,i=0,b[5]={0,0,0,0,0};
    scanf("%d",&x);
    int a[x];
    while(i<x)
    {
        scanf("%d",&a[i]);
        i++;
    }
    
    i = 0;
    
    while(i<x)
    {
        
        switch(a[i])
	{
            case(1):
                    b[0]++;
                    break;
            case(2):
                    b[1]++;
                    break;
            case(3):
                    b[2]++;
                    break;
            case(4):
                    b[3]++;
                    break;
            default:
                    b[4]++;
        }
	x++;
    }
    i = 0;
    int temp = b[0];
     while(i<5)
     {
             if(temp<=b[i])
             {
                    temp = b[i];
             }
             i++; 
                                          
     }
      printf("%d\n",temp);          
}
