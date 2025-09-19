#include <stdio.h>
int main()
{
    int num1;
    int zero_count, one_count, two_count, three_count, four_count, five_count, six_count, seven_count, eight_count, nine_count;
    zero_count = 0;
    one_count = 0;
    two_count = 0;
    three_count = 0;
    four_count = 0;
    five_count = 0;
    six_count = 0;
    seven_count = 0;
    eight_count = 0;
    nine_count = 0;
    printf("Enter the number between 0-9 only: ");
    scanf("%d", &num1);
    while (num1 >= 0 && num1 <= 9)
    {
        if (num1 == 0)
        {
            zero_count = zero_count + 1;
        }
        else if (num1 == 1)
        {
            one_count = one_count + 1;
        }
        else if (num1 == 2)
        {
            two_count = two_count + 1;
        }
        else if (num1 == 3)
        {
            three_count = three_count + 1;
        }
        else if (num1 == 4)
        {
            four_count = four_count + 1;
        }
        else if (num1 == 5)
        {
            five_count = five_count + 1;
        }
        else if (num1 == 6)
        {
            six_count = six_count + 1;
        }
        else if (num1 == 7)
        {
            seven_count = seven_count + 1;
        }
        else if (num1 == 8)
        {
            eight_count = eight_count + 1;
        }
        else if (num1 == 9)
        {
            eight_count = eight_count + 1;
        }
        printf("Enter the number between 0-9 only: ");
        scanf("%d", &num1);
    }
    printf("   Number   |   Number of Occurences   \n");
    printf("---------------------------------------\n");
    printf("     0      |            %d            \n", zero_count);
    printf("---------------------------------------\n");
    printf("     1      |            %d            \n", one_count);
    printf("---------------------------------------\n");
    printf("     2      |            %d            \n", two_count);
    printf("---------------------------------------\n");
    printf("     3      |            %d            \n", three_count);
    printf("---------------------------------------\n");
    printf("     4      |            %d            \n", four_count);
    printf("---------------------------------------\n");
    printf("     5      |            %d            \n", five_count);
    printf("---------------------------------------\n");
    printf("     6      |            %d            \n", six_count);
    printf("---------------------------------------\n");
    printf("     7      |            %d            \n", seven_count);
    printf("---------------------------------------\n");
    printf("     8      |            %d            \n", eight_count);
    printf("---------------------------------------\n");
    printf("     9      |            %d            \n", nine_count);
    printf("---------------------------------------\n");
}