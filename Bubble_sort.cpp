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
vector<int> bubble_sort(vector<int>& arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        bool isSwapped = false; 
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped) break;
    }
    return arr;
}
                  
int main()
{
    vector <int> arr{9,4,4,10,18,19,12,11,34,20};
    cout<<"Sorted array-->"<<endl;
    bubble_sort(arr);
    print(arr);
    
    return 0;
}
