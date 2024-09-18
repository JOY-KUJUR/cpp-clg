#include <stdio.h>

void removeDuplicates(int arr[], int size) {
    int temp[100]; // Temporary array to hold unique elements
    int j = 0;
int i,k;
    for ( i = 0; i < size; i++) {
        int isDuplicate = 0;

        // Check if the current element is a duplicate
        for ( k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, add to temp array
        if (!isDuplicate) {
            temp[j] = arr[i];
            j++;
        }
    }

    // Copy unique elements back to original array
    for ( i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    // Print the modified array
    printf("Array after removing duplicates: ");
    for ( i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5, 1};
    int s=sizeof(arr);
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<size;i++){
    	printf("%d ",arr[i]);
	}
	printf("\n");
    removeDuplicates(arr, size);

    return 0;
}

