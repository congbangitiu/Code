//#include <stdio.h>
//int main(){
//	char string[100]="Final_exam", reverse[100];
//	int i,j,count=0;
//	while (string[count] != NULL){
//		count++;
//	}
//	j = count - 1;
//	  //reversing the string by swapping
//	for (int i = 0; i<count; i++)
//	{
//		reverse[i] = string[j];
//		j--;
//	}
//	printf("\nString after reversing: %s", reverse);
//}
#include <stdio.h>
#include <string.h>
 
int main(){
	char string[100]="Final";
	int start,end;
	start = 0;
	end = strlen(string)-1;   
	for(int i=start;i<end;i++){
	    int temp = string[i];
	    string[i] = string[end];
	    string[end] = temp;
	    end--;
	}
	printf("String after reversing is: %s", string);
	return 0;
}
