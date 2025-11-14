#include<stdio.h>
#include<string.h>

int main(){
	
	//1. Initializing 2d character arrays
    char carCompanies[][15]={
		"Lamborghini",
		"Ferrari",
		"Porche",
		"Skoda",
		"BYD"
	};
	
    char Ecars[5][15]={
		"Tesla",
		"Lucid",
		"Toyota",
		"Hyundai",
		"BYD",
	};
	
	int i,j;
	
	//2. replacing a string
	strcpy(Ecars[0],carCompanies[1]);
	
	for(i=0;i<5;i++){
		//3. Printing lenghts
		printf("%s\n%d\n\n",Ecars[i],strlen(Ecars[i]));
	}
	
	//4. Printing individual letters.
	for(i=0;i<5;i++){
		printf("%s\n",Ecars[i]);
		for(j=0;Ecars[i][j]!='\0';j++){
			printf("%c\n",Ecars[i][j]);
		}
		printf("\n");
	}
	return 0;
}
