#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int count=0;
    long int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
       count+=arr[i];
    }
    cout<<count<<endl;

}