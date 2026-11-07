#include<iostream>
using namespace std;
int main(){
int m;
int n;
cout<<"Enter the value of m";
cin>>m;
cout<<"Enter the value of n";
cin>>n;
int arr[m][n];
int sum=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
         sum+=arr[i][j];
    }
    
}
cout<<endl;
cout<<sum;
}