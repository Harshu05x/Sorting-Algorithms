#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
                   
int main()
{
    vector <int> arr{9,4,4,10,18,19,12,11,34,20};
    sort(arr.begin(),arr.end());

    cout<<"arr -->"<<endl;
    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";

    int brr[] = {9,4,4,10,18,19,12,11,34,20};
    int n = sizeof(brr) / sizeof(brr[0]);
    sort(brr,brr+n);

    cout<<endl<<"brr -->"<<endl;
    for(int i = 0; i < n; i++)
        cout<<brr[i]<<" ";
        
    return 0;
}