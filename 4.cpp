#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int n=5;
    int arr[5] ={4,2,3,5,1};
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j]<arr[j+1]) swap(&arr[j] , &arr[j+1]);
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// Output os 

5 4 3 2 1