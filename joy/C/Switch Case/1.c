#include <stdio.h>
int main()
{
    float f,c;
    int a;
    printf("========================================");
    printf("\n\tSELECT FROM THE FOLLOWING:");
    printf("\n\t 1.Celcius to fahrenheit");
    printf("\n\t 2.fahrenheit to Celcius");
    printf("\nENTER VALUE:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("\nEnter the temperature in celcius:");
        scanf("%f",&c);
        f=c*(9/5)+32;
        printf("\n The value %f celcius is %f fahrenheit.",c,f);
        break;
    case 2:
        printf("\nEnter the temperature in fahrenheit:");
        scanf("%f",&f);
        c=f-32*(9/5);
        printf("\n The value %f fahrenheit is %f celcius.",f,c);
        break;
    default:
        break;
    }
    return 0;
}