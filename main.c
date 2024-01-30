#include "numclass.h"
#include <stdio.h>

int main() {
int num1=0, num2=0;

if (scanf("%d %d", &num1, &num2) == 2){
if (num1>num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
}

printf("The Armstrong numbers are:");
for(int i=num1;i<=num2;i++) {
if(isArmStrong(i)) {printf(" %d",i); 
} }

printf("\nThe Palindromes are:");
for(int i=num1;i<=num2;i++) {
if(isPalindrom(i)) {printf(" %d",i); 
} }

printf("\nThe Prime numbers are:");
for(int i=num1; i<=num2; i++) {
if(isPrime(i)) {printf(" %d",i); 
} }

printf("\nThe Strong numbers are:");
for(int i=num1;i<=num2;i++) {
if(isStrong(i)) {printf(" %d",i); 
} }

printf("\n");

return 0; }
