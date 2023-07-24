//Remove duplicates from a sorted array in non decreasing order.
#include<bits/stdc++.h>
using namespace std;
class solve{
    public:
        int remove_duplicate(int arr[],int n)
        {
            int j=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=arr[j]){
                    arr[++j]=arr[i];
                }
            }return j+1;// it is the value of elements which are unique in  array.
        }
};
int main()
{
    int arr[]={1, 2, 2,2,3,3,4,4,5,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    solve obj;
    int m=obj.remove_duplicate(arr,n);
    cout<<"No. of elements in array :";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    cout<< "\nNO. of elements are unique "<< m<<endl;
    return 0;
}