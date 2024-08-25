#include<stdio.h>

int main(){
    int a1, b1, *pa1, *pb1;
     int a2, b2, *pa2, *pb2;
     int choice, real, complex;


    int product(int*px1, int *py1, int *px2, int *py2){
        int *realno, *complexno, *z;
        *realno = ( *px1 *px2) - (*py1 * *py2);
        *complexno = (x1*y2) + (x2*y1);
    }



    printf("Print the first complex no.");
    scanf("%d %d", &a1, &b1);

    printf("Print the second complex no.");
    scanf("%d %d", &a2, &b2);

    printf("MENU \n ");
    printf("1. Addition");
    printf("2. Multiplication");

    printf("Enter your choice");
    scanf("%d", &choice);


        if(choice==1){
        real = a1 + a2;
        complex = b1 + b2;
        printf("sum = %d + %di ", real, complex);
    }

        if(choice==2){
            real = (*a1*a2) - (b1*b2);
            complex = (a1*b2) + (a2*b1);
            printf("produt = %d + %d i ", real, complex);

        }
        


    return 0;
}

