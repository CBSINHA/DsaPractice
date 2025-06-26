//Use 3 loops to find the maximum subarray sum of given subarray(O(n^3))
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>array;
    int size;
    cout<<"Enter the number of elements in the array: ";
    cin>>size;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        array.push_back(x);
    }
    
    return 0;
}