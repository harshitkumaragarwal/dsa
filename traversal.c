#include <stdio.h>
#include<time.h>

int main() {
    int arr[100], n, i;

    
    clock_t start, end;
    double cpu_time_used;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    start=clock();

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("CPU time used: %f seconds\n", cpu_time_used);

    return 0;
}
