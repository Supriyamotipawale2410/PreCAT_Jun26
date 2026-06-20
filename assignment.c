// #include <stdio.h>

// void printEven();
// void printOdd();

// int main()
// {
//     printEven();
//     printf("\n");
//     printOdd();

//     return 0;
// }

// void printEven()
// {
//     int i = 2;

//     printf("Even Numbers:\n");

//     do
//     {
//         printf("%d ", i);
//         i = i + 2;
//     } while (i <= 100);
// }

// void printOdd()
// {
//     int i = 1;

//     printf("Odd Numbers:\n");

//     do
//     {
//         printf("%d ", i);
//         i = i + 2;
//     } while (i <= 99);
// }



#include <stdio.h>

void pattern();

int main()
{
    pattern();
    return 0;
}

void pattern()
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        // Print spaces
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 5 - (2 * i); j > 0; j--)
        {
            printf("*");
        }

        printf("\n");
    }
}


#include <stdio.h>

void numberPattern();

int main()
{
    numberPattern();
    return 0;
}

void numberPattern()
{
    int i, j;                       

    for(i = 1; i <= 5; i++) 
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}


#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str);

    return 0;
}

void reverse(char str[])
{
    int i;
    int len = strlen(str);
    

    printf("Reversed String: ");
//Hello---->olleH
    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}