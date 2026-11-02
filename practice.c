// #include <stdio.h>
// int main() {
//     int arrr[] = {10, 20, 30};

//     // printf("%d", arr[0]);

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Element %d Address: %p\n", i, (void*) & arrr[i]);
//     }
    

// return 0;   
// }


// Printing the value of array.
// #include <stdio.h>
// int main(){
//     int arr[] = {10, 12, 14, 15};
//     int size = 4;

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// Inserting new element in the array.
// #include <stdio.h>
// int main(){
//     int arr[5] = {10, 12, 14, 15};
//     int size = 5;
//     int new_value = 20;
//     int idx = 2;

//     for (int i = size; i > idx; i--)   // Doing Shifting here;
//     {
//         arr[i] = arr[i - 1];
//     }
//     // Adding new element

//     arr[idx] = new_value;
//     size++;

//     for(int i = 0;  i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
    
// }


// Deleting the element from the array.

// #include <stdio.h>
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = 5;
//     int del_idx = 2;

//     for(int i = del_idx; i < size; i++) {
//         arr[i] = arr[i + 1];
//     }
//     size--;

//     for(int i = 0; i < size; i++) printf("%d ", arr[i]);

//     return 0;
// }


// Finding maximum and minimum value in an array

// #include <stdio.h>

// // struccture to return both, max and min function.
// struct pair {
//     int min;
//     int max;
// };

// struct Pair getMinMax(int arr[], int n) {
//     struct pair minmax;
//     int i;

//     if(n==1) {
//         minmax.max = arr[0];
//         minmax.min = arr[0];
//         return minmax;
//     }
//     if (n % 2 == 0) {
//         if (arr[0] > arr[1]) {
//             minmax.max = arr[0];
//             minmax.min = arr[1];
//         } else {
//             minmax.max = arr[1];
//             minmax.min = arr[0];
//         }
//         i = 2;     // starting loop from third element
//     } else {
//         minmax.max = arr[0];
//         minmax.min = arr[0];
//         i = 1;      // start loop from second element
//     }
// }


// program to find the largest number in an array.

// #include <stdio.h>

// int array_max_num(int arr[], int size) {
//     int max_val = arr[0];

//     for (int i = 1; i < size; i++)
//     {
//         if(arr[i] > max_val) {
//             max_val = arr[i];
//         }
//     }
//     return max_val;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int max_num = array_max_num(arr, size);
//     printf("Maximum Nmber %d\n", max_num);

//     return 0;
// }

// Program to find the minimum number in an array.

#include <stdio.h>

int find_min_num(int arr[], int size) {
    int min_val  = arr[0];

    for (int i = 1; i < size; i++) {
        if  (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int main() {
    int array[] = {1, 2,  3, 4, 5};
    int size = sizeof(array)  / sizeof(array[0]);

    int min_num = find_min_num(array, size);
    printf("Minimum Number %d\n", min_num);

    return 0;
}