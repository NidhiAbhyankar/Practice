#include <iostream>
using namespace std;
int main(){
	int n;
	int arrSize,pos;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arrSize>>pos;
		int arr[arrSize+1];
  // for(int j=0;j<=arrSize;j++)
  //  arr[j]=0;
		for(int j=0;j<arrSize;j++)
			cin>>arr[j];
		while(pos>0){
			for(int k=arrSize-1;k>=0;k--){
				arr[k+1]=arr[k];
			}
			arr[0]=arr[arrSize];
			pos--;
		}
		for(int j=0;j<arrSize;j++)
			cout<<arr[j];
	}
}