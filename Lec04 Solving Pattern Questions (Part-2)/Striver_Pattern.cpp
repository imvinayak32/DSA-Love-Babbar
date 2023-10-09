#include<iostream>
using namespace std;

void pattern_1(int n){
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern_2(int n){
    for (int i = 1; i <=n; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";}

        cout << "\n";
    }

}
void pattern_3(int n){
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {cout << j;}
        cout << "\n";
    }
}
void pattern_4(int n){
        for (int i = 1; i <=n; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }

}
void pattern_5(int n){
    for (int i = 1; i <=n; i++){
        for (int j = i; j <=n; j++)
        {cout << "*";}
        cout << "\n";
    }
}
void pattern_6(int n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 1; j<= n-i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
void pattern_7a(int n){
        for(int i=1; i<=n; i++){
        for(int j=1; j<2*n; j++){
            if(j<=(n-i) || j>=(n+i)) cout<<" ";
            else cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern_7b(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern_8(int n){
        for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern_9(int n){
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern_11(int n){
    for(int i=0; i<n-1; i++){
        int start = 1;
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
        cout<<start<<" ";
        start = 1 - start;}
        cout<<"\n";
    }
}
void pattern_12(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        //number
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }

        //number
        for(int j=i; j>=1;j--){
        cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}
void pattern_13(int n){
    int number = 1;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
        cout<<number<<" ";
        number++;
        }
        cout<<"\n";
    }
}
void pattern_14(int n){
    // 'A' + 1 == B
    // 'A' + 2 == C Similarly things goes on...
    for(int i=0; i<n; i++){
        for(char c = 'A'; c<= 'A' + i; c++){
        cout << c <<" ";
        }
        cout<<"\n";
    }
}
void pattern_15(int n){
    for(int i=1; i<=n; i++){
        for(char c = 'A'; c<= ('A' + n - i); c++){
        cout << c <<" ";
        }
        cout<<"\n";
    }
}
void pattern_16(int n){
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j< (i+1); j++){
        cout<<ch<<" ";
        }
        cout<<"\n";
    }
}
void pattern_17(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //Character Printing
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0; j<2*i+1; j++){
            cout<<ch;
            if (j< breakpoint) ch++;
            else ch--;
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern_18(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'E' - i; ch<= 'E'; ch++){
        cout<<ch<<" ";
        }
        cout<<"\n";
    }
}
void pattern_19(int n){
    for(int i=1; i<=n; i++){
        int changepoint = n/2;
        if(i <= changepoint){
        for(int j=0; j<=(n/2 - i); j++){
            cout<<"*";
        }
        cout<<"\n";
        }
        else{
            for(int j=0; j<(i-n/2); j++){
            cout<<"*";
            }
            cout<<"\n";
        }
    }

}


void Lovebabbar_dabang(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<= n-i; j++) cout<<j<<" ";
        for(int j=0; j<2*i; j++) cout<<"* ";
        for(int j=n-i; j>=1; j--) cout<<j<<" ";
        cout<<"\n";
    }
}


int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    pattern_1(n);
    cout<<endl;
    pattern_2(n);
    cout<<endl;
    pattern_3(n);
    cout<<endl;
    pattern_4(n);
    cout<<endl;
    pattern_5(n);
    cout<<endl;
    pattern_6(n);
    cout<<endl;
    pattern_7b(n);
    cout<<endl;
    pattern_7a(n);
    pattern_8(n);
    cout<<endl;
    pattern_9(n);
    cout<<endl;
    pattern_11(n);
    cout<<endl;
    pattern_12(n);
    cout<<endl;
    pattern_13(n);
    cout<<endl;
    pattern_14(n);
    cout<<endl;
    pattern_15(n);
    cout<<endl;
    pattern_16(n);
    cout<<endl;
    pattern_17(n);
    cout<<endl;
    pattern_18(n);
    cout<<endl;
    pattern_19(n);
    cout<<endl;

    Lovebabbar_dabang(n);
    cout<<endl;

    return 0;
} 