#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";

    }

}
int main()
{
    int arr[]={3,56,12,9,1};
    int N=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Insertion"<<"\n";
    printarr(arr,N);
    insertion(arr,N);
    cout<<"After inserton"<<"\n";
    printarr(arr,N);
    return 0;


}