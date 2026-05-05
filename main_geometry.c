#include <stdio.h>
#include "geometry.h"

int main(void) {

#ifndef TEST

    int option;

    do {
        printf("\nMenu:\n");
        printf("1 - Circle circumference\n");
        printf("2 - Circle area\n");
        printf("3 - Minimum of two numbers\n");
        printf("4 - Maximum of two numbers\n");
        printf("0 - Exit\n");
        printf("Choose an option: ");

        if (scanf("%d", &option) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        if (option == 1) {
            double radius;
            printf("Enter radius: ");
            scanf("%lf", &radius);

            if (radius < 0) {
                printf("Radius must not be negative!\n");
            } else {
                printf("Circumference: %.4f\n", circle_circumference(radius));
            }
        }

        else if (option == 2) {
            double radius;
            printf("Enter radius: ");
            scanf("%lf", &radius);

            if (radius < 0) {
                printf("Radius must not be negative!\n");
            } else {
                printf("Area: %.4f\n", circle_area(radius));
            }
        }

        else if (option == 3) {
            double a, b;
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);

            printf("Minimum: %.4f\n", MIN(a, b));
        }

        else if (option == 4) {
            double a, b;
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);

            printf("Maximum: %.4f\n", MAX(a, b));
        }

        else if (option != 0) {
            printf("Unknown option!\n");
        }

    } while (option != 0);

#endif

    return 0;
}