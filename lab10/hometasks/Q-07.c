#include<stdio.h>



int main(){

    //course codes
    /*1=Physics
    2=Calculus
    3=Programming
    4=English
    */

    char names[][10]={
        "Alice",
        "Bob",
        "Charlie",
        "Diana"
    };

    int regis[4][4]={
        {1,3,0,0},
        {2,3,4,1},
        {1,2,4,0},
        {1,0,0,0}
    };

    int i,j,temp;
    for(i=0;i<4;i++){
        printf("\n%s is registered in:  ",names[i]);
        for(j=0;j<4;j++){
            temp=regis[i][j];
            if(temp==1){
                printf("Physics ");
            }else if(temp==2){
                printf("Calculus ");
            }else if(temp==3){
                printf("Programming ");
            }else if(temp==4){
                printf("English ");
            }
        }
    }

    int courseCode=1;

    printf("\n1.Physics\n2.Calculus\n3.Programming\n4.English\nEnter the course code to search: ");
    scanf("%d",&courseCode);
    if(courseCode==1){
        printf("\nPhysics is taken by ");
    }else if(courseCode==2){
        printf("\nCalculus is taken by ");
    }else if(courseCode==3){
        printf("\nProgramming is taken by ");
    }else if(courseCode==4){
        printf("\nEnglish is taken by ");
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(courseCode==regis[i][j]){
                printf("%s ",names[i]);
            }
        }
    }

    int count=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            courseCode=regis[i][j];
            if(courseCode!=0){
                count++;
            }
            if(count>3){
                printf("\n%s is taking more than 3 courses at once.",names[i]);
            }
        }
        count=0;
    }
    return 0;
}