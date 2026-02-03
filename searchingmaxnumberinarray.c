#include<stdio.h>
int main(){

    int i;
    int arr[5]={34,56,78,3,2};
    int max=-1;

    for(i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);

    return 0;
}