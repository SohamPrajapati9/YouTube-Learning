#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int og = n;
    
    int sum;
    
    while(n>0){
        int ld = n%10;
        sum += pow(ld,3);
        n = n/10;
    }
    if(sum == og){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong number";
    }
}
