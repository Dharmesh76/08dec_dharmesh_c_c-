#include <stdio.h>


int main()
{
    int arr[100];
    int size;
    int i, j, temp,k,l;

    
    printf("Enter size of array: ");
    scanf("%d", &size);

   
   
    for(i=0; i<size; i++)
    {   
        printf("enter elements os array[%d]",i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp   = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

     for (k = 0; k < size; k++) 
        {
            for (l = k + 1; l < size; l++) 
            {
                if (arr[k] < arr[l]) 
                {
                    temp = arr[k];
                    arr[k] = arr[l];
                    arr[l] = temp;
                }
            }
        }
          printf("elements of array i decending order : ");
 
        for (k = 0; k < size; k++) 
        {
            printf("%d ", arr[k]);
        }
     
    return 0;
}
