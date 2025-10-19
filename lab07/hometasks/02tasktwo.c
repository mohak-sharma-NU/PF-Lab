#include<stdio.h>

int main(){
	
	int arr[10];
	int i;
	for(i=0;i<10;i++){
		printf("Enter %d Element: ",i);
		scanf("%d",&arr[i]);
	}
	int toSearch,count=0;
	printf("What element do you want search? ");
	scanf("%d",&toSearch);
	
	for(i=0;i<10;i++){
		if(arr[i]==toSearch)
			count++;
	}
	
	if(count>0)
		printf("%d has occured %d times",toSearch,count);
	else
		printf("The number is not in the array. ");
		
	return 0;
}
