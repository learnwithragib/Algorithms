#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n);
int main(){
    int n;
    cout<<"Enter Element:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    selection_sort(arr,n);

    return 0;
}


void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            
        }
        if(min!=i){
                int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;}
            
    }
            for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}
