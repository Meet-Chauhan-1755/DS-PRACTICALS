#include<stdio.h>
int main(){
    int a[10],i,sum=0;

    printf("\n Enter array elements:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++){
        sum += a[i];
    }

    printf("\nSUM = %d",sum);
    return 0;
}