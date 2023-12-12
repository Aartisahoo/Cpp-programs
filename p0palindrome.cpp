#include <iostream>
using namespace std;

int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    char num[10];
    cout<<"enter string to be checked for palindrome:";
    gets(num);
    // check if the string is palindrome or not
    int i=0,j=0;
    while(num[i]!='\0'){
        i++;
    }
    i=i-1;
    while(i>j){
        if(num[i]!=num[j]){
            cout<<"The string is not palindrome";
            break;
        }
        else{
            cout<<"The string is palindrome";
            break;
        }
        i--;
        j++;
    }
}
    