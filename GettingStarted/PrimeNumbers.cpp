#include<iostream>
#include<math.h>
using namespace std;

//very slow and simple approach for getting primes

int numDivisors(int n){
  int count=2;
  for(int i=2;i<sqrt(n);i++){
    if(n%i==0)
      count++;
  }
  return count;
 }
      

int main(){
  int k;
  cout<<"Enter the limit until you want prime numbers\n";
  cin>>k;
  
  for(int i=2;i<=k;i++){
    if(numDivisors(i)==2)
      cout<<i<<endl;
  }    
  
return 0;
}
