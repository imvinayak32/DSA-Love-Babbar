#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverseString(char name[], int n){
    int i = 0;
    int j = n - 1;
    while(i<=j){
        swap(name[i++], name[j--]);
    }
}

char toLowerCase(char s){
    if( s >= 'a' && s <= 'z') return s;
    else{
        return (s - 'A' + 'a');
    }
}

bool checkPalindrome(char s[], int n){
    int i = 0;
    int j = n - 1;

    while(i <= j){

        if ( toLowerCase(s[i]) != toLowerCase(s[j])) return 0;
        else{
            i++;
            j--;
        }
    }
    return 1;
}

int main(){
    char name[20];
    cout<<"Enter your name : "<<endl;
    cin>>name;

    //name[3] = '\0';
    //cout<<name<<endl;

    int length = getLength(name);
    cout<<"Length of String : "<<length<<endl;

    reverseString(name,length);
    cout<<"Reversed String "<<name<<endl;

    cout<<"Palindrome or not : ";
    cout<<checkPalindrome(name, length)<<endl;

    return 0;
}