#include<stdio.h>

void CalculateEachClassAvg(int rows,int columns,int arr[][columns]){
    float avg=0,sum=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                sum+=arr[i][j];
            }
            avg = (float)sum/columns;
            sum=0;
            printf("\nAverage for Class %d = %f",i+1,avg);
        }
}

int main(){

    int grades[3][4]=
    {
        {85,92,78,90},
        {88,76,95,84},
        {90,85,88,92}
    };
    int i,j;
    int NoOfRows = sizeof(grades)/sizeof(grades[0]);
    int NoOfCols = sizeof(grades[0])/sizeof(grades[0][0]);
    printf("No of rows = %d\nNo of Columns = %d",NoOfRows,NoOfCols);
    CalculateEachClassAvg(NoOfRows,NoOfCols,grades);

    return 0;
}