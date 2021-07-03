#include <stdio.h>

int read(int);
int sort(int[],int);
int display(int[],int);
void main()
  {
    int n;
    printf("Enter the number of elements you want to enter:\n");
    scanf("%d",&n);
    read(n);
  }

int read(int n)
  {
    int a[100],i;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    printf("\n");
    sort(a,n);
  }

int sort(int a[100],int n)
  {
    int i,j,temp;
    for (i=0;i<n;i++){
         for (j=0;j<n-1;j++){
            if (a[j+1]<a[j]){
             temp=a[j+1];
             a[j+1]=a[j];
             a[j]=temp;
            }
        }
    }
    display(a,n);
  }

int display(int a[100],int n)
  {
    int i;
    printf("After Sorting:\n");
    for (i=0;i<n;i++){
      printf("%d\t",a[i]);
    }
  }