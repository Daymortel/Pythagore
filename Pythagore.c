#include <stdio.h>
#include <math.h>

int main(void)
{
    // on récupère la valeur du côté ab
    float ab = printf("Quelle est la longueur de AB (en cm) : ");
    scanf("%f", &ab);

    // on récupère la valeur du côté ac
    float bc = printf("Quelle est la longueur de BC (en cm) : ");
    scanf("%f", &bc);

    // on calcule la valeur de l'hypoténuse
    // ac² = ab² + bc²
    float ac = pow(ab, 2) + pow(bc, 2);
    printf("La longueur de l'hypoténuse est de %.2f cm\n", sqrt(ac));

    //system("PAUSE");
}