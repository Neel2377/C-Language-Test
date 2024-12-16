#include <stdio.h>

int main() {
    float first_angle;
    float second_angle;
    float third_angle;
    printf("Enter the first angle: ");
    scanf("%f", &first_angle);
    printf("Enter the second angle: ");
    scanf("%f", &second_angle);
    third_angle = 180 - (first_angle + second_angle);
    printf("The third angle is: %f\n", third_angle);
}