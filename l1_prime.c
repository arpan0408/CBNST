#include <stdio.h>
#define max 100

void prime(int[], int);

void main()
{
    int arr[max], n;
    printf("Enter the size of array = ");
    scanf("%d", &n);

    printf("Enter the values = ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    prime(arr, n);
}

void prime(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
                break;
        }
        if (j == arr[i])
            printf("\nPrime no. = %d", arr[i]);
    }
}