#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int target;
    int found = 0;

    // Ask the user for the number of elements.
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Take array elements from the user.
    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ask the user for the element to search.
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Start Linear Search.
    // We check each element one by one.
    for(int i = 0; i < n; i++)
    {
        // Compare the current array element
        // with the target element.
        if(arr[i] == target)
        {
            // If they are equal, the element is found.
            printf("Element found at index %d", i);

            // Change found from 0 to 1.
            // 1 means the element has been found.
            found = 1;

            // Stop searching because we found the element.
            break;
        }
    }

    // If found is still 0, the element was not found.
    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}