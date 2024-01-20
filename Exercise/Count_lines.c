// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char string[10][30];
//     int n;

//     printf("Enter no. of strings to input: ");
//     scanf("%d", &n);

//     while (getchar() != '\n');

//     printf("Enter string 1 by 1:\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("String %d: ", i + 1);
//         scanf("%29[^\n]", string[i]);

//         while (getchar() != '\n');
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%s", string[i]);
//         printf("-");
//         printf("%d\n", strlen(string[i]));
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter your string: ");
    gets(str);
    strrev(str);

    printf("\n");
    printf("Your string in reverse is: %s", str);
    return 0;
}
