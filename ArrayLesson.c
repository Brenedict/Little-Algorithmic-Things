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
