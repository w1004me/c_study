#include <stdio.h>

int main(void)
{
    int arr[5] = {6, 24, 27, 3, 21};
    int arr_size = (sizeof(arr)/sizeof(int))-1;
    int ori_arr_size = sizeof(arr)/sizeof(int);
    int Max = 0;
    int Max_index = 0;
    int temp;

    printf("초기 배열값 : \n");
    for(int x = 0; x < ori_arr_size; x++)
    {
        printf("%d ", arr[x]);
    }
    printf("\n");
    //Max value search
    for(int i =0; i< ori_arr_size-1; i++)
    {
        for(int j =0; j< arr_size+1; j++)
        {
            if(arr[j] > Max)
            {
                Max = arr[j]; 
                Max_index = j;
            }
        }
        printf("Max = %d\n", arr[Max_index]);
        //change Max Value
        temp = arr[arr_size];
        arr[arr_size] = arr[Max_index];
        arr[Max_index] = temp;
        arr_size--;
        Max = 0;
        
        printf("%d 회차\n", i);
        
        for(int k = 0; k < ori_arr_size ; k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
}