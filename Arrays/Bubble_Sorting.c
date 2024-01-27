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
// Bubble Sorting
int* Bubble (int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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

    Bubble( ptr, size);
    printf("Sorted Array:-\n");
    Display(ptr,size);

    return(0);
}








    