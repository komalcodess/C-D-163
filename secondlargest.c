#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    int pro=1;
    printf("Enter all the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int secmax=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>secmax && arr[i]!=max)
            secmax=arr[i];
    }
    printf("The second maximum element is: %d", secmax);
}