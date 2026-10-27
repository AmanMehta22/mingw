// WAP to read an IP address in dotted decimal form and determine whether
// the address belongs to Class A, Class B or Class C.

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter IP address: ");
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);

    if (a >= 1 && a <= 126)
        printf("Class A");
    else if (a >= 128 && a <= 191)
        printf("Class B");
    else if (a >= 192 && a <= 223)
        printf("Class C");
    else
        printf("Not Class A, B or C");

    return 0;
}