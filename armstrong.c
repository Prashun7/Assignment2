#include <stdio.h>
#include <math.h>
int main(){
    int number, original, remainder, n = 0;
    int result = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    original=number;
    while(original !=0) {
        original=original / 10;
        n++;
    }
    original = number;
    while(original != 0){
        remainder=original % 10;                  
        result+=pow(remainder, n);                
        original=original / 10;                    
    }
    if (result==number){
        printf("%d is an Armstrong number.\n", number);
    } else{
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}
