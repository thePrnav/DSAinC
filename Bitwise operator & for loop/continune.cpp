// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0; i < 5 ; i++){
//     cout << " HI " << endl;
//     cout << " HEY " << endl;
//     continue;
    
//     cout << " Reply toh karde " << endl;
    
//   }
// }

//______________________________________________________

// 5 questions 

// Q.1) 
// #include<iostream>
// using namespace std;
// int main(){ 
//     for(int i = 0; i <= 5 ; i++){
//     cout << i << " ";    
//   }
// }

// Q.2)
// #include<iostream>
// using namespace std;
// int main(){ 
//     for(int i = 0; i <= 5 ; i--){
//     cout << i << " "; 
//     i++;   
//   }
// }

// Q.3)

// #include<iostream>
// using namespace std;
// int main(){ 
//     for(int i = 0; i <= 15 ; i += 2){
//     cout << i << " "; 

//     if(i&1){
//         continue;
//     }
//     i++;   
//   }
// }

// Q.4)

// #include<iostream>
// using namespace std;
// int main(){ 
//     for(int i = 0; i < 5 ; i++){
//     for(int j = 0; j <= 5 ; j++){
//       cout << i << " " << j << endl;
//     }   
//   }
// }


// Q.5)

#include<iostream>
using namespace std;
int main(){ 
     for(int i = 0; i < 5 ; i++){
    for(int j = 0; j <= 5 ; j++){

      if(i+j == 10){
        break;
      }
      cout << i << " " << j << endl;
    }   
  }
}
