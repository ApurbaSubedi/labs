#include<stdio.h>
long long int Factorial(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %lld", n, Factorial(n));
    return 0;
}

long long  int Factorial(int n) {

    if (n>=1)
        return n*Factorial(n-1);
    else
        return 1;
}
