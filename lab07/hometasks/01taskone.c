#include<stdio.h>

int main(){
	
	int arr[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter %d Element: ",i);
		scanf("%d",&arr[i]);
	}
	
	int temp=0;
	for(i=0;i<5;i++){
		if(i==0){
			temp=arr[4-i];
		}
			arr[4-i]=arr[4-i-1];
		if(i==4){
			arr[4-i]=temp;
		}
	}
	
	printf("{");
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
		if(i<5-1)
			printf(",");
	}
	printf("}");
	
	return 0;
}