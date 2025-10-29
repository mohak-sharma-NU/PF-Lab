#include<stdio.h>

void PhotosTaken(int rows,int cols,int arr[rows][cols]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("\nPhotos taken in Year %d, Month %d = %d",i+1,j,arr[i][j]);
        }
    }
}

int main(){

    int rows=2,cols=12;
    int arr[2][12]=
    {
        {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},
        {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}
    };

    PhotosTaken(rows,cols,arr);

    return 0;
}