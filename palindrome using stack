#include<iostream>
#include<string.h>
using namespace std;

class string {
    char str[50];
public:
    void accept();
    void palindrome();
};
 
void String::accept() {
    cout << "Enter the string: ";
    cin >> str;
    
void String::palindrome() {
    int i=0;
    int top=-1;
    int len=0;
    char s[50];
    while(str[i]!=0){
        len++;
    }
    while(len!=0){
        top++;
        s[top]==str[i];
        i++;
    }
    int f = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != str[i]) {
            f = 1;
            break;
        }
    }
    if(f==0){
        cout<<"The given string is a palindrome.";
    }
    else{
        cout<<"The given string is not a palindrome.";
    }
    
} 

int main(){
    
return 0;
}
   
