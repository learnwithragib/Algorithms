#include <bits/stdc++.h>{
using namespace std;
void bubble_sort(int n,int arr[]){
   for(int i=0;i<n;i++){
    bool flag=false;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
        /*int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        */
        flag=true;
    }
    }
    if(flag!=false){
        break;

   }
   }


}
void print_arr(int n,int arr[]){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }}
int main(){
   int arr[]={2,3,4,5,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   bubble_sort(n,arr);
   print_arr(n,arr);
   return 0;
}
