#include<stdio.h>

void findColdSpots(int rows,int columns,int arr[][columns]){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(arr[i][j]<arr[i-1][j]&&
                arr[i][j]<arr[i+1][j]&&
                arr[i][j]<arr[i][j+1]&&
                arr[i][j]<arr[i][j-1]){
                printf("Cold Spot at (%d,%d), Temperature = %d*C\n",i,j,arr[i][j]);
            }
        }
    }
}
int main(){

    int temperature[4][4]={
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    int rows = sizeof(temperature)/sizeof(temperature[0]);
    int columns = sizeof(temperature[0])/sizeof(temperature[0][0]);
    
    findColdSpots(rows,columns,temperature);

    return 0;
}