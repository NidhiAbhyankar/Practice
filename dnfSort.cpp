#include <iostream>
using namespace std;

void swap(int arr[],int x,int y){
 int temp=arr[x];
 arr[x]=arr[y];
 arr[y]=temp;
}

void dnfSort(int arr[],int n){
 int low=0;
 int mid=0;
 int high=n-1;

 while(mid<=high){
  if(arr[mid]==0){
   swap(arr,low,mid);
   mid++;
   low++;
  }else if(arr[mid]==1){
   mid++;
  
  }else{
    swap(arr,mid,high);
     high--;
  
  }
 }
}


int main(){
 int arr[]={2,2,1,2,0,0,1};
//cout<<arr[0]<<endl;
 dnfSort(arr,7);

 for(int i=0;i<7;i++)
 cout<<arr[i]<<" ";
 cout<<endl;

}