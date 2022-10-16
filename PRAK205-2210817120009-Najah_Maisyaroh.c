#include <stdio.h>
int main(){
    int a, b, c, luas, keliling;
    scanf("%d %d", &a, &b);
    c=((b*b)-(a*a))/9;
    keliling=a+b+c;
    luas=(1*c*a)/2;
    printf("Alas = %d cm \n", c);
    printf("Tinggi = %d cm \n", a);
    printf("Keliling = %d cm \n", keliling);
    printf("Luas = %d cm^2 \n", luas);
    scanf("%d", &a);
    scanf("%d", &b);
    c=((b*b)-(a*a))/63;
    keliling=a+b+c;
    luas=(1*c*a)/2;
    printf("Alas = %d cm \n", c);
    printf("Tinggi = %d cm \n", a);
    printf("Keliling = %d cm \n", keliling);
    printf("Luas = %d cm^2 \n", luas);
    return 0;
}