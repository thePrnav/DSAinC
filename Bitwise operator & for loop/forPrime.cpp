#include<iostream>
using namespace std;
int main(){
    
  int n;
  cout << "what is value of n : " ;
  cin >> n ;

   bool isPrime = 1;

  for( int i = 2 ; i < n ; i++){
    if(n%i == 0){
      // cout << "Not a prime number ";
      isPrime = 0;
      break;
    }
  }

  if(isPrime == 0){
    cout << "Not a prime number" ;
  }else{
    cout << "Is a Prime number";
  }
}