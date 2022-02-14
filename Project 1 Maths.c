#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double AreaOfASquare(), AreaOfATriangle(), AreaOfACircle(), CircumOfACircle(), QuadraticForm(), result;

int main(){
    int selection; 
    while(1){
        printf("\n\nChoose Which Function You Want To Use:\n");
        printf("1 - Area Of A Square\n");
        printf("2 - Area Of A Triangle\n");
        printf("3 - Area Of A Circle\n");
        printf("4 - Circumference Of A Circle\n");
        printf("5 - Quadratic Formula\n");
        printf("9 - Exit Program\n");
        scanf("%u", &selection);

    if(selection == 1){
        AreaOfASquare();
        } else if(selection == 2){
        AreaOfATriangle();
        } else if(selection == 3){
        AreaOfACircle();
        } else if(selection == 4){
        CircumOfACircle();
        } else if(selection == 5){
        QuadraticForm();
        } else if(selection == 9){
        exit(1);
        } else{
        printf("Invalid Option\n");     
        }
    }
    return 0;
}

//Math Functions:

double AreaOfASquare(){
    double Xlength, Yheight;
    do{
        printf("Length in meters Along X Plane (positive integer only): \n");
        scanf("%lf", &Xlength);
        printf("Height in meters Along Y Plane (positive integer only): \n");
        scanf("%lf", &Yheight);
    } while(Xlength <= 0 || Yheight <= 0);

    result = Xlength * Yheight;
    printf("Answer: %.4f meters squared\n", result);
    return 0;
}

double AreaOfATriangle(){
    double Xlength, Yheight;
    do{
        printf("Length in meters Along X Plane (positive integer only): \n");
        scanf("%lf", &Xlength);
        printf("Height in meters Along Y Plane (positive integer only): \n");
        scanf("%lf", &Yheight);
    } while(Xlength <= 0 || Yheight <= 0);

    result = (Xlength * Yheight) / 2;
    printf("Answer: %.4f meters squared\n", result);
    return 0;
}

double AreaOfACircle(){
    double radius;
    do{
        printf("Radius in meters (positive integer only): \n");
        scanf("%lf", &radius);
    } while(radius <= 0);

    result = 3.1415926535897932384626433832795028841971693993751 * (radius * radius);
    printf("Answer: %.4f meters squared\n", result);
    return 0;
}

double CircumOfACircle(){
    double radius;
    do{
        printf("Radius in meters (positive integer only): \n");
        scanf("%lf", &radius);
    } while(radius <= 0);

    result = 2 * 3.1415926535897932384626433832795028841971693993751 * radius;
    printf("Answer: %.4f meters\n", result);
    return 0;
}

double QuadraticForm(){
   //https://www.programiz.com/c-programming/examples/quadratic-roots
   //source above link; just got lazy on this function...

    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.4lf and root2 = %.4lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.4lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.4lf+%.4lfi and root2 = %.4f-%.4fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
    }