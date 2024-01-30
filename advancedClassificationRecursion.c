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

// int isPalindromeRecursive(int num, int l)
// {
//     if (l = 1)
//     {
//         return 1;
//     }
//     if (l = 2)
//     {
//         if (num/10 != num% 10)
//         {
//             return 0;
//         }
//     }
//     int firstdigit = num / power(10 , (l- 1));
//     int lastdigit = num % 10;
//     if (firstdigit != lastdigit)
//     {
//         return 0;
//     }
//     else
//     {
//         num = (num % power(10 , l-1)) /10;
//         return isPalindromeRecursive(num, l-2);
//     }
// }
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


