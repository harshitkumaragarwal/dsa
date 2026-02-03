#include <stdio.h>
#include <time.h>

int main()
{
    int n, i = 1;
    clock_t start, end;
    double time_taken;

    printf("Enter value of n: ");
    scanf("%d", &n);

    start = clock();

    switch (n > 0)
    {
        case 1:
            while (i <= n)
            {
                printf("i = %d\n", i);
                i = i * 2;
            }
            break;

        case 0:
            printf("Invalid input\n");
            break;
    }

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Execution Time = %f seconds\n", time_taken);

    return 0;
}