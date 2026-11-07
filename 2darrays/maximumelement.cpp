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
int max=INT8_MIN;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
         if(max<arr[i][j]) max=arr[i][j];
    }
    
}
cout<<endl;

cout<<max;
}
