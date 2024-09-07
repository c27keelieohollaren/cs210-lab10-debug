/** lab10fixMe.c
* ===========================================================
* Name: Keelie O'Hollaren
* Section: T3B
* Project: Lab 10
* Purpose: Debugging
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/


#include <stdio.h>
#include "lab10_functs.h"
 

int main() { 
    int n1, n2, n3;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);            
    int largest = findLargest(n1,n2,n3);
    printf("%d\n", largest);

    // convertTemperature()
    double fahrenheit =0.0;
    printf("Please enter a temperature in fahrenheit: \n");
    scanf("%lf", &fahrenheit);
    double celsius = convertTemperature(fahrenheit);
    printf("%lf\n", celsius);
    return 0;
}
