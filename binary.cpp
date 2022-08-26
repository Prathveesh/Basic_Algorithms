#include<iostream>
using namespace std;

int binary(int a[], int n, int ele){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;

        if(a[mid]==ele){
            return mid;
        }
        else if(ele<a[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
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
     
     cout<<binary(a,n,ele);

return 0 ;
}