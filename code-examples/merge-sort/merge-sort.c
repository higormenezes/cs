#include <stdio.h>

void merge_sort(int array[], int left_index, int right_index);

void printArray(int a[], int length);

int main(void) {
    int array[] = {9,7,6,4,8,2,5,0,1,3,10};
    int length = 11;

    printArray(array, length);
    merge_sort(array, 0, length - 1);
    printArray(array, length);

    return 0;
}

void merge_sort(int array[], int left_index, int right_index) {
    if (left_index < right_index) {
        int middle_index = (left_index + right_index + 1) / 2;

        merge_sort(array, left_index, middle_index - 1);
        merge_sort(array, middle_index, right_index);

        int left_length = middle_index - left_index;
        int right_length = right_index - middle_index + 1;
        int temp_array_left[left_length];
        int temp_array_right[right_length];

        for (int i = 0; i < left_length; i++) {
            temp_array_left[i] = array[left_index + i];
        }
        for (int i = 0; i < right_length; i++) {
            temp_array_right[i] = array[middle_index + i];
        }

        for (int i = left_index, li = 0, ri = 0; i <= right_index; i++) {
            if (ri >= right_length || (li < left_length && temp_array_left[li] < temp_array_right[ri])) {
                array[i] = temp_array_left[li];
                li++;
            } else {
                array[i] = temp_array_right[ri];
                ri++;
            }
        }
    }
}

void printArray(int a[], int length) {
    printf("Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


