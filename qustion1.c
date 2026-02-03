#include<stdio.h>
int main(){
    int i;
    int marks[10]={35,80,90,67,45,32,31,56,54,43};

    for(i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d",i);
        }
    }
    return 0;
}