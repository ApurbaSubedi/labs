#include<stdio.h>

// functions declaration
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

// main function
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

// function to add two integer numbers
int addition(int a, int b)
{
  int result;
  result = a + b;
  return result;
}

// function to subtract two integer numbers
int subtraction(int a, int b)
{
  int result;
  result = a - b;
  return result;
}

// function to multiply two integer numbers
int multiplication(int a, int b)
{
  int result;
  result = a * b;
  return result;
}

// function to divide two integer numbers
int division(int a, int b)
{
  int result;
  result = a / b;
  return result;
}
