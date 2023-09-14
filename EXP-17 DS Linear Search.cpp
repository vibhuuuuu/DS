#include <stdio.h>
int LinearSearch(int arr[], int target, int Length)
{
    int i;
    for(i=0;i<Length; i++)
    {
        if (target == arr[i])
            return (i + 1);
    }
    return -1;
}
int main()
{
    int elements_count;
    int n, result;
    //Create an array and initialize it 
    int search_list[] = { 3, 1, 9, 8, 7, 12, 56, 23, 89 };
    elements_count=sizeof(search_list)/sizeof(int);
    
    //Read the target value to search
    printf("Enter a value to search: ");
    scanf("%d", &n);
    result = LinearSearch(search_list, n, elements_count);
    if (n != -1)
        printf("The target value %d is found at position %d", n, result);
    else
        printf("Target not found!");
    return 0;
}
