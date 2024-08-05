
/*
Q.addition of two numbers.
#include<iostream>
using namespace std;
int main(){
   #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
   #endif

int a,b;
cin>>a>>b;
cout<<a+b<<"\n";
    return 0;
}
*/

/*
Q. taking input through user addition of two numbers.
#include<iostream>
using namespace std;
int main(){
     #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
   #endif
int a,b,sum;
cin>>a>>b;

sum= a+b;
cout<<"sum\n";
cin>>sum;

return 0;
}
*/
/*
Q. WAP using if else conditional operator.
#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
   #endif
    int savings;
    cin>>savings;

    if(savings>500){
        cout<<"neha";
    }
    else{
        cout<<"ram";
    }
    return 0;
}
*/

/*
Q.WAP using else if conditional operator.
#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
             #endif 
    int savings;
    cin>>savings;

    if(savings>5000){
        cout<<"neha\n";
    }
    else if(savings>2000){
        cout<<"rashmi\n";
    } 
    else{
        cout<<"friends";
    }
    return 0;
}
*/
/*
Q.WAP using nested if conditional operator.
#include<iostream>
using namespace std;
int main(){
     #ifndef ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
             #endif 
    int savings;
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with neha\n";
        }
        else{
            cout<<"shopping with neha\n";
        }
        }
        else if(savings>2000){
            cout<<"rashmi\n";
        }
        
        else{
            cout<<"friends\n";
        }
        return 0;
    
}
*/
/*
Q. WAP to find max number between 3 given numbers.
#include<iostream>
using namespace std;
int main(){
     #ifndef ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
             #endif 
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"a is max\n";
        }
        else{
            cout<<"c is max\n";
        }
    }
    else if(b>c){
        cout<<"b is max\n";
    }
    else{
        cout<<"c is max\n";
    }
    return 0;
}*/
/*
Q. WAP to find n given number is odd or even.
#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
             #endif 
    int n;
    cin>>n;

    if(n%2==0){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }
    return 0;
}
*/
/*
Q. WAP using for loop.
#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
             #endif 
    int n;
    cin>>n;
    
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum = sum + counter;
    }
    cout<<sum<<endl;
    return 0;
    
}
*/

/*
Q. WAP using do while loop
#include<iostream>
using namespace std;
int main(){
     #ifndef ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
             #endif 
    int n;
    cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;
    }
    while(n>0);
    return 0;
}
*/