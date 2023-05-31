
/*
In this code, we have a function called linearSearch that performs a linear search on the array of items. 
It takes three parameters: the array of items, the size of the array, and the number to search for. 
The function iterates through the array and returns true if it finds the number, and false otherwise.

In the main function, we declare the necessary variables. We have an array called array_items containing
the items to search in, and we calculate the size of the array using the sizeof operator. We prompt the 
user to enter a number to search for using the printf function, and read the input using the scanf function.

We then call the linearSearch function with the appropriate arguments and store the result in the result variable.
Finally, we check the value of result and display the corresponding message to the user
*/
#include <stdio.h>
#include <stdbool.h> // Added header for bool type

// Function to perform linear search
bool linearSearch(int *array_items, int array_size, int findNumber){
    for(int i = 0; i < array_size; i++){
        if(array_items[i] == findNumber){
            return true;
        }
    }
    return false;
}

int main() {
    int n; // Variable to store the number to search
    int array_items[] = {1, 4, 3, 5, 7, 2, 9}; // Array of items
    size_t array_size = sizeof(array_items) / sizeof(array_items[0]); // Calculate the size of the array
    printf("Enter the number you want to search: ");
    scanf("%d", &n); // Read the number to search from the user

    // Call the linearSearch function and store the result
    bool result = linearSearch(array_items, array_size, n);

    // Check the result and display appropriate message
    if(result){
        printf("Your search word %d found in this items array.\n", n);
    }else{
        printf("Your search word %d not found in this items array.\n", n);
    }

    return 0; // Indicate successful program execution
}