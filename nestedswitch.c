// nested switch statement in c
#include <stdio.h>
int main() {
    int a = 1;
    switch (a) {
        case 1:
        switch (a) {
            case 1:
            printf("a = 1\n");
            break;
            case 2:
            printf("a = 2\n");
            break;
            default:
            printf("a = default\n");
            break;
        }
        break;
        case 2:
        switch (a) {
            case 1:
            printf("a = 1\n");
            break;
            case 2:
            printf("a = 2\n");
            break;
            default:
            printf("a = default\n");
            break;
        }
        break;
        default:
        switch (a) {
            case 1:
            printf("a = 1\n");
            break;
            case 2:
            printf("a = 2\n");
            break;
            default:
            printf("a = default\n");
            break;
        }
        break;
    }
    return 0;
    }
}