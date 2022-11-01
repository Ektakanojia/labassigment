#include <bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[],int start,int end,int key){
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key)
        return 1;
        if(arr[mid]<key)
        start=mid+1;
        else 
        end=mid-1;
    }
    return -1;
}
int main() {
    // Write C++ code here
   
    int arr[]={1,2,3,8,9,12,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    int target=12;
    int result= Binary_Search(arr,s,e,target);
    if(result==-1)
    cout<<"Element not present in the array"<<" ";
    else
    cout<<"Element found in the array"<<result;
    return 0;
}
