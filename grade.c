

    #include <stdio.h>
#include <string.h>

int main()
{

    char choice;

    printf("Do you want to enter your grade? (Y/N): ");
    scanf(" %c", &choice);

    // Validate first choice
    while (strchr("YyNn", choice) == NULL)
    {
        printf("Invalid input. Enter Y or N: ");
        scanf(" %c", &choice);
    }

    // Start if user says Y
    if (choice == 'Y' || choice == 'y')
    {
        
        float total = 0;
        int subject_count = 0;
        char choice_again = 'Y';

        // Repeat while user wants to enter marks
        while (choice_again == 'Y' || choice_again == 'y')
        {
            float marks;

            printf("Enter marks: ");
            scanf("%f", &marks);

            total += marks;
            subject_count++;

            printf("Do you want to enter more marks? (Y/N): ");
            scanf(" %c", &choice_again);

            // Validate second choice
            while (strchr("YyNn", choice_again) == NULL)
            {
                printf("Invalid input. Enter Y or N: ");
                scanf(" %c", &choice_again);
            }
        }

        printf("\nTotal = %.2f\n", total);

        float average = total / subject_count;
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("Thank you for using the program.\n");
    }

    return 0;
}