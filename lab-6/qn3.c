#include <stdio.h>

void main()
  {
    int i,j,n,temp,a[100];
    printf("Enter the numbers of elemets you want to enter:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i=0;i<n;i++){
      scanf("%d",&a[i]);
    }

    printf("Before Sorting:\n");
    for (i=0;i<n;i++){
      printf("%d\t",a[i]);
    }

    printf("\n");
    for (i=0;i<n;i++){
         for (j=0;j<n-1;j++){
            if (a[j+1]<a[j]){
             temp=a[j+1];
             a[j+1]=a[j];
             a[j]=temp;
            }
        }
    }

    printf("After Sorting:\n");
    for (i=0;i<n;i++){
      printf("%d\t",a[i]);
    }
  }
  