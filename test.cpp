#include <iostream>
using namespace std;

//factorial
// int factorial(int n){
//  int fact=1;
//  for(int i=2;i<=n;i++){
//   fact*=i;
//  }
//  return fact;
// }


//fibonacci
// void fibonacci(int n){
//  int term1=0;
//  int term2=1;
//  int nextTerm;
//  for(int i=1;i<=n;i++){
//   cout<<term1<<" ";
  
//   nextTerm=term1+term2;
//   term1=term2;
//   term2=nextTerm;
//  }
// }

//pascal Triangle
// void pascalTriangle(int n){
//  for(int i=0;i<n;i++){
//   for(int j=0;j<=i;j++){
//    int pascal=factorial(i)/(factorial(i-j)*factorial(j));
//    cout<<pascal<<" ";
//   }
//   cout<<endl;
//  }
// }


//Sum using recurrsion
// int sumRecurrsion(int n){
//  if(n==1)
//   return 1;
//  int sum=sumRecurrsion(n-1);
//  return n+sum;
// }

//power of a number using recurrsion
// int powerRecurrsion(int n,int p){
//  if(p==0)
//  return 1;
//  int power=powerRecurrsion(n,p-1);
//  return n*power;
// } 


//prime no using sieve of eratosthenes
// void primeNo(int n){
//  int arr[100]={0};
 
//  for(int i=2;i<=n;i++){
  
//     if(arr[i]==0){
//      for(int j=i*i;j<=n;j+=i){
//       arr[j]=1;
//      }
//     }
    
//  }
//  for(int i=2;i<=n;i++){
//   if(!arr[i])
//    cout<<i<<" ";
//  }
 
// }

//prime factors of a number
// void primeFactor(int n){
//  int arr[100]={0};
//  for(int i=2;i<=n;i++)
//   arr[i]=i;

//  for(int i=2;i<=n;i++){
//   if(arr[i]==i){
//    for(int j=i*i;j<=n;j+=i){
//     if(arr[j]==j)
//      arr[j]=i;
//    }
//   }
//  }

//  while(n!=1){
//   cout<<arr[n]<<" ";
//   n=n/arr[n];
//  }
// }

//GCD
void GCD(int a,int b){
  

  while(b!=0){
    int rem=a%b;
    a=b;
    b=rem;
  }
  cout<<a;
}


int main(){
 int n,p;
 int a,b;
 cin>>a>>b;
 GCD(a,b);
 // primeFactor(n);
 // primeNo(n);
 // cout<<powerRecurrsion(n,p);
 // cout<<sumRecurrsion(n);
 // pascalTriangle(n);
 // fibonacci(n);
 // factorial(n);
}