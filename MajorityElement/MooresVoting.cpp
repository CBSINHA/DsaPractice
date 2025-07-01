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
    //logic(O(n))
    //same element: freq++
    //different element: freq--
    //when freq==0 then ans= that element
    //the majority element has max frequency so it will always be the ans(freq+ > freq-)
    int frequency=0,ans=0;
    for(int i=0;i<size;i++){
        if(frequency==0){
            ans=array[i];
        }
        if(ans==array[i]) frequency++;
        else frequency--;
    }

    // optional; to check for if the element really has frequency > n/2
    int count=0;
    for(int i=0;i<size;i++){
        if(array[i]==ans)count++;
    }
    if(count>size/2){
        cout<< ans<<" has the highest frequency in the array";
    }
    else cout<< "None of the elements had frequency > size/2";
    return 0;
}