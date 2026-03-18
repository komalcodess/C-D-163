#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,pair=0;
    printf("enter the value: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
            pair++;
            printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("total pairs: %d",pair);
}