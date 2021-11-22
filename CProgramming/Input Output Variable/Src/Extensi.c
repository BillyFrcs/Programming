#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const double Counter(double firstValue, double secondValue, double thirdValue, double fourthValue, double fifthValue)
{
     return firstValue + secondValue + thirdValue + fourthValue + fifthValue;
}

int main(void)
{
     double firstValue;
     double secondValue;
     double thirdValue;
     double fourthValue;
     double fifthValue;

     printf("Enter first number: ");
     scanf("%lf", &fifthValue);

     printf("Enter second number: ");
     scanf("%lf", &secondValue);

     printf("Enter third number: ");
     scanf("%lf", &thirdValue);

     printf("Enter fourth number: ");
     scanf("%lf", &fourthValue);

     printf("Enter fifth number: ");
     scanf("%lf", &firstValue);

     printf("\nThe numbers you entered are: %g", Counter(firstValue, secondValue, thirdValue, fourthValue, fifthValue));

     return 0;
}