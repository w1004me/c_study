#include<stdio.h>

void main(void)
{
    int arr1[3] = {1, 2, 3};
    
    for(int i = 0; i<3; i++)
    {
        *(arr1+i) += 100*(i+1);
    }

    for(int i = 0; i<3; i++)
    {
        printf("%d ", arr1[i]);
    }
}