#include<stdio.h>

int passOrfail(int sub1,int sub2,int sub3){
    int avg = (sub1+sub2+sub3)/3;
    if(avg>=50&&(sub1>40&&sub2>40&&sub3>40)){
        if((sub1>40&&sub2>40&&sub3>40)){
            return 1;//1 for pass,0 for fail.
        }else{
            printf("\nOne of the subjects has score less than 40.\n");
            return 0;
        }
    }
    else{
        printf("The Average is less than 50.");
        return 0;
    }
}

int main(){

    int sub1,sub2,sub3;
    printf("Enter marks for subject one: ");
    scanf("%d",&sub1);
    printf("Enter marks for subject two: ");
    scanf("%d",&sub2);
    printf("Enter marks for subject three: ");
    scanf("%d",&sub3);

    int result = passOrfail(sub1,sub2,sub3);

    if(result!=1){
        printf("\nFAIL.\n");
    }else{
        printf("\nPASS.\n");
    }
    return 0;
}