#include <iostream>

using namespace std;
int main(){
    int h;
    while(h<1 || h>8){
        cin>>h;
    }
    cout<<endl;
    for(int i = 1; i <= h ; i++){
        for(int k = 0; k < h-i; k++){
            cout<<" ";
        }
        
        for(int j = 1; j <= i; j++){
            cout<<"#";
        }
        
        cout<<endl;
    }
}