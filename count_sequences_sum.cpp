//Count no. of subsequences with sum K
#include<bits/stdc++.h>
using namespace std;
int count_subsequences(int ind, int arr[], int S, int n, int sum)
{
    if(ind == n)
    {
        if(S == sum)
        {
            return 1;
        }
        return 0;
    }
    S += arr[ind];
    int l = count_subsequences(ind+1, arr, S, n, sum);
    S -= arr[ind];
    int r = count_subsequences(ind+1, arr, S, n, sum);
    return l+r;
}
int main()
{
    int n, S=0;
    cout<<"Enter length and elements of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter sum: ";
    cin>>sum;
    cout<<count_subsequences(0, arr, S, n, sum);
}