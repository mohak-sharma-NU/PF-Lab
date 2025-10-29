#include<stdio.h>

void Printf2dArray(int rows,int columns,int arr[][columns]){
    int i=0,j=0;
    for(i=0;i<rows;i++){
        printf("{");
        for(j=0;j<columns;j++){
            if(j+1==rows)
                printf("%d",arr[i][j]);
            else
                printf("%d,",arr[i][j]);
        }
        printf("}\n");
    }
}

void invertArray(int rows,int columns,int arr1[][columns],int arr2[][columns]){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(arr1[i][j]==0){
                arr2[i][j]=1;
            }else{
                arr2[i][j]=0;
            }
        }
    }
}

int countWhitepixels(int rows,int columns,int arr[][columns]){
    int i,j,count=0;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(arr[i][j]==1)
                count++;
        }
    }
    return count;
}

void displaySidebySide(int rows,int columns,int arr1[][columns],int arr2[][columns]){
    int i,j,k;
    for(i=0;i<rows;i++){

        for(j=0;j<columns;j++){
            printf("%d ",arr1[i][j]);
        }

        printf(" | ");

        for(k=0;k<columns;k++){
            printf("%d ",arr2[i][k]);
        }

        printf("\n");
    }
}
int main(){

    int original[4][4]={
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };

    int reversed[4][4]={0};

    int rows = sizeof(original)/sizeof(original[0]);
    int cols = sizeof(original[0])/sizeof(original[0][0]);
    printf("Original Array: \n");
    Printf2dArray(rows,cols,original);

    int count = countWhitepixels(rows,cols,original);
    printf("Number of White Pixels = %d\n",count);

    invertArray(rows,cols,original,reversed);

    printf("Reversed Array: \n");
    Printf2dArray(rows,cols,reversed);

    count = countWhitepixels(rows,cols,reversed);
    printf("Number of White Pixels = %d\n",count);

    printf("Displayed Side by Side: \n");
    displaySidebySide(rows,cols,original,reversed);

    return 0;
}