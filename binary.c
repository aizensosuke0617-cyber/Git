#include <stdio.h>
// stdio.h means Standard Input Output Header.
// We include it because we want to use printf() and scanf().

int main()
{
    // This is the main function.
    // Every C program starts executing from the main() function.

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // We create a sorted integer array.
    // Our array is:
    // [10, 20, 30, 40, 50, 60, 70]
    //
    // The indexes are:
    //  0   1   2   3   4   5   6

    int n = 7;
    // n stores the number of elements in the array.
    // Our array contains 7 elements, so n = 7.

    int target = 60;
    // target is the element that we want to search for.
    // Here, we are searching for 60.

    int low = 0;
    // low represents the starting index of the
    // portion of the array that we are currently searching.
    //
    // Initially, we search from the first element,
    // so low = 0.

    int high = n - 1;
    // high represents the ending index of the
    // portion of the array that we are currently searching.
    //
    // n = 7
    // Therefore:
    // high = 7 - 1
    // high = 6
    //
    // The last index of the array is 6.

    int found = 0;
    // found is a flag variable.
    // Initially found = 0 means the element is NOT FOUND.
    // If we find the element, we change found to 1.

    while(low <= high)
    {
        // The loop continues as long as the search area exists.
        //
        // If low <= high:
        // There are still elements that we can search.
        //
        // If low > high:
        // There are no elements left to search.

        int mid = (low + high) / 2;
        // mid represents the middle index of the current search area.
        //
        // Initially:
        // low = 0
        // high = 6
        //
        // mid = (0 + 6) / 2
        // mid = 3
        //
        // Therefore arr[mid] = arr[3] = 40.

        if(arr[mid] == target)
        {
            // We compare the middle element with the target.
            //
            // If they are equal, the target has been found.

            printf("Element found at index %d", mid);
            // Display the index where the target was found.

            found = 1;
            // Change found from 0 to 1.
            // 1 means that the element has been FOUND.

            break;
            // Stop the loop because we have found the element.
        }

        else if(target > arr[mid])
        {
            // If the target is greater than the middle element,
            // the target must be on the RIGHT side.
            //
            // Example:
            // target = 60
            // arr[mid] = 40
            //
            // 60 > 40
            // Therefore, search the right half.

            low = mid + 1;
            // Move low to the element immediately after mid.
            //
            // If mid = 3:
            // low = 3 + 1
            // low = 4
            //
            // Now we search from index 4 onward.
        }

        else
        {
            // If the target is smaller than the middle element,
            // the target must be on the LEFT side.

            high = mid - 1;
            // Move high to the element immediately before mid.
            //
            // If mid = 3:
            // high = 3 - 1
            // high = 2
            //
            // Now we search only the left side.
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