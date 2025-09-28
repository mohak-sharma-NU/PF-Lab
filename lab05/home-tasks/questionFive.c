#include<stdio.h>

int main(){
    int hasPrerequisite = 0;
    int isCourseFull=0;

    printf("Does the student has prerequisite?\n1.Yes\n0.No\n");
    scanf("%d",&hasPrerequisite);

    printf("Is the course Full?\n1.Yes\n0.No\n");
    scanf("%d",&isCourseFull);
    if(hasPrerequisite==1){
        if(isCourseFull==0){
            printf("Enrolled Succesfully");
        }else{
            printf("Cannot Enroll; Course Full");
        }
    }else{
        if(isCourseFull==1){
            printf("Cannot Enroll; Prerequisite Missing and Course is Full.");

        }else{
            printf("Cannot Enroll; Prerequisite Missing.");
        }
    }
    return 0;
}