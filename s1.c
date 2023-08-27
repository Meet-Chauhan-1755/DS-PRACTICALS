#include <stdio.h>

struct student{
  char name[20];
  int rollno;
  float marks;
}
p;

int main(void) {
  
    printf("\n Enter student Name : ");
    scanf("%s", p.name);
    printf("\n Enter ENROLLMENT : ");
    scanf("%d", &p.rollno);
    printf("\n Enter Marks : ");
    scanf("%f", &p.marks);
  

  
    printf("\n Student  Detail");
    printf("\n Name   = %s", p.name);
    printf("\n ROLL NO.   = %d", p.rollno);
    printf("\n MARKS = %f", p.marks);
  
  return 0;
}