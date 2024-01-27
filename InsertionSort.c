#include <stdio.h>

int main() {
	int N = 20;
	int arr[N] = {102, 135, 234, 756, 2, 876, 3, 8, 546, 543, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i, j, key;
	
	printf("Unsorted Array: { ");
    for(int x = 0;x<N;x++) {
    	printf("%d%s", arr[x], (x!=N-1)?", ":" }");
	}
	
	for (i = 1;i<N;i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j --;
		}
		arr[j + 1] = key;
	}
	printf("\nSorted Array: { ");
    for(int x = 0;x<N;x++) {
    	printf("%d%s", arr[x], (x!=N-1)?", ":" }");
	}

	return 0;
}
