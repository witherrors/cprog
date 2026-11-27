//Modify the program of proj2 so that it promps the user for the radius of the sphere.

//directives
#include <stdio.h>



//functions
int main(void) {
    
    int radius;

    printf("Please enter radius of sphere: ");
    scanf("%d", &radius);

    printf("%.2f\n", 4.0/3.0 * 3.14 * (radius*radius*radius));
    return 0;
}