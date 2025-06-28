#include<stdio.h>
void sort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, i, k, l, m, count = 0;
        scanf("%d", &n);
        int arr[n];
        for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, n);
        for(k = 0; k < n - 2; k++)
        {
            for(l = k + 1; l < n - 1; l++)
            {
                for(m = l + 1; m < n; m++)
                {
                    int a = arr[k], b = arr[l], c = arr[m];
                    int total = a + b + c;

                    if((a + b > c) && (a + c > b) && (b + c > a) && (total > arr[n - 1]))
                    {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count); 
    }
    return 0;
}

