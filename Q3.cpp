#include <stdio.h>
#define RESPONSES_SIZE 40 
#define FREQUENCY_SIZE 11
int main() {
	int answer;
	int rate; 
	int frequency[FREQUENCY_SIZE]={0};
	int  responses[RESPONSES_SIZE]={8,2,1,8,10,5,3,9,1,7,6,8,4,2,5,8,3,1,8,10,
									4,5,7,3,1,5,6,8,10,4,8,6,7,9,2,3,8,4,6,9};
	for ( int answer=0;answer<RESPONSES_SIZE;answer++ )
	    frequency[responses[answer]]++; 
	printf( "%s%17s\n","Rating","Frequency");
	for (rate=1; rate<FREQUENCY_SIZE;rate++ )
	    printf("%6d%17d\n",rate,frequency[rate]);
	return 0;
}
