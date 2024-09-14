#include <stdio.h>
#include <stdlib.h>

/*write an algorithm to find the maximum element in an array 
	impliment the algorithm with C code
 */


/*
psuedo code
get array
loop through the elements in an array 
assign first element to variable
if next element is bigger than variable,re-assign variable to that element
if its smaller, check the next element
print out the variable


*/
//int main() {
//	
//	int myArray[] = {2,4,6,3,7,5};
//	int length = sizeof(myArray) / sizeof(myArray[0]);
// 	printf("%d",length);
// 	int val = length
//    printf("The length of the array is: %d\n", length);
//    int i;
//    for(i=0;i<length;i++){
//    	printf(myArray[i]);
//	};
//	
//	return 0;
//}
#include <stdio.h>

// Function to find the maximum element in an array
int findMax(int arr[], int size) {
    int max = arr[0]; // Initialize max to the first element
    int i;
    for (i = 1; i < size; i++) { // Start from the second element
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }
    return max;
}

int main() {
    int myArray[] = {2, 4, 6, 3, 7, 5};
    int length = sizeof(myArray) / sizeof(myArray[0]); // Calculate the length of the array

    // Print the length of the array
    printf("The length of the array is: %d\n", length);

    // Print the elements of the array
    printf("The elements of the array are: ");
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n"); // Move to the next line after printing all elements

    // Find and print the maximum element in the array
    int max = findMax(myArray, length);
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

