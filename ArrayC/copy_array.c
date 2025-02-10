#include <stdio.h>
int main(){
    int i;
    int element[i];
    int n;
    int array2[i];

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("Input %d number of elements in the array: \n",n);
    for(i=0; i<n; i++){
        printf("element - %d: ",i);
        scanf("%d", &element[i]);

    }

    printf("The elements stored in the first array are: ");
    for(i=0; i<=n; i++){
        printf("%d", element[i]);

    }

    for(i=0; i<=n; i++){
        array2[i] = element[i];
    }

    printf("The elements copied into the second array are :");
    {
        for(i=0; i<=n; i++){
        printf("%d", array2[i]);

    }
    printf("\n");

    return 0;
}
}