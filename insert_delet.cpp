#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int arr[n + 1];
    cout << "enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos,element;
    cout<<"Enter thr position of the element to be inserted";
    cin>>pos>>element;
    if (pos<0||pos>n)
    {
        cout<<"invalid position";
    }
    else{
        for(int i=n;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=element;
        n++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"position to be deleted";
    cin>>pos;
    if(pos<0||pos>=n)
    {
        cout<<"invaliid position";
    }
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
}
    return 0;
}