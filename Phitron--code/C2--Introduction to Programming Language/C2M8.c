#include<stdio.h>
int main()
{
    int arr[5]= {213,10,325,507,100};
    int max=arr[0],i;
    for(i=1; i<5; i+=1)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}

/*


//even odd counter in array
#include <stdio.h>

int main(){

    int evenarr=0, oddarr=0;
    int arr[10]={3214,546,537546,54743,435,2234,3457,3459,3454,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        if (arr[i]%2==0)
        {
            evenarr+=1;
        }
        else{
            oddarr+=1;
        }
    }
    printf("Total even Numer Is %d\n",evenarr);
    printf("Total odd Numer Is %d",oddarr);
    
    
}



 int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d ",&arr[i]);
    }
    printf("\n The Array Is");
    for (int i = 0; i < size; i++)
    {
        
        printf("%d ",arr[i]);
    }




// max and min in array
#include <stdio.h>

int main(){

    int max,min, arr[5]={345,78,2,76,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    max = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++){
        if (min>arr[i])
        {
            min = arr[i];
        }
    }

    printf("The max value is %d\n",max);
    printf("The min value is %d",min);
    
}

*/