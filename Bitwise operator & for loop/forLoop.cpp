#include<iostream>
using namespace std;
int main(){
  // int n;
  // cout << "what is value of n : " ;
  // // cin >> n ;

  // cout << "printing count from 1 to n" << endl;

// for(initial ; condition ; updation)
  // for(int i = 1 ; i <= n ; i++){
  //   cout << i << endl ;
  // }
  // _____________________________________
  
  // int i = 1;
  // for( ; ; ){
  //   if(i <= n){
  //     cout << i << endl;
  //   }else{
  //     break;
  //   }
  //   i++;
  // }

  //_________________________________________

// int sum = 0;
  // for(int i = 1; i <= n ; i++){
  //   // sum = sum + i ;

  //   sum += i;
  // }

  // cout << sum << endl;

  //___________________________________________

  
  for(int a = 0 , b = 1 , c = 2 ; a >= 0 && b >= 1 && c >= 2 ; a-- , b-- , c--)
    cout << a << " " << b << " " << c ;
}