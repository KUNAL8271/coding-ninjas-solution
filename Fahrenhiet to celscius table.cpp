#include<iostream>
using namespace std;


int main(){
int S, E, step;
    cin>>S>>E>>step;

    int w = S;

    while(w <=E){
        int celciusValue = (int)((5.0/9)*(w-32));
        cout<< w << "\t" << celciusValue << endl;
        w += step;
    }



}

