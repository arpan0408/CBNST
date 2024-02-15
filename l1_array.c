#include<stdio.h>
#define max 100

void even(int[],int);
void odd(int[],int);

void main()
{
    int arr[max],n;

    printf("Enter the size of array = ");
    scanf("%d",&n);

    printf("Enter the values = ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    even(arr,n);
    odd(arr,n);
}

void even(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sum+=arr[i];
    }
    printf("\nSum of even no. = %d",sum);
}


void odd(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        sum+=arr[i];
    }
    printf("\nSum of odd no. = %d",sum);
}