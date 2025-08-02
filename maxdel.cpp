#include<iostream>
using namespace std;

void delarr(int c[],int in,int d){
    for(int i=in;i<d-1;i++){
        c[i]=c[i+1];
    }
}
int main(){
    int n,max=-100,min=100,a1,a2;
    int b[n];
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"Original: ";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }cout<<'\n';
    for(int i=0;i<n;i++){
        if(b[i]>max){
            max=b[i];a1=i;
        }
        if(b[i]<min){
            min=b[i];a2=i;
        }
    }
    delarr(b,a1,n);
    cout<<"After Deletion: ";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }cout<<'\n';
    return 0;
}