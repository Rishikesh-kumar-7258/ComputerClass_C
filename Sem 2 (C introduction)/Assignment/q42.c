/* Calculate the average of 5 numbers in an array */

#include <stdio.h>

int main() {
	
	int arr[] = {1, 2, 3, 4 , 5};
	
	double average = 0;
	
	for (int i =0; i < 5; i++) average += arr[i];
	
	printf("The average of 5 numbers is %lf", average/5.0);  
	
	return 0;
}