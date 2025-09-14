#include <stdio.h>

int main()
{
    int age;
    char Eyesight_exam;
    char written_test;
    char driving_test;
    char medical_certificate;

    printf("DRIVING LICENSE FORM\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Invalid Age!!\n");
        return -1;
    }

    if (age < 18)
    {
        printf("Ineligible!!\n");
        return -1;
    }

    printf("Have you passed the eyesight test? (Press P for pass and F for fail): ");
    scanf(" %c", &Eyesight_exam);
    if (Eyesight_exam == 'F')
    {
        printf("Need prescription for glasses!!\n");
        return -1;
    }
    printf("Have you passed the written test? (Press P for pass and F for fail): ");
    scanf(" %c", &written_test);
    if (written_test == 'F')
    {
        printf("GIVE A RETAKE!!\n");
        return -1;
    }
    printf("Have you passed the driving test? (Press P for pass and F for fail): ");
    scanf(" %c", &driving_test);
    if (driving_test == 'F')
    {
        printf("Ineligible because you have not passed the driving test.\n");
        return -1;
    }
    if (age < 60)
    {
        printf("You are eligible for the license\n");
        return 1;
    }
    else
    {
        printf("Do you have an medical fitness certificate?(Press Y for yes and N for No): ");
        scanf(" %c", &medical_certificate);
        if (medical_certificate == 'N')
        {
            printf("Not eligible\n");
            return -1;
        }
        else
        {
            printf("Eligible!!\n");
            return 1;
        }
    }
}