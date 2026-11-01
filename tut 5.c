#include <stdio.h>

#define max 5

int stack[max];

int top = -1;

void push(int value)

{

    if (top == max - 1)

    {

        printf("\nStack is full.");

    }

    else

    {

        stack[++top] = value;

        printf("\n%d pushed to stack.", value);

    }

}

void pop()

{

    if (top == -1)

    {

        printf("\nStack is underflow.");

    }

    else

    {

        printf("\n%d is popped.", stack[top--]);

    }

}

void peak()

{

    if (top == -1)

    {

        printf("\nStack is empty.");

    }

    else

    {

        printf("\n%d is the peak element.", stack[top]);

    }

}

void display()

{

    if (top == -1)

    {

        printf("\nStack is underflow.");

    }

    else

    {

        for (int i = top; i >= 0; i--)

        {

            printf("\n%d", stack[i]);

        }

    }

}

int main()

{

    int value, choice, exit = 0;

    do

    {

        printf("\n\n<-------- Main Menu -------->");

        printf("\n1. Push");

        printf("\n2. Pop");

        printf("\n3. Peak");

        printf("\n4. Display");

        printf("\n5. Exit");

        printf("\nEnter your choice: ");

        scanf("%d", &choice);

        switch (choice)

        {

            case 1:

                printf("Enter item to be pushed: ");

                scanf("%d", &value);

                push(value);

                break;

            case 2:

                pop();

                break;

            case 3:

                peak();

                break;

            case 4:

                display();

                break;

            case 5:

                exit = 1;

                break;

            default:

                printf("\nInvalid choice.");

        }

    } while (exit == 0);

    return 0;

}
