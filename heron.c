#include<math.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,area;
    printf("enter numbers");
    scanf("%d%d%d, &a, &b, &c");
    s=(a+b+c)/2;
    printf("%f\n",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area using heron's formula:%f",area);
    }
