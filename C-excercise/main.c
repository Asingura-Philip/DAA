#include <stdio.h>
#include <stdlib.h>

/*write an algorithm to find the maximum element in an array 
	impliment the algorithm with C code
 */


/*
psuedo code
create function to check for max element
check for first element [0] in array and store value in variable
loop through array checking if stored value is bigger than next value
if next element is bigger than variable,re-assign variable to that element
otherwise continue to check next value
print out the max value

in main
check for length of array
assign length to variable
print out all elements of array
call findmax function
print max element of array

*/



int findMax(int arr[], int size) {
    int max = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int myArray[] = {2, 4, 6, 3, 7, 5};
    int length = sizeof(myArray) / sizeof(myArray[0]); 

    
    printf("The length of the array is: %d\n", length);

    
    printf("The elements of the array are: ");
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    
    int max = findMax(myArray, length);
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

