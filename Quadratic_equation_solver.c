#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    double x_1, x_2, discriminant;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    discriminant = pow(b, 2) - (4 * a * c);

    if (a == 0)
    {
        printf("This is not a quadratic equation(a cannot be equal to)\n");
    }
    else if (discriminant > 0)
    {
        x_1 = (-b + sqrt(discriminant)) / (2 * a);
        x_2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("The value of x1 is: %lf\n", x_1);
        printf("The value of x2 is: %lf\n", x_2);
    }
    else if (discriminant == 0)
    {
        x_1 = -b / (2 * a);
        printf("The Equation has one Real root: %lf\n", x_1);
    }

    else
    {
        printf("The equation has imaginary roots!!\n");
    }

    return 0;
}