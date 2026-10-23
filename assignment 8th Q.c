
#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    if (height <= 0 || weight <= 0)
    {
        printf("Invalid input");
    }
    else
    {
        bmi = weight / (height * height);

        printf("\nBMI = %.f", bmi);

        if (bmi < 18.5)
            printf("\nUnderweight");
        else if (bmi < 25)
            printf("\nNormal");
        else if (bmi < 30)
            printf("\nOverweight");
        else
            printf("\nObese");
    }

}