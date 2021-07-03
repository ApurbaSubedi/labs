#include<stdio.h>
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main()
{
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("%d + %d = %d\n", num1, num2, addition(num1, num2));
  printf("%d - %d = %d\n", num1, num2, subtraction(num1, num2));
  printf("%d * %d = %d\n", num1, num2, multiplication(num1, num2));
  printf("%d / %d = %d\n", num1, num2, division(num1, num2));

  return 0;
}

<<<<<<< HEAD
=======

>>>>>>> f99dcbe509379ad04c7f68f96bddbb627fdc6900
int addition(int a, int b)
{
  int result;
  result = a + b;
  return result;
}

<<<<<<< HEAD
=======

>>>>>>> f99dcbe509379ad04c7f68f96bddbb627fdc6900
int subtraction(int a, int b)
{
  int result;
  result = a - b;
  return result;
}

int multiplication(int a, int b)
{
  int result;
  result = a * b;
  return result;
}

int division(int a, int b)
{
  int result;
  result = a / b;
  return result;
}
