#include<stdio.h>
void concatenate(char str1[100], char str2[100]);
int main()
{
 char str1[100], str2[100];
 int i, len=0;

 printf("Enter first string:\n");
 scanf("%s", str1);
 printf("Enter second string:\n");
 scanf("%s",str2);
 concatenate(str1, str2);
 printf("Concatenated string is: %s", str1);

 return 0;
}

void concatenate(char str1[100], char str2[100])
{
 int i, len=0;
 // Calculating length of first string //
 for(i=0;str1[i]!='\0';i++)
 {
  len++;
 }
 // Concatenating second string to first string //
 for(i=0;str2[i]!='\0';i++)
 {
  str1[len+i] = str2[i];
 }
 str1[len+i]='\0';
}
