int upper_bound_(int n, int v, int* a, int aLen ) {
    // write code here
    int first=0,last=n-1;
    int mid=0;
    while(last>first)
    {
        mid=first+(last-first)/2;
        if(a[mid]>=v)
        {
            if(mid==0||a[mid-1]<v)
                return mid+1;
            else
                last=mid;
        }
        else
            first=mid+1;
    }
    return
        n+1;
}
