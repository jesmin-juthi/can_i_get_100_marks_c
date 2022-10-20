#include <stdio.h>

int main()
{
    int X, Y;
    printf("Please enter your marks and the bonus marks: ");
    scanf("%d %d", &X, &Y);

    if(X < 0 || Y < 0 )
        printf("Please enter a valid marks! ");

    else if(X + Y >= 100)
        printf("YES");
    else
        printf("NO");

    return 0;
}
