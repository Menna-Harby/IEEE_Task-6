
void allEvenNumbers (int min, int max);
void allOddNumbers (int min2, int max);

int main()
{
int min, max, min2;

printf("Input min: ");
scanf("%d", &min);
printf("Input max: ");
scanf("%d", &max);

min2 = min; 

printf("\nAll even numbers between %d and %d are: ", min, max);

if (min %2 == 0)
{
min = min +2;
}
else
{
min = min+1;
}
allEvenNumbers (min, max);

printf("\nAll odd numbers between %d and %d are: ", min2, max);

if (min2 %2 == 0)
{
min2 = min2+1;
}
else
{
min2 = min2+2;
}
allOddNumbers (min2, max);

return 0;
}

void allEvenNumbers (int min, int max)
{
if (min >= max)
printf("\nmake sure max is more than min");
return;
if (min % 2 == 0)
{
printf("%d,", min);
}
allEvenNumbers(min+1, max);
}
void allOddNumbers(int min2, int max)
{
if (min2 >= max)
return;
if (min2 %2 != 0)
{
printf("%d,", min2);
}
allOddNumbers(min2+1, max);
}