#include <stdio.h>

int binarySearch(int array[], int start, int end, int key) {
	int mid;

	if (start <= end) {
		mid = (start + (end - start) /2);
		if (array[mid] == key)
			return mid;
		if (array[mid] > key)
			return binarySearch(array, start, mid-1, key);
		return binarySearch(array, mid+1, end, key);
	}
	return -1;
}


int exponentialSearch(int array[], int start, int end, int key) {
	int i;

	if ((end - start) <= 0)
		return -1;
	i = 1;
	while (i < (end - start)) {
		if (array[i] < key)
			i *= 2;
		else
			break;
	}
	return binarySearch(array, i/2, i, key);
}


int main(){
	int n, searchKey, loc;

	printf("Enter number of items: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter items: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	printf("Enter search key to search in the list: ");
	scanf("%d", &searchKey);

	if ((loc = exponentialSearch(array, 0, n, searchKey)) >= 0)
		printf("Item found at location: %d\n", loc);
	else
		printf("Item not found in the list\n");
	
	return 0;
}