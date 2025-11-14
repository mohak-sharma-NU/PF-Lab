#include<stdio.h>
#include<string.h>

int main(){
    char word[]="Hello World!";
    char firstN[50]="zzzz";
    char firstN2[50]="yzzz ";
    char secondN[]="Sharma ";
    char fName[50];
    

    

	fgets(fName,10,stdin);

	//1.Finding lenght of a string using strlen
    int len = strlen(word);
    
    //2.Concatinating two strings
    strcat(firstN,secondN);

	//3. Concatinating two strings from a particular index
    strncat(secondN,firstN,1);

	//4.Copying strings
	strcpy(firstN,secondN);

	strcpy(secondN,firstN);

	strncpy(secondN,firstN,4);

	//5.Comparing strings
	printf("%d ",strcmp(firstN,firstN2));

	printf("%d ",strcmp(firstN2,firstN));
		
	//6.Printing strings using puts and printf
	printf("\n%s",secondN);	
	printf("\n\n");
	puts(secondN);
    
	printf("%s",firstN);	
	printf("\n\n");
	puts(firstN);	

	return 0;
}
