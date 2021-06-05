#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float form, midx, midy;
    printf("What is x1? ");
    scanf("%f", &x1);
    printf("What is x2? ");
    scanf("%f", &x2);
    printf("What is y1? ");
    scanf("%f", &y1);
    printf("What is y2? ");
    scanf("%f", &y2);

    form = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    midx = ((x1 + x2) / 2);
    midy = ((y1 + y2) / 2);
    printf("The answer is: %.5f\n", form);
    printf("The midpoint ordered pair is (%.5f, %.5f)\n", midx, midy);
}