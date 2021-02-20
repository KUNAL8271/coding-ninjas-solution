#include<iostream>
using namespace std;


int main(){
    int n;
int i=1;
int k=0;
cin>>n;
while(i<=n){
        int p=1;
while(p<=n-i){
    cout<<" ";
    p=p+1;
}
    int j=1;
    while(j<=i){
        cout<<j+k;
        j=j+1;
    }
    k=k+1;

    cout<<endl;
    i=i+1;
}


}
