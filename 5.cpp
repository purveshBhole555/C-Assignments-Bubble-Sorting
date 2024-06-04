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
    int n=5,k=0;
    int arr[5] ={4,2,3,5,1};
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j]<arr[j+1]) 
            {
            swap(&arr[j] , &arr[j+1]);
            k++;
        }
        }
    }
    cout<<k<<endl;
    if(k==1 || k==2) cout<<"Almost"<<endl;
    else cout<<"NO";

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


// Output i s 

4
NO5 4 3 2 1