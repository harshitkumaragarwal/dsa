#include<stdio.h>
int main(){

    int i;
    int arr[5]={34,56,1,0,2};
    int min=arr[0];

    for(i=0;i<5;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);


    return 0;

}