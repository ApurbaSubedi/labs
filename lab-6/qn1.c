#include <stdio.h>
void main()
  {
    float a[10];
    int i;
    printf("Enter the numbers:\n");
    for (i=1;i<=10;i++){
      scanf("%f",&a[i]);
    }

    for (i=1;i<=10;i++){
      printf("%.2f\t",a[i]);
    }
    
  }