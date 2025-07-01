//Given a target, find a pair of numbers from an array such that its sum = target also the target always exist
#include <iostream>
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
    
    return 0;
}