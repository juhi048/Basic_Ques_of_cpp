#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"It is a prime number"<<endl;
    }
    return 0;
}