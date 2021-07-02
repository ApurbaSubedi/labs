#include <stdio.h>
int opt(int,int);
int main() {
  long a, b, hcf, lcm;

  printf("Enter two numbers\n");
  scanf("%d%d", &a, &b);

  hcf = opt(a, b);
  lcm = (a*b)/hcf;

  printf("HCf %d and %d = %d\n", a, b, hcf);
  printf("LCM of %d and %d = %d\n", a, b, lcm);
  return 0;
}

int opt(int x, int y) {
  if (x == 0) {
    return y;
  }

  while (y != 0) {
    if (x > y)
      x = x - y;
    else
      y = y - x;
  }

  return x;
}
   else
      y = y - x;
  }

  return x;
}


#include <stdio.h>
int bin(int a);
void main() {
int dec, binary;
printf("enter a decimal number");
scanf("%d", &dec);
binary=bin(dec);
printf("binary is %d", binary);
}

int bin (int a){
int i, bin=0, rem=0;
i=1;
while(a!=0){
rem=a%2;
bin=bin+rem*i;
i=i*10;
a=a/2;
}
return bin;
}
