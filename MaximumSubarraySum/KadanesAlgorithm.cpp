//Uses only 1 loop and has (O(n)) time complexity
#include<iostream>
#include<vector>
using namespace std;
int main(){
    //input
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
    //logic
    int sum=0;
    int maximum=INT_MIN;
    for(int i:array){
        sum+=i;
        maximum=max(sum,maximum);
        if(sum<0)sum=0;
    }
    cout<<"Maximum subarray sum using Kadane's Algorithm: "<<maximum;
    return 0;
}