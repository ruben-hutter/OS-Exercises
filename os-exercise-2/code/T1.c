#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h> 
#include <errno.h>
#include <string.h>

#define SIZE 10000

void swap(int *xp, int *yp);
void sort(int arr[], int size);

int main ()
{
	int arr[SIZE];         
	for(int i=SIZE-1;i>=0;i--)
		if(i%2==0)
			arr[(SIZE-1)-i]=0;
		else
			arr[(SIZE-1)-i]=1;
	sortedArr = sort(arr, SIZE);

	// TODO fork another process here
	pid = fork()
	// One process should calculate the median
	if (fork == 0) {
		// child
		// calculate median value
		float median = arr[(SIZE-1)/2];
	} else {
		// parent
		// calculate mean value
		float mean = 0;
		for (int i = 0; i < SIZE-1; i++) {
			mean += arr[i];
		}
		mean /= SIZE;
	}
	// One process should communicate its value to the other process
	// The other process should print both calculated results
	printf("The child with id %d calculated a median of %f", pid, median);
	printf("The parent calculated a mean of %f", mean);


	// Hint use shm_open, ftrucate, mmap, and mumap to communicate over mapped files

	return 0;
}




void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void sort(int *arr, int size)
{
	int i, j;
	for (i = 0; i < size-1; i++)    

		// Last i elements are already in place   
		for (j = 0; j < size-i-1; j++) 
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}


