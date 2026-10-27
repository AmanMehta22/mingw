// WAP to translate between a 32-bit IP address and dotted decimal notation.

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t ip;
    unsigned int a, b, c, d;

    printf("Enter IP address: ");
    scanf("%u.%u.%u.%u", &a, &b, &c, &d);

    ip = ((uint32_t)a << 24) | (b << 16) | (c << 8) | d;

    printf("32-bit IP address: ");

    for (int i = 31; i >= 0; i--)
    {
        printf("%u", (ip >> i) & 1);

        if (i % 8 == 0 && i != 0)
            printf(".");
    }

    printf("\nDotted decimal: %u.%u.%u.%u\n",
           (ip >> 24) & 255,
           (ip >> 16) & 255,
           (ip >> 8) & 255,
           ip & 255);

    return 0;
}