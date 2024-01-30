// advancedClassificationRecursion.c
#include "numclass.h"
#include <stdio.h>

int power(int num1, int num2)
{
    int result = 1;
    for (int i = 0; i < num2; i++)
    {
        result = result * num1;
    }
    return result;
}

int countDigits(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return 1 + countDigits(number / 10);
    }
}

int sumOfAll(int num, int digNum)
{
    if (num == 0)
    {
        return num;
    }
    return power(num % 10, digNum) + sumOfAll(num / 10, digNum);
}

int sum(int num)
{
    if (num == 0)
    {
        return num;
    }
    int numofdigits = countDigits(num);
    return sumOfAll(num, numofdigits);
}

int isArmStrong(int orgnum)
{
    if (sum(orgnum) == orgnum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int isPalindromeRecursive(int num, int l)
{
    if (l == 0)
    {   
    return 0;
    }
    return num%10 * power(10, l-1) + isPalindromeRecursive(num/10, l-1);
}


int isPalindrom(int orgnum)
{
    if (isPalindromeRecursive(orgnum, countDigits(orgnum)) == orgnum)
    {
        return 1;
    }
    return 0;
}


