#include <iostream>
using namespace std;

//factorial
int factorial(int n){
 int fact=1;
 for(int i=2;i<=n;i++){
  fact*=i;
 }
 return fact;
}


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
void pascalTriangle(int n){
 for(int i=0;i<n;i++){
  for(int j=0;j<=i;j++){
   int pascal=factorial(i)/(factorial(i-j)*factorial(j));
   cout<<pascal<<" ";
  }
  cout<<endl;
 }
}

int main(){
 int n;
 cin>>n;
 pascalTriangle(n);
 // fibonacci(n);
 // factorial(n);
}