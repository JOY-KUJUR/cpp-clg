#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,res;
    printf("============CALCULATOR============");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter Value:");
    scanf("%d",&c);

    switch(c){
        case 1:
        printf("Enter two integers:");
        scanf("%d %d",&a,&b);
        printf("%d + %d = %d",a,b,res=a+b);
        break;
        
        case 2:
        printf("Enter two integers:");
        scanf("%d %d",&a,&b);
        printf("%d - %d = %d",a,b,res=a-b);
        break;
        
        case 3:
        printf("Enter two integers:");
        scanf("%d %d",&a,&b);
        printf("%d x %d = %d",a,b,res=a*b);
        break;
        
        case 4:
        printf("Enter two integers:");
        scanf("%d %d",&a,&b);
        printf("%d / %d = %d",a,b,res=a/b);
        break;
    }
    getch();
    return 0;
}