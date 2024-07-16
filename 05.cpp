long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    //1 3 4 7 9 9 12 56
    //2 3 4 7 9 12 56
    sort(a.begin(),a.end());
    long long int i=0,j=m-1,ans=INT_MAX;
    while(j<n){
        ans=min(ans,a[j]-a[i]);
        i++;
        j++;
    }
    return ans;
    }   