#include<iostream>
using namespace std;
int main() {
	// Write your co
    int x,n,result=1;
    cin>>x>>n;
     while(n>0){
         result = result*x;
         n--;
     }
	cout<<result;
}


