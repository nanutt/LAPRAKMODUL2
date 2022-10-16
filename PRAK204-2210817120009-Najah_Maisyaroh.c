#include <stdio.h>
int main(){
    float r, t, a, phi, luas, volume, keliling;
    scanf("%f", &r);
    scanf("%f", &t);
    volume=(t*22*r*r)/7;
    luas=((2*22*r)*(r+t))/7;
    keliling=(2*22)*r/7;
    printf("Volume = %.2f cm \n", volume);
    printf("Luas = %.2f cm \n", luas);
    printf("Keliling = %.2f cm^2 \n", keliling);
    scanf("%f %f", &r, &t);
    volume=(t*22*r*r)/7;
    luas=((2*22*r)*(r+t))/7;
    keliling=(2*22)*r/7;
    printf("Volume = %.2f cm \n", volume);
    printf("Luas = %.2f cm \n", luas);
    printf("Keliling = %.2f cm^2 \n", keliling);
    return 0;
}