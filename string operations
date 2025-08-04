#include <iostream>
using namespace std;

class String {
    char s1[100], s2[100];
    
public:
    void accept();
    void length();
    void copy();
    void compare();
    void reverse();
    void concatenate();
    void palindrome();
    void count();
    
};


void String::accept() {
    cout << "Enter the 1st string: ";
    cin >> s1;
    cout << "Enter the 2nd string: ";
    cin >> s2;
}


void String::length() {
    int len1 = 0, len2 = 0;
    int i;

    for (i = 0; s1[i] != '\0'; i++) {
        len1++;
    }
    cout << "Length of 1st String: " << len1 << endl;

    for (i = 0; s2[i] != '\0'; i++) {
        len2++;
    }
    cout << "Length of 2nd String: " << len2 << endl;
}


void String::copy() {
    int i;
   
    for (i = 0; s2[i] != '\0'; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0'; 

    cout << "1st String after copying from 2nd String: " << s1 << endl;

    for (i = 0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0'; 

    cout << "2nd String after copying from 1st String: " << s2 << endl;
}

void String::compare() {
    int i, flag = 0;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && s1[i] == '\0' && s2[i] == '\0') {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
}

void String::reverse() {
   int i=0,j=0;
   char S1[100], S2[100];
    int len1 = 0, len2 = 0;
    
   
    while (s1[len1] != '\0') {
        len1++;
    }
    
    for (int i =0; i<len1; i++) {
        
            S1[i]=s1[len1-i-1];
    }
    S1[len1]='\0';
    cout << "Reversed 1st String: " << S1 << endl;
    
    while (s2[len2] != '\0') {
        len2++;
    }
    
    for (int i =0; i<len2; i++) {
        
            S2[i]=s2[len2-i-1];
    }
    S2[len2]='\0';
    cout << "Reversed 1st String: " << S2 << endl;
}


void String::concatenate() {
    int i = 0, j = 0;

    
    while (s1[i] != '\0') {
        i++;
    }

   
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    cout << "Concatenated String (1st + 2nd): " << s1 << endl;
}

void String::count() {  
int len1 = 0, len2 = 0;
   
    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }
cout<< "Character counts in 1st String: "<<  endl;
for(int i=0; i<<len1; i++)
{
int c=1;
int flag=0;
for(int j=0; j<i;j++){
if(s1[i]==s1[j]){
flag=1;
break;
}
}
if(flag==0){
for(int j=i+1; j<len1;j++){
if(s1[i]==s1[j]){
c++;
}
}
cout<<s1[i]<<":"<<c<<endl;
}
}
cout<< "Character counts in 2nd String: "<<  endl;
for(int i=0; i<<len2; i++)
{
int c=1;
int flag=0;
for(int j=0; j<i;j++){
if(s2[i]==s2[j]){
flag=1;
break;
}
}
if(flag==0){
for(int j=i+1; j<len2;j++){
if(s2[i]==s2[j]){
c++;
}
}
cout<<s2[i]<<":"<<c<<endl;
}
}
}

void String::palindrome() {
    int len1 = 0, len2 = 0;
   
    while (s1[len1] != '\0') {
        len1++;
    }

    int flag1 = 1; 
    for (int i = 0; i < len1 / 2; i++) {
        if (s1[i] != s1[len1 - i - 1]) {
            flag1 = 0;
            break;
        }
    }

    if (flag1 == 1) {
        cout << "1st String is a palindrome." << endl;
    } else {
        cout << "1st String is not a palindrome." << endl;
    }

    while (s2[len2] != '\0') {
        len2++;
    }

    int flag2 = 1; 
    for (int i = 0; i < len2 / 2; i++) {
        if (s2[i] != s2[len2 - i - 1]) {
            flag2 = 0; 
            break;
        }
    }

    if (flag2 == 1) {
        cout << "2nd String is a palindrome." << endl;
    } else {
        cout << "2nd String is not a palindrome." << endl;
    }
}




int main() {
    String str;
    int choice;

    do {
        cout << "\nString Operations Menu:";
        cout << "\n1. Accept";
        cout << "\n2. Length";
        cout << "\n3. Copy";
        cout << "\n4. Compare";
        cout << "\n5. Reverse";
        cout << "\n6. Concatenate";
        cout << "\n7. Count occurences";
        cout << "\n8. Check Palindromes";
        cout << "\n9. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                str.accept();
                break;
            case 2:
                str.length();
                break;
            case 3:
                str.copy();
                break;
            case 4:
                str.compare();
                break;
            case 5:
                str.reverse();
                break;
            case 6:
                str.concatenate();
                break;
            case 7:
                str.count();
                break;
            case 8:
                str.palindrome();
                break;
            case 9:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}
