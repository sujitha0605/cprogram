#include<stdio.h>
#include<stdlib.h>
void printarray(int arr[],int n)
{
    int temp;
    int i;
    for(i=0;i<n;i++)
    {
       printf("%d",arr[i]);
    }
}
void insertionsort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    printf("enter number of elements");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("unsorted array");
    printarray(arr,n);
    insertionsort(arr,n);
    printf("sorted array");
    printarray(arr,n);
    return 0;
}
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);
        
        int arr[n];
        long long prefix[n + 1]; // prefix[i] stores sum of first i elements
        prefix[0] = 0;
        long long total_sum = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            total_sum += arr[i];
            prefix[i + 1] = prefix[i] + arr[i];
        }
        
        while (q--) {
            int l, r, k;
            scanf("%d %d %d", &l, &r, &k);
            
            // sum of the segment to be replaced
            long long old_segment_sum = prefix[r] - prefix[l - 1];
            long long new_segment_sum = (long long)(r - l + 1) * k;
            long long new_total = total_sum - old_segment_sum + new_segment_sum;
            
            if (new_total % 2 == 0)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    
    return 0;
}
