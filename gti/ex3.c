
void getData(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int sum(int arr[], int a,int b)
{
    if(a>b)
        return 0;
    return arr[a] + sum(arr,a+1,b);
}

void printData(int arr[], int a, int b)
{
    if(a==b)
        printf("%d", arr[a]);
    else
    {
        printf("%d ", arr[a]);
        printData(arr,a+1,b);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int a, b;
    scanf("%d %d", &a, &b);
    getData(arr,n);
    int s = sum(arr,a-1,b-1);
    printf("%d\n", s);
    printData(arr,a-1,b-1);
    return 0;
}