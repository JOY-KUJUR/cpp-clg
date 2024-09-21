#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    float a,b,c;
    float r1,r2,img;
    float discri;

    printf("Enter the valuse of a, b, and c for the quadratic eq (aX^2 + bX +c):");
    scanf("%f %f %f",&a,&b,&c);

    discri=(b*b)-(4*a*c);

    switch(discri>0)
    {
        case 1:
            r1=(-b+sqrt(discri))/(2*a);
            r2=(-b-sqrt(discri))/(2*a);
            printf("\n Two distinct and real roots exist: %f and %f",r1,r2);
            break;
        case 0:
            switch(discri<0)
            {
                case 1:
                    r1=r2=-b/(2*a);
                    img=sqrt(-discri)/(2*a);
                    printf("\nTwo distinct and complex roots exist: %f + %f and %f - %f",r1,img,r2,img);
                    break;
                case 0:
                    r1=r2=-b/(2*a);
                    printf("\nTwo Equal and real roots exist: %f and %f ",r1,r2);
                    break;
            }
    }
    getch();
    return 0;
}
