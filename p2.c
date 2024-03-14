#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

/* Function declarations */
double getdiameter(double radius) {
    return 2 * radius;
}


double getcircumference(double radius) {
    return 2 * M_PI * radius;
}


double getarea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;

    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    
    double d = getdiameter(radius);
    double c = getcircumference(radius);
    double a = getarea(radius);


    printf("Diameter of circle: %.2lf\n", d);
    printf("Circumference of circle: %.2lf\n", c);
    printf("Area of circle: %.2lf\n", a);

    return 0;
}