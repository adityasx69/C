#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);
    
    if(a>b && a>c && a>d){
        printf("The greatest of all is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest of all is %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("The greatest of all is %d", c);
    }
    else if(d>a && d>b && d>c){
        printf("The greatest of all is %d", d);
    }

    return 0;
}
