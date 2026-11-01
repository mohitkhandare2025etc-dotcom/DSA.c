#include <stdio.h>
#include <string.h>
int length(char[]);
void compare(char[], char[]);
void palindrome(char[]);
void substring(char[], char[]);
void copy(char[], char[]);
void reverse(char[]);
void displayMenu();
int i, j;
int main()
{
    int choice;
    char str[50];
    char str2[50];
    int exit = 0;

    displayMenu();

    do
    {
        printf("\nENTER CHOICE (7 for Display Menu): ");
        scanf("%d", &choice);

        if (!(choice == 7 || choice == 8))
        {
            printf("Enter String: ");
            scanf("%s", str);
        }

        switch (choice)
        {
        case 1:
            printf("Length of the String = %d\n", length(str));
            break;


        case 2:
            printf("Enter second String: ");
            scanf("%s", str2);
            copy(str, str2);
            break;


        case 3:
            reverse(str);
            break;

        case 4:
            palindrome(str);
            break;

        case 5:
            printf("Enter substring String: ");
            scanf("%s", str2);
            substring(str, str2);
            break;

        case 6:
            printf("Enter second String: ");
            scanf("%s", str2);
            compare(str, str2);
            break;

        case 7:
            displayMenu();
            break;

        case 8:
            exit = 1;
            printf("Program Ended.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (!exit);

    return 0;
}
void displayMenu()
{
    printf("\n========== MENU ==========\n");
    printf("1. Length of String\n");
    printf("2. Copy String\n");
    printf("3. Reverse String\n");
    printf("4. Check Palindrome\n");
    printf("5. Check Substring\n");
    printf("6. Compare Strings\n");
    printf("7. Display Menu\n");
    printf("8. Exit\n");
}
int length(char a[])
{
    int len = 0;
    while (a[len] != '\0')
        len++;
    return len;
}
void compare(char str[], char str2[])
{
    int flag = 0;
    i = 0;
    while (str[i] != '\0' || str2[i] != '\0')
    {
        if (str[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        printf("Strings are Equal.\n");
    else
        printf("Strings are Different.\n");
}
void palindrome(char a[])
{
    int l = length(a);
    int flag = 0;
    for (i = 0; i < l / 2; i++)
    {
        if (a[i] != a[l - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("String is Palindrome.\n");
    else
        printf("String is Not Palindrome.\n");
}
void substring(char a[], char b[])
{
    int al = length(a);
    int bl = length(b);
    int count = 0;
    if (bl > al)
    {
        printf("String B is not a substring of String A.\n");
        return;
    }
    for (i = 0; i <= al - bl; i++)
    {
        for (j = 0; j < bl; j++)
        {
            if (a[i + j] != b[j])
                break;
        }
        if (j == bl)
            count++;
    }
    if (count == 0)
        printf("String B is not a substring of String A.\n");
    else
        printf("String B is a substring of String A and occurs %d time(s).\n", count);
}
void copy(char a[], char b[])
{
    i = 0;
    while (b[i] != '\0')
    {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';

    printf("Copied String = %s\n", a);
}
void reverse(char a[])
{
    int l = length(a);
    char temp;
    for (i = 0; i < l / 2; i++)
    {
        temp = a[i];
        a[i] = a[l - i - 1];
        a[l - i - 1] = temp;
    }
    printf("Reversed String = %s\n", a);
}
