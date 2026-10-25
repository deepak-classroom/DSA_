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

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int del_idx = 2;

    for(int i = del_idx; i < size; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}