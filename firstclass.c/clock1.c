#include <stdio.h>
#include <time.h>

int main() {
    int i, j, k;
    int n = 100;

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            for (k = 1; k <= 100; k++) {
                
            }
        }
    }

    
end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("CPU time used: %f seconds\n", cpu_time_used);
    return 0;
}

