// WAP to implement Slotted ALOHA Protocol.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, success = 0, collision = 0;

    printf("Enter number of frames: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (rand() % 2 == 0)
        {
            printf("Frame %d transmitted successfully\n", i);
            success++;
        }
        else
        {
            printf("Collision occurred for frame %d\n", i);
            collision++;
        }
    }

    printf("\nSuccessful transmissions = %d\n", success);
    printf("Collisions = %d\n", collision);

    return 0;
}