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
//Selection Sorting
int* selection(int arr[],int size)
{
    int i,j,min,temp;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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

    selection( ptr, size);
    printf("Sorted Array:-\n");
    Display(ptr,size);

    return(0);
}








    
