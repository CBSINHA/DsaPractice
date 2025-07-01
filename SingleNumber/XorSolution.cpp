//Find the number among the array of numbers which is not repeated, every other number is repeated twice
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
    //logic(O(n)): Xor (^) all the numbers 
    /*      A   B   Out
            0   0   0
            0   1   1
            1   0   1
            1   1   0
    */
   // same numbers will cancel out Ex: 3^3 (011^011=000)
   int result=0;
   for(int i:array){
    result^=i;
   }
   cout<<"The number which is not repeated is: "<<result;
}