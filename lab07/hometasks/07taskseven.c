#include<stdio.h>
//2 3 5 3 5 9 1 2 8 1 
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
	
	int arr[10]={0};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i,max=arr[0];

	for(i=0;i<size;i++){
		printf("Enter %d Element: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<size;i++){
		if(max<arr[i])
			max=arr[i];
	}
	printfArray(arr,size);
	int frequencyArr[10]={0};
	int number;
	for(i=0;i<size;i++){
		number = arr[i];
		frequencyArr[number]++;
		if(frequencyArr[arr[i]]>1){
			arr[i]=-1;
		}
	}	
	
	printfArray(arr,size);
	printfArray(frequencyArr,size);

	return 0;
}