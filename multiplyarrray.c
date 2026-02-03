#include<stdio.h>

int main(){
    int i;

    int multiply;

    int arr[4]={1,2,3,4};

    multiply=1;

    for(i=0;i<4;i++){
        multiply=multiply*arr[i];
    }
    printf("%d",multiply);

    return 0;

}