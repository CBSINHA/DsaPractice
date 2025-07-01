//Given a target, find a pair of numbers from a SORTED array such that its sum = target also the target always exist
#include <iostream>
#include <vector>
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
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    //logic (O(n))
    // Since the array is SORTED, we know the first and last elements will be smallest and greatest respectively
    //we take the sum of first and last element and see:
    // if sum == target then those indices are the answer 
    //else if sum< target: we need to add a greater number in the sum and since nothing is greater than the last element of the array we add the 2nd element(2nd element> 1st)
    //else if sum>target: we added a larger number and have to reduce it so we move on the 2nd last element(smaller frm last element)
    int i=0, j=size-1;
    while(i<j){
        int sum;
        sum=array.at(i)+array.at(j);
        if(sum==target){cout<< i<< ","<<j;break;}
        else if(sum<target)i++;
        else j--;
    }
    return 0;
}