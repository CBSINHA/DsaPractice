//We have to find the element which exists more than(int)size/2 in the array.
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
    //logic(O(n^2))
    //count the element with fequency >n/2
    for(int i=0;i<size;i++){
        int frequency=0;
        for(int j=0;j<size;j++){
            if(array[i]==array[j]) frequency++;
            
        }
        if(frequency>size/2){cout<<array[i];break;}
    }
    return 0;
}