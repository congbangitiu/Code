#include<stdio.h>
int linear_search(int array[],int length, int x){
	for(int i=0;i<length;i++){
		if(array[i]==x)
			return 1; 
	}
	return 0;
}
int main()
{
    int array[] = {1,2,3,4,5};
    int x = 2;
    int size = sizeof(array) / sizeof(array[0]);
    int result =linear_search(array,size, x);
    if(result== 0)
        printf("Element is not present in array");
    else
    	printf("Element is present at index %d", result);
    return 0;
}
