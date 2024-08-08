// #include <iostream>
// using namespace std;
// int main() {

  // ++++++++++++++++++++ cin +++++++++++++
  // int a;
  // cin >> a;
  // cout << "The value of a is "<< a << endl;

  // +++++++++++++++ if else +++++++++++++++++++

  // if(a>0){
  //   cout << "a is Positive" ;
  // }
  // else{
  //   cout << "a is Negative";
  // }

  //+++++++++++++++++++++ cin.get() ++++++++++++++++++

  // int a;

  // a = cin.get();

  // cout << "The value of a is "<< a << endl;

  //++++++++++++++++++++++++++++++++++++++++++++

  // Q. check greater values between two numbers

  // int a,b;

  // cout << "Enter the value of a " << endl;
  // cin >> a;

  // cout << "Enter the value of b " << endl;
  // cin >> b;

  // if(a > b){
  //   cout << "A is greater" << endl;
  // }
  // if(b > a){
  //   cout << "B is greater" << endl;
  // }

  //++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  // Q. check number is +ve , -ve or 0

  // int a;
  // cout << "Enter the value of a " << endl;
  // cin >> a;

  // if(a>0){
  //   cout << "a is positive" << endl;
  // }
  // else{
  //   if(a<0){
  //     cout << "a is negative" << endl;
  //   }
  //   else{
  //     cout << "a is 0" << endl;
  //   }
  // }

  // +++++++++++++++++++  else if ++++++++++++++++++

  // int a;
  // cout << "Enter the value of a " << endl;
  // cin >> a;

  // if(a>0){
  //     cout << "a is positive" << endl;
  //   }
  // else if(a<0){
  //   cout << "a is negative" << endl;
  // }
  // else{
  //   cout << "a is 0" << endl;
  // }

  // ++++++++++++++++++++++ Home Work ++++++++++++++++++
  // char ch = 65 ;
  
// }

//+++++++++++++++++++++++++++++++++++++++++

// Q. print 1 to n

// #include <iostream>
// using namespace std;
// int main() {

//   int n ;
//   cin >> n;

//   int i = 1;

//   while(i<=n){
//     cout << i << " ";
//     i = i + 1;
//   }
// }

// ++++++++++++++++++++++++++++++++++++++++++++++++

// Q. sum -> 1 to n

// #include <iostream>
// using namespace std;
// int main() {

//   int n;
//   cin >> n;

//   int i = 1;
//   int sum = 0;

//   while(i<=n){
//     sum = sum + i;
//     i = i + 1;
//   }

//   cout << "The value of sum is "<< sum << endl;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Q. Prime or not 

// #include <iostream>
// using namespace std;
// int main() {

//   int n ;
//   cin >> n;

//   int i = 2;

//   while(i < n){
//     if(n%i == 0){
//       cout << "Not Prime for " << i << endl;
//     }
//     else{
//       cout << "Prime for " << i << endl;
//     }
//     i = i + 1;
//   }
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Q. Pattern 1

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n ;

//   int i = 1;

//   while(i <= n){
//     int j = 1 ;
//     while(j <= n){
//       cout << " * " ;
//       j = j + 1;
//     }
//     cout << endl;
//     i = i + 1;
//   }
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Q. Pattern 2

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n ;

  int i = 1;

  while(i <= n){
    int j = 1 ;
    while(j <= n){
      cout << i ;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}