// advancedClassificationLoop.c
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

int isArmStrong(int number)
{
    int orgnum = number, counter = 0, sum = 0, finalnum = number;
    if (number / 10 == 0)
    {
        return 1;
    }
    while (number != 0)
    {
        counter++;
        number /= 10;
    }
    while (orgnum != 0)
    {
        int digit = orgnum % 10;
        sum += power(digit, counter);
        orgnum /= 10;
    }
    if (sum == finalnum)
    {
        return 1;
    }
    return 0;
}

int isPalindrom(int number)
{
    int reversenum = 0, orgnum = number, digit = 0;
    if (number / 10 == 0)
    {
        return 1;
    }
    while (number > 0)
    {
        digit = number % 10;
        reversenum *= 10;
        reversenum += digit; 
        number /= 10;
    }
    if (reversenum == orgnum)
    {
        return 1;
    }
    return 0;
}