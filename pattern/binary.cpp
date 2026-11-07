#include <iostream>
using namespace std;
int main(){
    // Method 1-)=>
//     int n;
//     cout<<"Enter your input";
//     cin>>n;
//     int Count=1;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) Count=1;
//         else Count=0;
//         for(int j=1;j<=i;j++){
//             cout<<Count<<" ";
//             if(Count==1) Count=0;
//             else Count=1;
            
//         }
//         cout<<endl;
//     }
//   Method 2-)=>
int n;
    cout<<"Enter your input";
    cin>>n;
  int Count=0;
    for(int i=1;i<=n;i++){
        
    for(int j=1;j<=i;j++){
         if((i+j) % 2==0) cout<<1<<" ";
         else cout<<0<<" ";
           
        }
        cout<<endl;
    }
}