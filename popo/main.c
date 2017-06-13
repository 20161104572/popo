#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int arr[10]={1,2,3,5,7,8,9,4,2,1};
    for(j=0;j<9;j++)
    {
        for(i=0;i<9-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    system("pause");
    return 0;
}
