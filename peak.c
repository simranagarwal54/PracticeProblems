/*
 Please note that it's Function problem i.e.
 you need to write your solution in the form Function(s) only.
 Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The function should return the index of any
 peak element present in the array */
int peak(int arr[], int n)
{
    int low=0, high=n-1;
    int mid=0;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])
            return mid;
        
        else if(arr[mid+1]>0 && arr[mid]<arr[mid-1])
            high=mid-1;
        
        else
            low=mid+1;
        
        
    }
}
