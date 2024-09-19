#include<stdio.h>
int main(){
    printf("%d\n",sizeof(int));
    printf("%hd\n",sizeof(short int));
    printf("%hu\n",sizeof(unsigned short int));
    printf("%u\n",sizeof(unsigned int));
    printf("%ld\n",sizeof(long int));
    printf("%lu\n",sizeof(unsigned long int));
    printf("%lld\n",sizeof(long long int));
    printf("%llu\n",sizeof(unsigned long long int));
    printf("%c\n",sizeof(signed char));
    printf("%c\n",sizeof(unsigned char));
    printf("%f\n",sizeof(float));
    printf("%lf\n",sizeof(double));
    printf("%Lf\n",sizeof(long double));
    }
