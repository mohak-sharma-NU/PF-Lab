#include<stdio.h>
int findEmptySeats(int rows,int columns,int arr[][columns]){
    int emptyseats=0,i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(arr[i][j]==0){
                printf("Empty seat at %d row, %d column\n",i,j);
                emptyseats++;
            }
        }
    }
    return emptyseats;
}
int main(){

    int seats[3][3]={
        {1,0,1},
        {0,0,1},
        {1,1,0}
    };
    int rows = sizeof(seats)/sizeof(seats[0]);
    int columns = sizeof(seats[0])/sizeof(seats[0][0]);

    int result = findEmptySeats(rows,columns,seats);
    printf("Total number of empty seats = %d",result);
    return 0;
}