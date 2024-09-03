#include <stdio.h>
#include <math.h>

int main() {
    float rayon;
    float volume;
    
    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &rayon);
    
    volume = (4.0 / 3.0) * M_PI * pow(rayon, 3);
    
    printf("Le volume de la sphère de rayon %.2f est : %.2f\n", rayon, volume);
    
    return 0;
}