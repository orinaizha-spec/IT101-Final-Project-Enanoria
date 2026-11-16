#include <stdio.h>

int main()
{
    int mainChoice;
    int size, choice;
    int rows, num;
    int i, j, space;
    int length, palindrome, valid;
    char word[100];
    char again;

    do
    {
        printf("\n       MULTI-TOOL APPLICATION       \n");
        printf("1. Pattern Generator\n");
        printf("2. Pascal's Triangle\n");
        printf("3. Grade Calculator\n");
        printf("4. Palindrome Checker\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &mainChoice);

        if (mainChoice == 1)
        {
            printf("\n PATTERN GENERATOR \n");
            printf("Enter the size of the pattern: ");
            scanf("%d", &size);

            if (size <= 0)
            {
                printf("Invalid size!\n");
            }
            else
            {
                printf("\nChoose a pattern:\n");
                printf("1. Right Triangle\n");
                printf("2. Square\n");
                printf("3. Isosceles Triangle\n");
                printf("4. Inverted Right Triangle\n");
                printf("5. Christmas Tree\n");

                printf("\nEnter your choice: ");
                scanf("%d", &choice);

                if (choice == 1)
                {
                    for (i = 1; i <= size; i++)
                    {
                        for (j = 1; j <= i; j++)
                            printf("*");

                        printf("\n");
                    }
                }
                else if (choice == 2)
                {
                    for (i = 1; i <= size; i++)
                    {
                        for (j = 1; j <= size; j++)
                            printf("*");

                        printf("\n");
                    }
                }
                else if (choice == 3)
                {
                    for (i = 1; i <= size; i++)
                    {
                        for (space = 1; space <= size - i; space++)
                            printf(" ");

                        for (j = 1; j <= 2 * i - 1; j++)
                            printf("*");

                        printf("\n");
                    }
                }
                else if (choice == 4)
                {
                    for (i = size; i >= 1; i--)
                    {
                        for (j = 1; j <= i; j++)
                            printf("*");

                        printf("\n");
                    }
                }
                else if (choice == 5)
                {
                    for (i = 1; i <= size; i++)
                    {
                        for (space = 1; space <= size - i; space++)
                            printf(" ");

                        for (j = 1; j <= 2 * i - 1; j++)
                            printf("*");

                        printf("\n");
                    }

                    for (i = 1; i <= size / 2 + 1; i++)
                    {
                        for (space = 1; space < size; space++)
                            printf(" ");

                        printf("*\n");
                    }
                }
                else
                {
                    printf("Invalid choice!\n");
                }
            }
        }

        else if (mainChoice == 2)
        {
            printf("\n PASCAL'S TRIANGLE \n");
            printf("Enter the number of rows: ");
            scanf("%d", &rows);

            if (rows >= 1 && rows <= 15)
            {
                for (i = 0; i < rows; i++)
                {
                    for (space = 1; space <= rows - i; space++)
                        printf("  ");

                    num = 1;

                    for (j = 0; j <= i; j++)
                    {
                        printf("%4d", num);
                        num = num * (i - j) / (j + 1);
                    }

                    printf("\n");
                }
            }
            else
            {
                printf("Invalid number of rows! Enter 1 to 15 only.\n");
            }
        }

        else if (mainChoice == 3)
        {
            float midtermGrade, finalGrade, averageGrade;

            printf("\n GRADE CALCULATOR \n");

            printf("Enter Midterm Grade: ");
            scanf("%f", &midtermGrade);

            printf("Enter Final Grade: ");
            scanf("%f", &finalGrade);

            averageGrade = (midtermGrade + finalGrade) / 2;

            printf("\nYour Average Grade: %.2f\n", averageGrade);

            if (averageGrade <= 3.0)
                printf("Status: PASS\n");
            else
                printf("Status: FAIL\n");
        }

        else if (mainChoice == 4)
        {
            printf("\n PALINDROME CHECKER \n");
            printf("Enter a word: ");
            scanf("%99s", word);

            length = 0;

            while (word[length] != '\0')
            {
                length++;
            }

            palindrome = 1;
            valid = 1;

            for (i = 0; i < length; i++)
            {
                if (!((word[i] >= 'A' && word[i] <= 'Z') ||
                      (word[i] >= 'a' && word[i] <= 'z')))
                {
                    valid = 0;
                }
            }

            if (valid == 1)
            {
                for (i = 0; i < length / 2; i++)
                {
                    if (word[i] != word[length - 1 - i])
                    {
                        palindrome = 0;
                        break;
                    }
                }

                printf("\nRESULT:\n");

                if (palindrome == 1)
                    printf("Yes! \"%s\" is a palindrome.\n", word);
                else
                    printf("No! \"%s\" is NOT a palindrome.\n", word);
            }
            else
            {
                printf("Invalid input! Please enter letters only.\n");
            }
        }

        else if (mainChoice == 5)
        {
            printf("\nProgram ended. Thank you!\n");
            break;
        }

        else
        {
            printf("\nInvalid menu choice!\n");
        }

        if (mainChoice >= 1 && mainChoice <= 4)
        {
            printf("\nDo you want to try another operation? (Y/N): ");
            scanf(" %c", &again);

            if (again == 'N' || again == 'n')
            {
                printf("\nProgram ended. Thank you!\n");
                break;
            }
        }

    } while (1);

    return 0;
}