#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
//插入排序
/*int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 1;i<n;i++)
    {
        int key = arr[i];
        int j;
        for(j = i-1;j>=0;j--){
            if(arr[j] > key)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = key;
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/
//桶排序
/*int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = 0;
    int min = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i] < max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    int k = 100;
    int bucketnum = (max-min)/k +1;
    int buckets[bucketnum][100];
    int bucketsize[bucketnum];
    for(int i = 0;i<bucketnum;i++)
    {
        bucketsize[i] = 0;
    }
    for(int i = 0;i<n;i++)
    {
        int b =(arr[i] - min)/k;
        int size = bucketsize[b];
        buckets[b][size] = arr[i];
        bucketsize[b]++;
    }
    for(int i = 0;i<bucketnum;i++)
    {
        if(bucketsize[i] > 0)
        {
            int size = bucketsize[i];
            for(int j = size-1;j >=0;j--)
            {
                for(int k = 0;k<=j;k++)
                {
                    if(buckets[i][k-1] > buckets[i][k])
                    {
                        int t = buckets[i][k-1];
                        buckets[i][k-1] = buckets[i][k];
                        buckets[i][k] = t;
                    }
                }
            }
        }
    }
    int result[10];
    int index = 0;
    for(int i = 0;i<bucketnum;i++)
    {
        if(bucketsize[i] > 0)
        {
            for(int j = 0;j<bucketsize[i];j++)
                {
                    result[index] = buckets[i][j];
                    index++;
                }

        }
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d ",result[i]);
    }
    return 0;
}*/

int main()
{
    return 0;
}





