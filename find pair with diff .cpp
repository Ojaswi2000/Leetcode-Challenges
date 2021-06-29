
bool findPair(int arr[], int size, int n){
    set<int>s;
    for(int i=0;i<size;i++)
    s.insert(arr[i]);
    for(int i=0;i<size;i++)
    {
        int curr=abs(n-arr[i]);
        if(s.count(curr))
        return true;
    }
    return false;
}
