#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}


// Total Rounds = n-1
// T.C. = O(n^2)-worst and avg case , O(n)-best case
// S.C. = O(1)
// It's a stable and adaptive algo.
vector<int> insertion_sort(vector<int>& arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        // Step 1 - Fetch
        int temp = arr[i];
        int j = i - 1;
        // Step 2 - Compare
        for(;j >= 0 && temp < arr[j];j--){
            // Step 3 - Shift
            arr[j+1] = arr[j];
        }
        // Step 4 - Copy
        arr[j+1] = temp;
    }
    return arr;
}
                   
int main()
{
    vector <int> arr{9,4,4,10,18,19,12,11,34,20};
    cout<<"Sorted array-->"<<endl;
    insertion_sort(arr);
    print(arr);
    
    return 0;
}