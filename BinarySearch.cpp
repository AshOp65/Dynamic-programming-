#include <iostream>
using namespace std;

int binary(int a[],int n, int x,int search){
    int low=0,high=n-1,mid;
    int res=-1;
    while(low<=high){
        mid = (high+low)/2;
        if (x==a[mid]){
        res= mid;
        if(search){
            high=mid -1;
        }
        else{
            low = mid+1;
        }
        }
        else if(x<a[mid]){
            high=mid-1;
        }
        
        else{
            low=mid+1;
        }
        
    }
    return res;
}

int main() {
   int a[]= {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
   int n= sizeof(a)/sizeof a[0];
   int x=6;
   int first = binary(a,n,x,1);
   int second= binary(a,n,x,0);
   int count = second - first +1;
   cout<<count<<" ";

    return 0;
}