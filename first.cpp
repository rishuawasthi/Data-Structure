#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int n;
    cout << "Enter the number of elements in the array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements in the array are: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
cout<<"Element For deletion ";
cin>>n;
for(int i=0;i<10;i++){
    if(arr[i]==n){  
        for(int j=i;j<9;j++){
            arr[j]=arr[j+1];
        }
        break;
    }
for (int i = 0; i < 9; i++)
{
    cout << arr[i] << " ";  
    
}
return 0;
}
}