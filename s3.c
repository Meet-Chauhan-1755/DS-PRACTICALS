#include<stdio.h>
#include<string.h>
struct student{
    char name[5];
    int marks;
    int rollno;
};
int main(){
    int i,total=0;
    struct student s[3];
    struct student *sptr[3];
    strcpy(s[0].name,"meet");
    strcpy(s[1].name,"mit");
    strcpy(s[2].name,"mat");

    for(i=0;i<3;i++){
        sptr[i]=&s[i];
    }

    for(i=0;i<3;i++){
        printf("ENTER %s MARK AND ROLL:",s[i].name);
        printf("\n Enter marks:");
        scanf("%d",&sptr[i]->marks);
        printf("\n Enter roll no:");
        scanf("%d",&sptr[i]->rollno);
        total += s[i].marks;
    }

    for(i=0;i<3;i++){
        printf("\n %s DETAILS:",s[i].name);
        printf("\n \t Marks=%d",sptr[i]->marks);
        printf("\n \t ROLL=%d",sptr[i]->rollno);
    }
    printf("\n TOTAL=%d",total);
    return 0;
    }