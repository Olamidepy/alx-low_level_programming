#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - which printf if the number is positive,zero and negative
*
* Description: exploring on main
*this program prints "is positive,zero and negative
* Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
