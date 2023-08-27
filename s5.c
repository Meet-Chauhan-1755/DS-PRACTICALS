#include<stdio.h>

int mat1[3][3],mat2[3][3];
int mul[3][3];
int multi(int mat1[3][3],int mat2[3][3]){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j]=0; 
            for(int k=0;k<3;k++){

                mul[i][j]=mul[i][j]+ mat1[i][k]*mat2[j][k];
            }
        }
    }
    
    //return mul[i][j];
}
int main(){
    printf("\nENTER 3*3 ELEMENTS OF MAT1:");
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
             printf("mat1[%d][%d]=",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
     printf("\nENTER 3*3 ELEMENTS OF MAT2:");
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
             printf("mat2[%d][%d]=",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("MULTIPLY = %d",multi([3][3]);
        }
    }
   
    return 0;
}
