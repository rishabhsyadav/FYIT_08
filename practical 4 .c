#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float a, b;


    printf ("menu: \n");
    printf ("1,. add\n2 , substract\n3, multiply\n4, divide\n");
    printf("enter your choice (1_4) :");
    scanf("%d, &choice");

    scanf ("%f %f, &a, &b ");
case 1:
    printf ("result =%.2f", a+b);
    break
    case2:
        printf("result =%.2f", a-b);
        break
case 3:
    printf("result %.2f", a*b);
    break
case 4:
    if (a !=0)
        printf ("result =%.2f", a/b);
    else
        printf ("error: division by zero !");
    break
default:
    printf("invalid choice.");

}
    return 0;
}
