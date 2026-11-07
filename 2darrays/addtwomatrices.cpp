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
int brr[m][n];
int res[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
        
    }
}

cout<<"----this matrix 1------"<<endl;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
        
    }
    cout<<endl;
    
}
cout<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>brr[i][j];
        
    }
}

cout<<"----This Matrix 2------"<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<brr[i][j]<<" ";
        
    }
    cout<<endl;
    
}
    
cout<<endl;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        res[i][j]=arr[i][j]+brr[i][j];
        
    }
    }

cout<<"----This is Final matrix------"<<endl;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<res[i][j]<<" ";
        
    }
    cout<<endl;
    
    
}
    

}