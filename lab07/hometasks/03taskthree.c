#include<stdio.h>

void printfArray(int arr[],int size){
    printf("\n{");
    for(int i=0; i<size ;i++){
        if(i==size-1)
            printf("%d",arr[i]);
        else
            printf("%d,",arr[i]);
    }
    printf("}\n");
}

int main(){

    int input;
    int pass[10]={0};
    int fail[10]={0};

    int size = sizeof(pass)/sizeof(pass[0]);
 
    //Considering the total marks are 15, passing is 6
    //Also assuming half the class has failed

    int failcount=0,passcount=size-1;

    for(int i=0;i<size;i++){
        printf("\nEnter the obtained weightage (out of 15) of student %d: ",i+1);
        scanf("%d",&input);
        if(input<7&&input>=0){
            fail[failcount]=input;
            failcount++;
        }else{
            pass[passcount]=input;
            passcount--;
        }
    }

    printf("Passed students weightages:\n");
    printfArray(pass,size);

    printf("Failed students weightages:\n");
    printfArray(fail,size);
    return 0;
}