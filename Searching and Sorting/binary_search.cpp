#include <bits/stdc++.h>
using namespace std;
int binary_search(int n,int arr[],int data){
int l,r,mid;
l=0;
r=n-1;
while(l<=r){
    mid=l+(r-l)/2;
    if(data==arr[mid]){
        return mid;
    }
    else if(data>arr[mid]){
        l=mid+1;
    }
    else{
        r=mid-1;
    }

}
return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    int data;
    cout<<"Enter the number u want to seach:";
    cin>>data;
    int result = binary_search(n,arr,data);
    if(result!=-1){
        cout<<"Data Found in index "<<result;
    }
    else{
        cout<<"Data Not Found\n";
    }
    return 0;

}
