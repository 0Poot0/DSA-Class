#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the elements for a:"<<endl;

    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"Enter the elements for b:"<<endl;
    int m;
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int t= n+m;
    int c[t];
    i=0;j=0;k=0;

    while(i<n){
        c[k++]=a[i++];
    }

    while(j<m){
        c[k++]=b[j++];}

        
    cout<<"My array elements after merging "<<endl;
    for(i=0; i<t;i++){
        cout<<c[i]<<" ";
    }
    
    
    return 0;
}
