#include <stdio.h>
// stdio.h means Standard Input Output Header.
// We include it because we want to use printf() and scanf().

int main()
{
    // This is the main function.
    // Every C program starts executing from the main() function.

    int arr[] = {10, 25, 7, 40, 15};
    // We create an integer array.
    // Our array is: [10, 25, 7, 40, 15]
    // The indexes are:  0   1  2   3   4

    int n = 5;
    // n stores the number of elements in the array.
    // Our array contains 5 elements, so n = 5.

    int target = 40;
    // target is the element that we want to search for.
    // Here, we are searching for 40.

    int found = 0;
    // found is a flag variable.
    // Initially found = 0 means the element is NOT FOUND.
    // If we find the element, we will change found to 1.

    for(int i = 0; i < n; i++)
    {
        // The loop starts from index 0.
        // i = 0 means we start checking the first element.
        //
        // i < n means the loop will continue while i is less than 5.
        // Therefore, i will be: 0, 1, 2, 3, 4.
        //
        // i++ increases i by 1 after every iteration.
        // So: 0 → 1 → 2 → 3 → 4

        if(arr[i] == target)
        {
            // arr[i] represents the current element of the array.
            //
            // We compare the current element with the target.
            //
            // Example:
            // i = 0 → arr[0] = 10
            // 10 == 40 → False
            //
            // i = 1 → arr[1] = 25
            // 25 == 40 → False
            //
            // i = 3 → arr[3] = 40
            // 40 == 40 → True
            //
            // Therefore, the element is found.

            printf("Element found at index %d", i);
            // printf() displays the result.
            // When i = 3, the output will be:
            // Element found at index 3

            found = 1;
            // We change found from 0 to 1.
            // 1 means that the element has been FOUND.

            break;
            // break immediately stops the loop.
            // There is no need to search further because
            // we have already found the target.
        }
    }

    if(found == 0)
    {
        // If found is still 0, the target was not found
        // anywhere in the array.

        printf("Element not found");
        // Display "Element not found".
    }

    return 0;
    // return 0 means the program finished successfully.
}