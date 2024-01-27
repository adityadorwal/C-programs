#include<stdio.h>
// Inputing Elements Of the Array
int* input(int arr[],int size)
{
    printf("Enter the Elements of the Array:-\n");
    for(int i=0;i<size;i++)
    {
        printf("-> ");
        scanf("%d",&arr[i]);
    }
    return(arr);
}
// Binary Search
int Binary(int arr[],int size,int search)
{
    int mid,start=0,end=size-1;
    while(end>=start)
    {
        mid=(start+end)/2;
        if(arr[mid]==search)
        {
            return(1);
        }
        else if(arr[mid]<search)
        {
            start=mid+1;
        }
        else
        {
            end=end-1;
        }
    }
    return(0);
}
//Main Program
int main()
{
    printf("Enter the Size Of the Array:- ");
    int size,*ptr;
    scanf("%d",&size);

    int arr[size],search;
    ptr=input(arr,size);

    printf("Enter the element to search in the Array:- ");
    scanf("%d",&search);

    if(Binary(ptr,size,search))
    {
        printf("Element found in the array");
        return(0);
    }
    printf("Element is not present in the array");
    return(0);
}