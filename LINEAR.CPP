#include<iostream>
using namespace std;

int linear(int a[], int n, int ele){
        for(int i=0; i<n; i++){
            if(a[i]==ele){
                return i;
            }
        }
        return -1;
}

int main(){
     int n;
     cin>>n;

     int a[n];
     for(int i=0; i<n; i++){
        cin>>a[i];
     }

    int ele;
    cin>>ele;

cout<<linear(a, n , ele);

     
return 0 ;
}