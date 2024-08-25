#include <stdio.h>

int compare(int *pa, int *pb) {

    if (*pa > *pb) {
        printf("%d is greater than %d\n", *pa, *pb);
    } else if (*pb > *pa) {
        printf("%d is greater than %d\n", *pb, *pa);
    } else {
        printf("Both numbers are the same\n");
    }

    return 0;

}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);
    compare(&x, &y);

    return 0;
}
