// #include<stdio.h>

// int main()
// {
//     int i;

//     for(i = 1; i <= 10; i++)
//     {
//         if(i == 7)
//         {
//             break;
//         }

//         printf("%d ", i);
//     }

//     printf("\nLoop Ended");

//     return 0;
// }

// -----------------------------------------


// continue


// #include<stdio.h>

// int main()
// {
//     int i;

//     for(i = 1; i <= 10; i++)
//     {
//         if(i%3 == 0)
//         {
//             continue;
//         }

//         printf("%d ", i);
//     }

//     return 0;
// }

// -----------------------------------------

// go to


// #include<stdio.h>

// int main()
// {
//     int i = 1;

// loop:

//     if(i <= 5)
//     {
//         printf("%d ", i);
//         i++;

//         goto loop;
//     }

//     return 0;
// }

// ============

#include<stdio.h>

int main()
{
    int age;

    printf("Enter Age : ");
    scanf("%d",&age);

    if(age < 0)
    {
        goto error;
    }

    printf("Valid Age");

    return 0;

error:

    printf("Invalid Age");
}
