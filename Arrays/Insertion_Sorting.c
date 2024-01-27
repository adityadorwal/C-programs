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
//Insertion Sorting
int* Insertion(int arr[],int size)
{
    int i,j,key,temp;
    for(i=1;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    return(arr);
}
// Display of the Array
void Display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//Main Program
int main()
{
    printf("Enter the Size Of the Array:- ");
    int size,*ptr;
    scanf("%d",&size);

    int arr[size];
    ptr=input(arr,size);

    printf("Unsorted Array:-\n");
    Display(ptr,size);

    Insertion( ptr, size);
    printf("Sorted Array:-\n");
    Display(ptr,size);

    return(0);
}








    