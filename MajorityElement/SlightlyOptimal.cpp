#include<iostream>
#include<vector>
#include<algorithm>//to use sort()
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
    //logic(O(nlog n))
    //sort the array and count if frequency>n/2
    sort(array.begin(),array.end());
    int frequency=1,ans=array[0];
    for(int i=1;i<size;i++){
        if(array[i]==array[i-1]){
            frequency++;
        }
        else{
            frequency=1;
            ans=array[i];
        }
        if(frequency>size/2){
            cout<<ans<<" has the highest frequency";
            break; 
        }
    }
    return 0;
}