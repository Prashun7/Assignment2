#include <stdio.h>
int func(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of natural numbers up to %d is: %d\n", n, func(n));
    return 0;
}
int func(int n){
    if (n == 0)
        return 0;
    else
        return n + func(n - 1);
}