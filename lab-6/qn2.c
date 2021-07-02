#include <stdio.h>

void main()
  {
    int a[8],i,s=0;
    float avg;
    printf("Enter the numbers:\n");
    for(i=0;i<8;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++){
      s=s+a[i];
    }
    avg=(float)s/8;
    printf("Sum=%d\n",s);
    printf("Avg=%.2f",avg);
    
  }