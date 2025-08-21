#include <stdio.h>
#include <stdlib.h>

int area(int side) {
    return side * side;
}
int main() {
    int side ;
     printf("enter the side of the squares: ");
     scanf("%d", &side);
     printf("area of sqaure  = %d", area(side));

    return 0;
}
