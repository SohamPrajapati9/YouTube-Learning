#include <iostream>
using namespace std;

void print(int n){
    cout<<n<<endl;
    return;
}
int sum(int n1,int n2){
    print(n1);
    print(n2);
    int sum= n1 + n2;
    return sum;
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<sum(num1,num2);
}
