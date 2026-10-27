// WAP to generate Hamming code and verify whether the received codeword is correct.

#include <stdio.h>

int main()
{
    int d[7], r[7], i, p1, p2, p4;

    printf("Enter 4 data bits: ");
    scanf("%d%d%d%d", &d[2], &d[4], &d[5], &d[6]);

    d[0] = d[2] ^ d[4] ^ d[6];
    d[1] = d[2] ^ d[5] ^ d[6];
    d[3] = d[4] ^ d[5] ^ d[6];

    printf("Hamming code: ");
    for (i = 0; i < 7; i++)
        printf("%d", d[i]);

    printf("\nEnter received 7 bits: ");
    for (i = 0; i < 7; i++)
        scanf("%d", &r[i]);

    p1 = r[0] ^ r[2] ^ r[4] ^ r[6];
    p2 = r[1] ^ r[2] ^ r[5] ^ r[6];
    p4 = r[3] ^ r[4] ^ r[5] ^ r[6];

    i = p1 + 2 * p2 + 4 * p4;

    if (i == 0)
        printf("Received codeword is correct");
    else
        printf("Error detected at bit position %d", i);

    return 0;
}