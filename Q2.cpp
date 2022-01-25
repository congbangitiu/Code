#include <stdio.h>
int main( void ){
 int a[] = { 6, 1, 0, 7}, i, size;
 int *aPtr = a;
 size = sizeof(a)/sizeof(a[0]);
 for ( i = 0; i < size; i++ ) {
 printf( "%d ", a[i] );
 printf( "%d ", aPtr[i]);
 printf( "%d\n", *(aPtr+i));
 }
}
