#include <stdio.h>
#include <stdlib.h>

/*write an algorithm to find the maximum element in an array 
	impliment the algorith with C code
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
int main() {
	
	int myArray[] = {2,4,6,3,7,5};
	int length = sizeof(myArray) / sizeof(myArray[0]);
 	printf(length);
    //printf("The length of the array is: %d\n", length);
    int i;
    for(i=0;i<length;i++){
    	printf(myArray[i]);
	};
	
	return 0;
}
