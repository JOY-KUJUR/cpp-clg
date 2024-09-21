#include<stdio.h>
#include<conio.h>
int main()
{
    float r,d,h;
    int op;
    printf("Enter The diameter:");
    scanf("%f",&d);
    r=d/2;
    printf("=========================Radius is %f=========================",r);
    printf("1.Find circumference");
    printf("2.Volume of Cylinder");
    scanf("%d",&op); 
    switch(op)
    {
        case 1:
            printf("Circumference of the circle is %f", 2*3.14*r);
            break;
        case 2:
            printf("Enter height of cylinder:");
            scanf("%f",&h);
            printf("Volume of cylinder is %f",h*3.14*r*r);
            break;
        default:
            printf("==========Wrong option entered=======");
            break;
    }
    getch();
    return 0;
}