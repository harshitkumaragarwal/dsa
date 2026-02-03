#include <stdio.h>
#include <time.h>

int main() {
    int i;
    i=1;
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    for (i = 1; i <= 100000000000; i = i*2) {
      
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("CPU time used: %f seconds\n", cpu_time_used);

    return 0;
}







