#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    bool flag=0;
    
    cout<<"1 "<<endl;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<i<<endl;
            flag=1;
        }
    }
    cout<<n<<endl;
    if(flag==1){
        cout<<"non prime "<<endl;
    }
    else{
        cout<<"prime "<<endl;
    }
}
