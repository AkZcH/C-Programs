#include <stdio.h>
#include<stdlib.h>

int main(){
    int size, *arr, sum=0;

    printf("Enter the size");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));

    for(int i= 0; i<size; i++){
        printf("enter values");
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
        printf("\n");
    }

    for(int i=0; i<=size-1; i++){

        for(int j=2; j<arr[i];j++){
             if(arr[i]%j!=0){
                sum = sum + arr[i];
                printf("%d", sum);
             }
        }
       
    }

free(arr);
return 0;

     
}