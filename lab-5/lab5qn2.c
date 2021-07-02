#include<stdio.h>
void prime(int );
int main()
{
int a;
printf("enter a number");
scanf(" %d", &a);
prime(a);
}

void prime(int i)
{        int x,count=0;
        for (x=1; x<=i; x++)
       {        if(i%x==0)
                count++;
       }
                if (count==2)
                {       printf("The number is prime");}
        else
        {printf(" the number is not prime");}


}

