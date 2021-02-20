#include<iostream>
using namespace std;


int main(){

 int n;
int i=1;
cin>>n;
while(i<=n){
        int p=n;
while(p>i){
    cout<<" ";
    p=p-1;
}
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;
    }
    int l=1;
    while(l<i){
        cout<<"*";
        l=l+1;
    }

    cout<<endl;
    i=i+1;
}

}
\
