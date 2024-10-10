#include <iostream>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    
    bool flag=1;
    for(int i=a;i<b;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
        flag=1;
    }
}
