#include <stdio.h>
#include <math.h>

int main(void)
{
    // on récupère la valeur du côté ab
    float ab = printf("valeur ab (en cm) : ");
    scanf("%f", &ab);

    // on récupère la valeur du côté ac
    float ac = printf("valeur ac (en cm) : ");
    scanf("%f", &ac);

    // on calcule la valeur de l'hypoténuse
    // bc² = ab² + ac²
    float bc = pow(ab, 2) + pow(ac, 2);
    printf("l'hypoténuse est de %.2f cm\n", sqrt(bc));

    system("PAUSE");
}