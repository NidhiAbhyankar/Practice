#include <bits/stdc++.h>
using namespace std;


//BinaryToDecimal

int BinaryToDecimal(int n){
 int ans=0;
 int x=1;
 while(n>0){
  int y=n%10;
  ans+=x*y;
  x*=2;
  n/=10;
 }
 return ans;
}


//OctalToDecimal

int OctalToDecimal(int n){
 int ans=0;
 int x=1;
 while(n>0){
  int y=n%10;
  ans+=x*y;
  x*=8;
  n/=10;
 }
 return ans;
}

//HexadecimalToDecimal

int HexadecimalToDecimal(string m){
 int ans=0;
 int x=1;
 int s=m.size();
 for(int i=s-1;i>=0;i--){
  if(m[i]>='0' && m[i]<='9'){
   ans+=x*(m[i]-'0');
  }
  else if(m[i]>='A' && m[i]<='F'){
   ans+=x*(m[i]-'A'+10);
  }
  x*=16;
 }
 return ans;
}

//DecimalToBinary

int DecimalToBinary(int n){
 int ans=0;
 int x=1;
 while(x<=n){
  x*=2;
 }
 x/=2;

while(x>0){
 int lastDigit=n/x;
 n-=lastDigit*x;
 x/=2;
 ans=ans*10+lastDigit;
}
return ans;
}


int main(){
  int n;
 // string m;
 cin>>n;
 // cout<<BinaryToDecimal(n);
 // cout<<OctalToDecimal(n);
 // cout<<HexadecimalToDecimal(m);
 cout<<DecimalToBinary(n);
 
}