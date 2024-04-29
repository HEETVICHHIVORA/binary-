#include<iostream> 
#include<vector>

using namespace std ;
int main (){
    vector<int>arr ={1,2,3,4,5,6,7,8,9};
    int tofind =-1 ;
    cout<<"enter to find"<<endl;
    cin>>tofind ;
    int s= 0 ;
    int e=arr.size()-1;
    int mid =(s+e)-s/2;

    while(s<=e){
        if(arr[mid]==tofind){
            cout<<"found at "<<mid<<" index";
            break;
        }
        if(arr[mid]>tofind){
            e=mid-1;
        }
        else{
            s=mid;
        }
        mid =(s+e)-s/2;
        


    }
    cout<<"not found"<<endl;

    return 0 ;
}