#include <stdio.h>

int main() {
    
    struct Complex {
        float real;
        float imag;
    };
    
    struct Complex c1, c2, sum, diff, mul ,div;
   
    

    printf("Enter real and img part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and img part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);


    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag; 

    mul.real=((c1.real*c2.real)-(c1.imag*c2.imag));
    mul.imag=((c1.imag*c2.real)+(c1.real*c2.imag));

    

    printf("\nAddition: %f + %fi\n", sum.real, sum.imag);
    printf("Subtraction: %f + %fi\n", diff.real, diff.imag);
    printf("Multiplication :%f  +%fi",mul.real,mul.imag);
   

    return 0;
}
