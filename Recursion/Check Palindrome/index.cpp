   //---------------------------------With 2 Pointers---------------------------------
#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int  j) {

    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    else{
        //Recursive call
        return checkPalindrome(str, i+1,j-1);
    }
}

int main() {

    string name = "BookkooB";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );

    if(isPalindrome) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }


    return 0;
}
//---------------------------------With 1 Pointer---------------------------------
bool checkPalindrome(string str, int len) {
    static int i = 0;
    if(i>=len/2) {
        return true;
    }
    if(str[i]!=str[len-i-1]) {
        return false;
    }
    i++;
    return checkPalindrome(str,len);
}

int main() {
    string name = "abcba";
    bool result = checkPalindrome(name,name.length());
    cout<<result<<endl;
    return 0;
}