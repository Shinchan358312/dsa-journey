#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your input";
    cin>>n;
    int Count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<Count<<" ";
            Count++;
        }
        cout<<endl;
    }
}