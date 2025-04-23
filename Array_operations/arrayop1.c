#include <stdio.h>

#define MAX_SIZE 100

void insertArray(int arr[], int *size) {
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", size);
    if (*size > MAX_SIZE) {
        printf("Size exceeds maximum limit. Setting to %d.\n", MAX_SIZE);
        *size = MAX_SIZE;
    }
    printf("Enter %d elements:\n", *size);
    for (int i = 0; i < *size; i++) {
        scanf("%d", &arr[i]);
    }
}

void updateArray(int arr[], int size) {
    int choice, index, value;
    printf("1. Update by value\n2. Update by index\nEnter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        int oldVal, newVal;
        printf("Enter value to replace: ");
        scanf("%d", &oldVal);
        printf("Enter new value: ");
        scanf("%d", &newVal);
        for (int i = 0; i < size; i++) {
            if (arr[i] == oldVal) {
                arr[i] = newVal;
            }
        }
    } else if (choice == 2) {
        printf("Enter index to update (0 to %d): ", size - 1);
        scanf("%d", &index);
        if (index >= 0 && index < size) {
            printf("Enter new value: ");
            scanf("%d", &value);
            arr[index] = value;
        } else {
            printf("Invalid index!\n");
        }
    } else {
        printf("Invalid choice!\n");
    }
}

void deleteElement(int arr[], int *size) {
    int value, found = 0;
    printf("Enter element to delete: ");
    scanf("%d", &value);
    
    for (int i = 0; i < *size; i++) {
        if (arr[i] == value) {
            found = 1;
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            i--;
        }
    }
    if (!found) {
        printf("Element not found!\n");
    }
}

void sortArray(int arr[], int size) {
    int choice, temp;
    printf("1. Ascending\n2. Descending\nEnter your choice: ");
    scanf("%d", &choice);
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (choice == 1) { 
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else if (choice == 2) {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

void searchArray(int arr[], int size) {
    int choice, value, index, found = 0;
    printf("1. Search index of a value\n2. Search value at an index\nEnter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter value to search: ");
        scanf("%d", &value);
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                printf("Value %d found at index %d\n", value, i);
                found = 1;
            }
        }
        if (found==0) {
            printf("Value %d not found in the array!\n", value);
        }
    } else if (choice == 2) {
        printf("Enter index to search (0 to %d): ", size - 1);
        scanf("%d", &index);
        if (index >= 0 && index < size) {
            printf("Value at index %d is %d\n", index, arr[index]);
        } else {
            printf("Invalid index!\n");
        }
    } else {
        printf("Invalid choice!\n");
    }
}

void displayArray(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE], size = 0, choice;
    
    while (1) {
        printf("\nEnter the number you want to operate\n");
        printf("1. Insert\n2. Update_Value\n3. Delete\n4. Sort\n5. Search\n6. Display\n7. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insertArray(arr, &size);
                break;
            case 2:
                if (size == 0) {
                    printf("Array is empty! Insert elements first.\n");
                } else {
                    updateArray(arr, size);
                }
                break;
            case 3:
                if (size == 0) {
                    printf("Array is empty! Insert elements first.\n");
                } else {
                    deleteElement(arr, &size);
                }
                break;
            case 4:
                if (size == 0) {
                    printf("Array is empty! Insert elements first.\n");
                } else {
                    sortArray(arr, size);
                    printf("Array sorted!\n");
                }
                break;
            case 5:
                if (size == 0) {
                    printf("Array is empty! Insert elements first.\n");
                } else {
                    searchArray(arr, size);
                }
                break;
            case 6:
                displayArray(arr, size);
                break;
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
