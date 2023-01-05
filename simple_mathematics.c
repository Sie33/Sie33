#include <stdio.h>
/**
 *this code allows the user to do simple math
 *multiplication, addition, subtractuon and division
 */
int main(void)
{
	float a = 50;
	float b = 34;
	/**printf("a: ");
	 *scanf("%f\n", &a);
         *printf("b: ");
         *scanf("%f\n", &b);
        */
float mult = a * b;
float div = a /b;
float add = a + b;
float sub = b - a;

printf("multiplying %f with %f you get %f\n", a, b,  mult);
printf("dividing %f by %f gives %f\n", a, b,  div);
printf("adding %f and %f gives %lf\n", a, b, add);
printf("subtracting %f with %f gives %lf\n", a, b, sub);
}
