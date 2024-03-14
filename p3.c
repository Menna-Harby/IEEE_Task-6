#include<stdio.h>

int max(int numb1, int numb2)
{
    if (numb1 > numb2)
    {
        return numb1;
    }
    else
    {
        return numb2;
    }
}

int min(int numb1, int numb2)
{
    if (numb1 < numb2)
    {
        return numb1;
    }
    else
    {
        return numb2;
    }
}

int main(void)
{
    int numb1, numb2, maximum, minimum;

    printf("Please enter 2 numbers: ");
    scanf("%d%d", &numb1, &numb2);

    maximum = max(numb1, numb2);
    minimum = min(numb1, numb2);

    printf("Maximum is:  %d\nMinimum is:  %d", maximum, minimum);
}




