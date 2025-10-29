#include<stdio.h>
void populate2dArray(int rows,int columns,int arr[][columns]){
    int i,j,count=0;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(count==1){
                arr[i][j]=1;
                count=0;
            }
            else{
                arr[i][j]=0;
                count=1;
            }
        }
    }
}
void print2dArray(int rows,int columns,int arr[][columns]){
    int i,j;
    for(i=0;i<rows;i++){
        printf("Row %d:",i+1);
        for(j=0;j<columns;j++){
            if(arr[i][j]==1)
                printf("x ");
            else if(arr[i][j]==0)
                printf("o ");
        }
        printf("\n");
    }
}

void displaySummary(int rows,int columns,int arr[][columns]){
    printf("Summary: \n");
    int i,j,seated=0,empty=0,total=rows*columns;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(arr[i][j]==1)
                seated++;
            if(arr[i][j]==0)
                empty++;
        }
    }
    printf("Seated = %d\nEmpty = %d\nTotal = %d\n",seated,empty,total);
}

int main(){
    int desks[5][5]={0};
    int rows = sizeof(desks)/sizeof(desks[0]);
    int columns = sizeof(desks[0])/sizeof(desks[0][0]);
    populate2dArray(rows,columns,desks);
    printf("Student Seating Chart:");
    printf("\n======================\nx: Seated | o: Empty\n");
    print2dArray(rows,columns,desks);
    displaySummary(rows,columns,desks);
    return 0;
}