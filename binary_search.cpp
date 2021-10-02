#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> a,int n,int key)
{
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return true;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return false;
}
int main()
{
    int n,i,j,key;
    bool found;
    vector<int> a;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the elements of the array\n";
    for(i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
    }
    cout<<"Enter the value to be searched in the array\n";
    cin>>key;
    sort(a.begin(),a.end());
    if(binarySearch(a,n,key)==true)
    {
        cout<<"Found the element"<<"\n";
    }
    else{
        cout<<"Not Found"<<"\n";
    }
}
