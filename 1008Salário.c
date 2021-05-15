#include <stdio.h>
 
int main() {
 
 int NUMBER,h;
 double A, s;
 scanf("%d %d %lf", &NUMBER, &h, &A);
 s = h * A;
 printf("NUMBER = %d\n",NUMBER);
 printf("SALARY = U$ %0.2lf\n", s);
 
    return 0;
}
