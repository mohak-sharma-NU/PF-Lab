#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct marks{
    float sub1;
    float sub2;
    float sub3;
};

// typedef struct{
//     int rollNo;
//     char name[100];
//     struct marks m;
//     float total;
//     float per;
// }Student;

struct Student{
    int rollNo;
    char name[100];
    struct marks m;
    float total;
    float per;
};
int main(){


    int n;
    printf("Enter the number of Students: ");
    scanf("%d",&n);
    getchar();
    struct Student* s = malloc(n*sizeof(struct Student));

    int i;
    for(i=0;i<n;i++){

        printf("Enter Name of Student %d: ",i+1);
        fgets(s[i].name,100,stdin);
        s[i].name[strcspn(s[i].name,"\n")]='\0';
        printf("Enter Roll No: of Student %d: ",i+1);
        scanf("%d",&s[i].rollNo);
        printf("Enter Marks for Subject 1 of Student %d: ",i+1);
        scanf("%f",&s[i].m.sub1);
        printf("Enter Marks for Subject 2 of Student %d: ",i+1);
        scanf("%f",&s[i].m.sub2);
        printf("Enter Marks for Subject 3 of Student %d: ",i+1);
        scanf("%f",&s[i].m.sub3);
        getchar();

        s[i].total = s[i].m.sub1 + s[i].m.sub2 + s[i].m.sub3;
        s[i].per = (float) (s[i].total/300)*100;
    }

    for(i=0;i<n;i++){
        printf("\n\nPercentage: %f",s[i].per);
        printf("Name: %s\n",s[i].name);
        if(s[i].per<=100&&s[i].per>90){
            printf("Grade: A+");
        }else if(s[i].per>80){
            printf("Grade: A");
        }else if(s[i].per>70){
            printf("Grade: B+");
        }else if(s[i].per>60){
            printf("Grade: B");
        }else if(s[i].per>50){
            printf("Grade: C");
        }else{
            printf("Grade: F");
        }
        printf("\n");

    }

    return 0;
}