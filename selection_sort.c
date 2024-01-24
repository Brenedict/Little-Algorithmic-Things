#include <stdio.h>

void swap(int *px, int *pbmin) {
    int temp = *px;
    *px = *pbmin;
    *pbmin = temp;
}

int main() {
    int arrSize = 0;
    printf("Enter Array Size: ");
    scanf("%d", &arrSize);
    
    if (arrSize > 0) {
        int i, a, b, bmin, arr[arrSize];
        
        //INPUT LOOP
        for(i = 0 ; i<arrSize;i++) {
            printf("Enter Number #%d: ", i+1);
            scanf("%d", &arr[i]);
        }
        
        //SELECTION SORT
        for (a=0;a<arrSize - 1;a++) {
            bmin = a;
            for(b = a + 1;b<arrSize;b++) 
                if (arr[b] < arr[bmin]) 
                    bmin = b;
            swap(&arr[a], &arr[bmin]);
        }
        
        printf("Ascending Order: { ");
        for(i=0;i<arrSize;i++) 
            printf("%d%s", arr[i],(i!=arrSize - 1)?", ":" }");
        
        
        printf("\nDescending Order: { ");
        for(i=arrSize - 1;i>=0;i--) 
            printf("%d%s", arr[i],(i!=0)?", ":" }");
        
    }
    
    else
        printf("INVALID");
        
    return 0;
}
