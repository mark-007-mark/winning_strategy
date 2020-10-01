#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a=0,b=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       for(int i=0;i<n;i++){
           if(i==0){
               a=a+arr[i];
               i=i+2;
           }else{
           a=a+arr[i];
           i++;
           }
       }
       for(int j=1;j<n;j++){
           if(j==1){
           b=arr[j]+arr[j+1];
           j=j+2;
           }
           else{
               b=b+arr[j];
               j++;
           }
       }
       if(a>b){
           cout<<"first"<<endl;
       }else if(b>a){
           cout<<"second"<<endl;
       }else{
           cout<<"draw"<<endl;
       }
    }
}
