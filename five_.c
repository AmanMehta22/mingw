// WAP to read an IP address in dotted decimal form and determine
// whether it belongs to Class A, B, C, D or E.

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
    else if (a >= 224 && a <= 239)
        printf("Class D");
    else if (a >= 240 && a <= 255)
        printf("Class E");
    else
        printf("Invalid IP address or reserved range");

    return 0;
}