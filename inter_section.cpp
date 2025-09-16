#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m]; 
    int i=0,j=0;
    cout<<"Enter elements of first array: ";
    for(int k=0; k<n; k++){
        cin>>a[k];
    }      
    cout<<"Enter elements of second array: ";
    for(int k=0; k<m; k++){ 
        cin>>b[k];
    } 
    vector <int> c; // c will contain the union of a and b
    while (i < n && j < m) {
        if(a[i]==b[j]){
            c.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
    }
    for(int k=0; k < c.size(); k++) {
        cout << c[k] << " ";
    }
}