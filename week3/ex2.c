#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int array[], int size) {
        int i,j;
        for (i = 0; i < size-1; i++) {
            for (j = 0; j < size-i-1; j++)
                if (array[j] > array[j+1]) {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
};
void print_array(int array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
}
int main()
{
    int init_arr[5] = {4,1,3,2,0};
    printf("%s\n","Initial array: ");
    print_array(init_arr, 5);
    bubble_sort(init_arr, 5);
    printf("%s\n", "Sorted array: ");
    print_array(init_arr, 5);
    return 0;
}

