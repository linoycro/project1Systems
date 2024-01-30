// basicClassification.c
#include "numclass.h"
#include <stdio.h>

int isPrime(int number)
{
    if (number <= 0)
    {
        return 0;
    }
    if (number == 1)
    {
        return 1;
    }
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int num)
{
    int sum = 1;
    for (int i = 2; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}

int isStrong(int number)
{
    if (number <= 0)
    {
        return 0;
    }
    int sum = 0;
    int orgnum = number;
    while (number != 0)
    {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }
    if (sum == orgnum)
    {
        return 1;
    }
    return 0;
}

