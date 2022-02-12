#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double AreaOfASquare(), AreaOfATriangle(), AreaOfACircle(), CircumOfACircle(), QuadraticForm(), result;

int main(){
    int selection; 
    printf("Choose Which Program You Want To Use:\n");
    printf("1 - Area Of A Square\n");
    printf("2 - Area Of A Triangle\n");
    printf("3 - Area Of A Circle\n");
    printf("4 - Circumference Of A Circle\n");
    printf("5 - Quadratic Formula\n");
    scanf("%d", &selection);
   
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
    } else{
        printf("Invalid Option\n");
    }
    return 0;
}

//Math Functions:

double AreaOfASquare(){
    double Xlength, Yheight;
    printf("Enter The Length (in meters) Along X Plane: \n");
    scanf("%lf", &Xlength);
    printf("Enter The Height (in meters) Along Y Plane: \n");
    scanf("%lf", &Yheight);

    result = Xlength * Yheight;
    printf("Answer: %.4f meters squared\n", result);\
    return 0;
}

double AreaOfATriangle(){
    double Xlength, Yheight;
    printf("Enter The Length (in meters) Along X Plane: \n");
    scanf("%lf", &Xlength);
    printf("Enter The Height (in meters) Along Y Plane: \n");
    scanf("%lf", &Yheight);

    result = (Xlength * Yheight) / 2;
    printf("Answer: %.4f meters squared\n", result);
    return 0;
}

double AreaOfACircle(){
    double radious;
    printf("Enter The Radious (in meters): \n");
    scanf("%lf", &radious);
    
    result = 3.1415926535897932384626433832795028841971693993751 * (radious * radious);
    printf("Answer: %.4f meters squared\n", result);
    return 0;
}

double CircumOfACircle(){
    double radious;
    printf("Enter The Radious (in meters): \n");
    scanf("%lf", &radious);
    
    result = 2 * 3.1415926535897932384626433832795028841971693993751 * radious;
    printf("Answer: %.4f meters\n", result);
    return 0;
}

double QuadraticForm(){
    /*
    double a, b ,c;
    printf("Enter The Constant \"a\" (in meters): \n");
    scanf("%lf", &a);
    printf("Enter The Constant \"b\" (in meters): \n");
    scanf("%lf", &b);
    printf("Enter The Constant \"c\" (in meters): \n");
    scanf("%lf", &c);
    
    result = ((-b) + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    printf("Answer: %f meters squared\n", result);
    */
   
   //https://www.programiz.com/c-programming/examples/quadratic-roots
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