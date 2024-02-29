#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction findSmallestFraction(Fraction fractions[], int size) {
    Fraction smallest = fractions[0];

    for (int i = 1; i < size; ++i) {
        double value1 = (double)smallest.num / smallest.den;
        double value2 = (double)fractions[i].num / fractions[i].den;

        if (value2 < value1) {
            smallest = fractions[i];
        }
    }

    return smallest;
}

int main() {
    Fraction fractions[3];
    
    printf("Enter the first fraction (numerator denominator): ");
    scanf("%d %d", &fractions[0].num, &fractions[0].den);
    
    printf("Enter the second fraction (numerator denominator): ");
    scanf("%d %d", &fractions[1].num, &fractions[1].den);
    
    printf("Enter the third fraction (numerator denominator): ");
    scanf("%d %d", &fractions[2].num, &fractions[2].den);
    
    Fraction smallest = findSmallestFraction(fractions, 3);
    
    printf("The smallest fraction is: %d/%d\n", smallest.num, smallest.den);

    return 0;
}
