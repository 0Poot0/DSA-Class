#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0; i<n; i++){
        cin>>a[i];
     }
     int loc;
    for(int i=0; i<n; i++){
        loc=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[loc]){
                loc=j;
            }
            if(loc!=i){
              int temp=a[i];
              a[i]=a[loc];
              a[loc]=temp;
            }
        }
    }
    cout<<"The sorted array is :"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}