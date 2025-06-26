//Use 2 loops to find the maximum subarray sum of given subarray(O(n^2))
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
    int maximum=INT_MIN;
    for(int i=0;i<size;i++){
     int sum=0;
     for(int j=i;j<size;j++){
        sum+=array[j];
        maximum=max(sum,maximum);
     }
    }
    cout<<"Maximum subarray sum= "<<maximum;
    return 0;
}