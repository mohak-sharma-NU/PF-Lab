#include<stdio.h>
int main(){
	int arr[10];
	int i;
	for(i=0;i<10;i++){
		printf("Enter %d Element: ",i);
		scanf("%d",&arr[i]);
	}	
	int max = arr[0],min=arr[0];
	for(i=0;i<10;i++){
			if(max<arr[i])
				max=arr[i];
			if(min>arr[i])
				min=arr[i];
	}
	printf("Difference is equal to: %d ",max-min);
	return 0;
}