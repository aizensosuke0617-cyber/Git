#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int target;
    int low, high, mid;
    int found = 0;

    // Ask the user for the number of elements.
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Take sorted array elements from the user.
    printf("Enter %d elements in sorted order:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ask the user for the element to search.
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Initially, our search starts from the first index.
    low = 0;

    // The last index is n - 1.
    high = n - 1;

    // Continue searching while a valid search area exists.
    while(low <= high)
    {
        // Find the middle index.
        mid = (low + high) / 2;

        // Check whether the middle element is the target.
        if(arr[mid] == target)
        {
            // Target has been found.
            printf("Element found at index %d", mid);

            // Change found to 1.
            found = 1;

            // Stop searching.
            break;
        }

        // If target is greater than the middle element,
        // search the right half.
        else if(target > arr[mid])
        {
            low = mid + 1;
        }

        // If target is smaller than the middle element,
        // search the left half.
        else
        {
            high = mid - 1;
        }
    }

    // If the element was not found.
    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}