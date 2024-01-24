//SAMPLE BINARY SEARCH
#include <stdio.h>

int main() {
    int array[10] = {0, 2, 6, 9, 24, 38, 42, 90, 101, 149};
    int j = 10;
    int MID = 0;
    int key = 0;
    
    printf("Element to Locate: ");
    scanf("%d", &key);
    
    for (int i = 0; i<=j;){
        MID = (i + j)/2;
        if (key == array[MID]) {
            printf("%d Index = %d", key, MID);
            break;
        }
        
        else if (key < array[MID]) {
            j = MID - 1;
            printf("Mid - 1\n");
        }
        
        else {
            i = MID + 1;
            printf("Mid + 1\n");
        }
    }
    
    return 0;
}

*************************************************************************************************************************************
//BUBBLE SORT
#include <stdio.h>

int main(){
	int arr[30] = {201, 200, 199, 198, 197, 196, 1001, 195, 194, 193, 1231, 123, 532, 35, 234, 745, 124, 4574, 246, 765, 143, 345, 567, 532, 197, 1, 234, 13, 345, 546};
	int temp = 0;
	
	printf("Disorganized Array: ");
	for (int i = 0;i<30;i++)
		printf("%d ", arr[i]);
		
	for(int i=0; i < 29; i++) {
		for (int j = 0; j<29;j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	}

	printf("\nOrganized Array: ");
	for (int i = 0;i<30;i++)
		printf("%d ", arr[i]);
	         
	return 0;
}

*************************************************************************************************************************************
//SELECTION SORT
#include <stdio.h>

void swap(int* pi, int *pMIN) {
	int temp = *pi;
	*pi = *pMIN;
	*pMIN = temp;
}

int main(){
	int arr[30] = {201, 200, 199, 198, 197, 196, 1001, 195, 194, 193, 1231, 123, 532, 35, 234, 745, 124, 4574, 246, 765, 143, 345, 567, 532, 197, 1, 234, 13, 345, 546};
	int MIN, i, j;
	
	printf("Disorganized Array: ");
	for (i = 0;i<30;i++)
		printf("%d ", arr[i]);
		
	for(i=0; i < 29; i++) {
		MIN = i;
		for (j = i+1; j<30;j++) 
			if (arr[j] < arr[MIN]) 
				MIN = j;
		swap(&arr[i], &arr[MIN]);
	}

	printf("\nOrganized Array: ");
	for (i = 0;i<30;i++)
		printf("%d ", arr[i]);
	         
	return 0;
}
