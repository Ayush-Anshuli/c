#include <stdio.h>
int main()
{
    int tri1, tri2, tri3, sum;
    printf("enter tri1\n");
    scanf("%d", &tri1);
    printf("enter tri2\n");
    scanf("%d", &tri2);
    printf("enter tri3\n");
    scanf("%d", &tri3);

    // sum+=tri1,tri2,tri3;
    if (tri1 == tri2 && tri1 == tri3)
    {
        printf("This is a triangle");
    }
    else
    printf("This is not a triangle");
    

    return 0;
}