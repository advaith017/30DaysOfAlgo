// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
     int *findTwoElement(int *arr, int n) {
        int * result = new int[2];
        int index;
        for(int i =0;i<n;i++)
        {
            index=abs(arr[i])-1;
            if(arr[index]>0)
            {
                arr[index]=-arr[index];
            }
            else
                result[0]=index+1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
                result[1]=i+1;
        }
        return result;
    }
};
};

int main()
{
    Solution obj;
    int arr[4]={3,1,2,3};
    int *res=obj.findTwoElement(arr,4);
    for (int i = 0; i <=1; i++)
        cout <<res[i] << " ";
}