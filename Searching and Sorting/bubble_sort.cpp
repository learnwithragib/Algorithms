#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
         if(flag==false){
            break;
        }
    }
}

void print_array(int arr[],int n){
 for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
 }
}

int main(){
    int n;
    cout<<"Enter No:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    print_array(arr,n);
    return 0;
}
