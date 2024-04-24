#include<iostream>

using namespace std;

int main(){
    //pattern 1
    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int i = 0 ;i < n; i++ ){
    //     for(int j = 0; j<n; j++){
    //         cout << "*" ;
    //     }
    //     cout << endl;

    // }

    // pattern 2

    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int  i = 0 ; i<n; i++){
    //     for(int j = 0; j<=i; j++){
    //         cout<< "*";
    //     }
    //     cout << endl;
    // }

    // pattern 3

    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int i = 1; i<=n ; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << i;
    //     }
    //     cout << endl ; 
    // }

    // pattern 4

    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int i = 1; i<=n ; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << j;
    //     }
    //     cout << endl ; 
    // }

    // pattern 5

    // method 1 by me

    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int i =n ; i>0;i--){
    //     for(int j=1 ; j<=i;j++){
    //         cout << "*";
    //     }
    //     cout << endl ;
    // }

    // method 2 take u forward

    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int i = 1;i<=n ; i++){
    //     for(int j =1; j<=n-i+1; j ++){
    //         cout << "*";
    //     }
    //     cout << endl ;
    // }

    // pattern 6
    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int i=1 ; i<=n; i++){
    //     for(int j =1; j<= n-i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl ;
    // }

    // pattern  7

    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int i=0;i<=n;i++){
    //     for(int j =0; j<=n-i-1; j++){
    //         cout << " ";
    //     }
    //     for(int j=1;j<=2*i+1;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // pattern 8

    // cout << "enter any number:";
    // int n ;
    // cin >> n;
    // for(int i =0; i<n;i++){
    //     for(int j = 0;j<i;j++){
    //         cout << " ";
    //     }
    //     for(int j = 0;j<2*n-(2*i+1);j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Pattern 9 
        // combination of pattern 7 and 8 
    
    // pattern 10

    // cout << "Enter the numbers of stars";
    // int n;
    // cin >> n;
    // for(int i =1 ; i <=2*n-1; i++){
    //     int stars = i;
    //     if(i>n) stars = 2*n-i;
    //     for(int j = 1; j<=stars; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // pattern 11

    // cout << "Enter any number";
    // int n ;
    // cin >> n;
    // for(int i=1 ; i<=n ; i++){
    //     int start;
    //     if (i%2 == 0) start = 1 ;
    //     else start = 0;
    //     for(int j = 1; j<=i ; j++){
    //         cout << start;
    //         start = 1 - start;
    //     }
    //     cout << endl;
    // }

    // cout << "Enter the number";
    // int n;
    // cin >> n;
    // for(int i = 1; i<=n; i++){
    // // print numbers
    //     for(int  j = 1 ; j <= i;  j++){
    //         cout << j;
    //     }
    //     // print numbers of spaces
    //     for(int j = 1; j <= 2*(n-i) ; j++){
    //         cout << " ";
    //     }
    //     // print numbers
    //     for(int j = i ; j>=1 ; j-- ){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
    // cout << "Enter any number";
    // int n;
    // cin  >> n;
    // int count = 1;  
    // for(int i = 1 ; i<=n ; i++){
    //     for(int j = 1 ; j<=i;  j++){
    //         cout << count ;
    //         count++;
    //     }
    //     cout << endl;
    // }

    // cout << "Enter any number";
    // int n ;
    // cin >> n;
    // for(int i =0 ; i<n;i++){
    //     for(char ch = 'A'; ch <='A'+i ; ch++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "Enter any number";
    // int n; 
    // cin >> n;
    // for(int i = 0; i<n ;i++){
    //     for(char ch='A';ch < 'A' + (n-i);ch++){
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // cout << "Enter any number";
    // int n;
    // cin >> n;
    // for(char ch ='A'; ch< 'A'+ n ; ch++){
    //     for(int j = 'A';j<=ch ;j++){
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // cout << "Enter any number";
    // int n;
    // cin >> n;
    // for(int i =0; i<n;i++){
    //     for(int j=0 ; j<=n-i-1;j++){
    //         cout << " ";
    //     }
    //     char ch = 'A';
    //     int breakpoint = (2*i+1) /2;
    //     for(int j = 1 ; j<=2*i+1; j++){
    //         cout << ch;
    //         if(j<=breakpoint) ch++;
    //         else ch--;
    //     }
    //     cout << endl;
    // }

    cout << "Enter sny number";
    int n;
    cin >> n;
    for(int i = 0 ; i<n ; i++){
        char ch = 'A';
        ch = ch+n-i-1;
        for(int j = 0 ; j<=i ; j++ ){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    

}