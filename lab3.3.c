#include <stdio.h>
int main () {
    int num;
    printf("Type an integer in range 10..20: ");
    scanf("%d", &num);
    switch (num) {
        case 10:
        printf(" ten\n");
        break;
        case 11:
        printf(" eleven\n");
        break;
        case 12:
        printf(" twelve\n");
        break;
        case 13:
        printf("thirteen\n");
        break;
        case 14:
        printf("fourteen\n");
        break;
        case 15:
        printf("fifthteen\n");
        break;
        case 16:
        printf("sixteen\n");
        break;
        case 17:
        printf("seventeen\n");
        break;
        case 18:
        printf("eighteen\n");
        break;
        case 19:
        printf("nineteen\n");
        break;
        case 20:
        printf("twenty");
        break;
        default:
        printf ("The entered number is not in the range 10..20\n");
        break;
    }
    return 0;
}