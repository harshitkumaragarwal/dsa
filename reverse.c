#include <stdio.h>
#include <time.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(i = 0; i < n; i++) {
        count++;
    }

     clock_t start, end;
    double cpu_time_used;

    start=clock();

    printf("Reversed array: ");
    for(i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("CPU time used: %f seconds\n", cpu_time_used);

    printf("\nNumber of elements: %d", count);

    return 0;
}
