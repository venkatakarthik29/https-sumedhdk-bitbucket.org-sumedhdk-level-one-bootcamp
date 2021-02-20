//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

int IntputLimit();
int* ReadArray();
int CalculateSum();
void DisplaySum();


int main()
{
    int n,sum=0;
    n=IntputLimit();
    int arr[n];
    int* ptr=ReadArray(n,arr);
    sum=CalculateSum(n,ptr);
    DisplaySum(sum);   
}


int IntputLimit()
{
    int n;
    printf("Enter the input limit : ");
    scanf("%d",&n);
    return n;
}

int* ReadArray(int n,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element : ",i);
        scanf("%d",&arr[i]);
        
    }
    return arr;
}

int CalculateSum(int n,int *ptr)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + *(ptr+i);
    }
    return sum;
}

void DisplaySum(int sum)
{
    printf("sum of the given numbers is : %d",sum);
}
