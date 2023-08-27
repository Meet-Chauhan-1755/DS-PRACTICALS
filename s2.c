#include <stdio.h>

struct person {
  char name[20];
  int rollno;
  float marks[3];
}
p[3];

int main(void) {
  int i = 0,j=0,result=0;

  for (i = 0; i < 3; i++) {
    printf("\n Enter Student Name %d: ",i+1);
    scanf("%s", p[i].name);
    printf("\n Enter ROLL NO:");
    scanf("%d", &p[i].rollno);
    {
        for(j=0;j<3;j++)
        {
    printf("\n Enter Marks %d ",j+1);
    scanf("%f", &p[i].marks[j]);
    
        }
        
    }
    
  }   

  for (i = 0; i < 3; i++) {
    printf("\n Student %d Detail", i + 1);
    printf("\n Name   = %s", p[i].name);
    printf("\n ENROLLMENT  = %d", p[i].rollno);
     {
        for(j=0;j<3;j++)
        {
    printf("\n Marks %d = %.2f",j+1, p[i].marks[j]);
    
        }
        
     }
    
  }
  return 0;
}