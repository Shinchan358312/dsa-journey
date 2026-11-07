#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v,int n){
      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }
}
// void sort(vector<int>&v, int n){
//       int noo=0;
// int noz=0;
// for(int i=0; i<n;i++){
//       if(v[i]==0) noz++;
//       else noo++;
// }
//       for(int i=0;i<n;i++){
//             if(i<noz) v[i]=0;
//             else v[i]=1;
//       }
//       display(v,n);
// }

int main(){
     vector<int> v= {1,1,0,1,0,1,0};
     int n = v.size();

display(v,n);
cout<<endl;

// sort(v,n); // method1 two pass way 
//Method 2 one pass way 
int pointer1=0;
int pointer2=n-1;
for (int i=0;i<n;i++){
      if(v[pointer1]>v[pointer2]){
            int temp;
            temp=v[pointer1];
            v[pointer1]=v[pointer2];
            v[pointer2]=temp;
            pointer1++;
            }
          else{
            if( v[pointer1]==1&& v[pointer2]==1)
                 pointer2--;
            else pointer1++;
          }
}
display(v,n);
}

