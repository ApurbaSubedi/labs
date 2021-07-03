#include <stdio.h>

void main()
  {
    int a[100][100],i,j,n,min;
    printf("Enter the order:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
      }
    }

    printf("Before Editing:\n");
      for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }

    min=a[0][0];
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          if(a[i][j]<min){
            min=a[i][j];
          }
      }
    }

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        if(i==j){
          a[i][j]=min;
        }
      }
    }

    printf("After Editing:\n");
      for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
  }