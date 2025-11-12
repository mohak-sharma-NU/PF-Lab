#include<stdio.h>

int main(){

    int rows=3,columns=4;
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int* ptrRow = arr[0];
    int* ptrRow2 = arr[1];
    int* ptrRow0 = arr[-1];

    // int* ptrCol = arr[0];

    // printf("%d %d",ptrRow);

    //accessing each element through a pointer: 
    int i,noOfElements = rows*columns;
    for(i=0;i<noOfElements;i++){
        printf("%d ",*(ptrRow+i));
    }

    printf("\n %d\nUsing positive pointer: \n",*ptrRow2);

    //Using a second row pointer
    for(i=-4;i<noOfElements-4;i++){
        printf("%d ",*(ptrRow2+i));
    }

    printf("\n %d\nUsing negative pointer: \n",*ptrRow0);
    //Using a negetive row pointer
    for(i=+4;i<noOfElements+4;i++){
        printf("%d ",*(ptrRow0+i));
    }

    printf("\n %d\nUsing moving pointer: ",*ptrRow0);
    //Using a negative pointer to find no; divisible by 3.
    for(i=0;i<noOfElements;i++){
        ptrRow++;
        if(*ptrRow%3==0)
            printf("%d ",*ptrRow);
    } 

    //Printing the last element using 'Different' method.
    ptrRow = arr[0];//re-pointing to the first element
        
    printf("\n\nPrinting the last element: %d ",*(ptrRow+noOfElements-1));

    return 0;
}