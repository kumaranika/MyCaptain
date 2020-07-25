#include <stdio.h>

int main()
{
    int  n;
    printf("Enter a number between 1 to 6: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Item- Virgin Mojito\nPrice- 199");
        break;
        case 2:
            printf("Item- Cold coffee\nPrice- 99");
        break;
        case 3:
            printf("Item- Hot chocolate\nPrice- 129");
        break;
        case 4:
            printf("Item- Hot coffee\nPrice- 79");
            break;
        case 5:
            printf("Item- Tea\nPrice- 49");
        break;
        case 6:
            printf("Item- Iced Tea\nPrice- 89");
        default:
        printf("Enter a valid choice :)");
    }

    return 0;
}
