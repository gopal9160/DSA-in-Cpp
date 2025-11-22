#include <bits/stdc++.h>
using namespace std ;
void pattern1(int n){
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n){
    for(int i = 1; i<=n;i++){
        for(int j =1 ;j<=i;j++){
            cout << "*";

        }
        cout << endl;
    }
}
void pattern3(int n){
    for (int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int n){
    for (int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int n){
    for (int i =0;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n){
    for (int i =0;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i = 1;i<=n;i++){
    // for Spaces
        for(int j = 1;j<=n-i;j++){
        cout << " ";
        }
        
        for(int j=1; j<= 2*i-1;j++){
            cout << "*";
        }
        
        for(int j = 1;j<=n-i;j++){
        cout << " ";
        }
        cout << endl;
        
    }
}
void pattern8(int n){
    for(int i =1;i<=n;i++){
        // for Spaces 
        for(int j = 1;j<=i-1;j++){
            cout << " ";
        }
        for(int j = 1;j<=2*n - (2*i-1);j++){
            cout << "*";
        }
        for(int j = 1;j<=i-1;j++){
            cout << " ";
        }
        cout << endl;

    }
}
void pattern9(int n){
    for(int i = 1;i<=2*n-1;i++){
        int stars;
        if(i<=n){
            stars = i;
        }else{
            stars = 2*n-i;
        }
        for (int j =1 ; j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i = 1;i<=n;i++){
        int start =1;
        if(i%2==0){
            start = 0;
        }else{
            start = 1;
        }
        for(int j=1;j<=i;j++){
            cout << start;
            start = 1-start;

        }
        cout << endl;
    }
}
void pattern11(int n){
    int space = 2*(n-1);
    for(int i = 1;i<=n;i++){
        // number 
        for (int j =1;j<=i;j++){
            cout << j;
        }
        // Spaces
        for(int j = 1;j<=space;j++){
            cout << " ";

        }


        for (int j =i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space -=2;
        
    }
}
void pattern12(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << num << " ";
            num= num+1;
        }
        cout << endl;
    }
}
void pattern13(int n){
    for(int i =1;i<=n;i++){
        for (char j ='A';j<= 'A' + i-1;j++){
            cout << j ;
        }
        cout << endl;
    }
}
void pattern14(int n ){
    for (int i=1;i<=n;i++){
        for(char j= 'A';j<='A' + n-i;j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern15(int n){
    for(int i = 1;i<=n;i++){
        char ch  = 'A' + i -1 ;
        for(char j = 1;j<=i;j++){
            cout << ch ;
        }
        cout << endl;

    }
}
void pattern16(int n){
    for (int i = 1;i<=n;i++){
        // for Spaces 
        for(int j = 1;j<=n-i;j++){
            cout << " ";
        }
        // for charecters
        char ch = 'A';
        int breakpoint = (2*i+1) /2;
        for(char j =1;j<=2*i-1;j++){
            
            cout << ch ;
            if(j<breakpoint) ch++;
            else ch--;
        }
        // for Spaces
        for(int j = 1;j<=n-i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern17(int n){
    for(int i = 1;i<=n;i++){
        for(char j ='E'-(i-1);j<='E';j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern18(int n){
    // for stars
    for(int i =1;i<=n;i++){
        // for stars
        for(int j=1;j<=n-i+1;j++){
            cout << "*";
        }
        // for spaces
        for(int j =1;j<=(2*i)-2;j++){
            cout << " ";
        }


        // for stars
        for(int j=1;j<=n-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern19(int n ){
    for (int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << "*";
        }

        for(int j =1;j<=2*(n-i);j++){
            cout << " ";
        }


        for(int j = 1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n){
    for (int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << "*";
        }

        for(int j =1;j<=2*(n-i);j++){
            cout << " ";
        }


        for(int j = 1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int n){
    for(int i = 1;i<=n-1;i++){
        // for stars
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        // for Space
        for(int j =1;j<=2*i;j++){
            cout << " ";
        }


        // for stars
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern22(int n){
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==n||j==1){
            cout << "*";
        }else{
            cout << " ";
        }
            }
        
        cout << endl;
    }
}
void pattern23(int n ){
    int c = 2*n-3;
    for(int i = 1;i<=c;i++){
        for(int j=1;j<=c;j++){
            if(i==c||i==1||j==c||j==1){
                cout << "4";
            }
        }
    }
}
int main(){
    int n = 5;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    pattern22(n);
    
    return 0;

}
