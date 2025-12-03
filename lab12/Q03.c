#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
    char fullname[50];
    float marks;
};

int main(){

    int n,i,max=0,maxIndex=0;

    printf("How many students do you want to store? ");
    scanf("%d",&n);
    getchar();

    struct Student* Sptr = malloc(n*sizeof(struct Student));

    for(i=0;i<n;i++){
        printf("Enter Fullname of Student %d: ",i+1);
        fgets(Sptr[i].fullname,50,stdin);
        Sptr[i].fullname[strcspn(Sptr[i].fullname,"\n")]='\0';

        printf("Enter Marks of Student %d: ",i+1);
        scanf("%f",&Sptr[i].marks);
        getchar();
    }

    for(i=0;i<n;i++){
        if(Sptr[i].marks>75){
            printf("\n");
            printf("%s, ",Sptr[i].fullname);
            printf("%.2f",Sptr[i].marks);
        }
    }

    free(Sptr);

    return 0;
}