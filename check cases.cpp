//check cases
#include<iostream>
using namespace std;

int main(){

    // Write your code here.
    int k=1,p=-1,m=0;
   char ch;
    // cout<<"enter the character"<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<k;
    }
    else if(ch>='a' && ch<='z'){
        cout<<m;
    }
    else{
        cout<<p;
    }
}
