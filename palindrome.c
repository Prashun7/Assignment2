#include <stdio.h>
int main() {
    int n, reversed = 0, original, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n%10;
        reversed = reversed * 10 + remainder;
        n=n/10;         
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.", original);
    }
    return 0;
}