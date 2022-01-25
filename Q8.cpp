#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *Ptr;
    Ptr=fopen("datasize.dat","w");

    fprintf(Ptr,"%s%16s\n","Data type","Size");
    printf("%s%16s\n","Data type","Size");

    fprintf(Ptr,"%s%21d\n","char",sizeof(char));
    printf("%s%21d\n","char",sizeof(char));

    fprintf(Ptr,"%s%12d\n","unsigned char",sizeof(unsigned char));
    printf("%s%12d\n","unsigned char",sizeof(unsigned char));

    fprintf(Ptr,"%s%16d\n","short int",sizeof(short int));
    printf("%s%16d\n","short int",sizeof(short int));

    fprintf(Ptr,"%s%7d\n","unsigned short int",sizeof(unsigned short int));
    printf("%s%7d\n","unsigned short int",sizeof(unsigned short int));


    fprintf(Ptr,"%s%22d\n","int",sizeof(int));
    printf("%s%22d\n","int",sizeof(int));

    fprintf(Ptr,"%s%13d\n","unsigned int",sizeof(unsigned int));
    printf("%s%13d\n","unsigned int",sizeof(unsigned int));

    fprintf(Ptr,"%s%13d\n","long int",sizeof(long int));
    printf("%s%17d\n","long int",sizeof(long int));

    fprintf(Ptr,"%s%8d\n","unsigned long int",sizeof(unsigned long int));
    printf("%s%8d\n","unsigned long int",sizeof(unsigned long int));

    fprintf(Ptr,"%s%20d\n","float",sizeof(float));
    printf("%s%20d\n","float",sizeof(float));

    fprintf(Ptr,"%s%19d\n","double",sizeof(double));
    printf("%s%19d\n","double",sizeof(double));

    fprintf(Ptr,"%s%14d\n","long double",sizeof(long double));
    printf("%s%14d\n","long double",sizeof(long double));

    fclose(Ptr);
    return 0;
}
