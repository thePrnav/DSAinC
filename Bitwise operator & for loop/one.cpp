#include<iostream>
using namespace std;
int main (){
    int a = 4;
    int b = 6;

    cout << " a&b " << (a&b) << endl;
    cout << " a|b " << (a|b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a^b) << endl;

  cout << (17 >> 1) << endl;
  cout << (17 >> 2) << endl;
  cout << (19 << 1) << endl;
  cout << (19 << 2) << endl;

  int i = 5;
    cout << (++i) << endl; // 6  ,  6
    cout << (i++) << endl;  // 6 , 7
    cout << (i--) << endl;  // 7 ,  6
    cout << (--i) << endl;  // 5 , 5


// 5 questions


 //  int a , b = 1;
    //   a = 10;

    // if(++a)
    //     cout << b;
    // else
    //     cout << ++b;
    
//_______________________________________________

    // int a = 1;
    // int b = 2;

    // if(a-- > 0 && ++b > 2){
    //     cout << "Stage 1 - inside if ";
    // }else{
    //     cout << "Stage 2 - inside else";
    // }

    // cout << a << " " << b << endl;

//________________________________________________________
    
    // int a = 1;
    // int b = 2;

    // if(a-- > 0 || ++b > 2){
    //     cout << "Stage 1 - inside if ";
    // }else{
    //     cout << "Stage 2 - inside else";
    // }

    // cout << a << " " << b << endl;

//___________________________________________________

    // int num = 3;
    // cout << (25 * (++num)) << endl;

//___________________________________________________

    // int a = 1;
    // int b = a++;
    // int c = ++a;

    // cout << b << endl;
    // cout << c << endl;

    
}