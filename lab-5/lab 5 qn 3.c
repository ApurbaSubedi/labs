#include <stdio.h>
int palindrome(int n)
{int rev=0, d,n1=n;
        while(n!=0){
        d=n%10;
        rev=rev*10 + d;
        n=n/10;
        }
if(rev==n1)
        return 1;
else
        return 0;
}
int main()
{
int a,b,i;
printf("Enter the range");
scanf("%d%d", &a, &b);
for(i=a; i<=b;i++)
{
if(palindrome(i)==1)
        printf("%d\n", i);

}
return 0;




}


