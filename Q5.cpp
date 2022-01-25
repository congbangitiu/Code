#include<stdio.h>
#include<stdlib.h>
#include<string.h.>
int main(){
	char string[30];
	char *sPtr;
	double store[100],sum=0;
	printf("Input 10 strings that represent floating-point values: ");
	for(int i=0;i<10;i++){
		scanf("%s",string);
		store[i]=strtod(string,&sPtr);
//		scanf("%s",&string[i]);
//		store[i]=strtod(&string[i],&sPtr);
	}
	for(int i=0;i<10;i++) {
		sum+=store[i];
	}
	printf("After converting strings to double values: ");
	printf("\n  The sum of 10 double values is: %.3lf",sum);
	return 0;
}



