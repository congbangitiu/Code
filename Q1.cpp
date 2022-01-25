#include <stdio.h>
void f(const int *xPtr);
int main(void)
{
 int y; 
 f(&y);
 printf("%d",y);
} 
void f(const int *xPtr)
{
	int a=100;	
 xPtr = &a; 
}
