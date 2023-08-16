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
vector<int> selection_sort(vector<int>& arr){
    int n = arr,suze();
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[min] > arr[j]) 
                min = j;
        }
        swap(arr[i],arr[min]);
    }
    return arr;
}
                   
int main()
{
    vector <int> arr{9,4,4,10,18,19,12,11,34,20};
    cout<<"Sorted array-->"<<endl;
    selection_sort(arr);
    print(arr);
    
    return 0;
}