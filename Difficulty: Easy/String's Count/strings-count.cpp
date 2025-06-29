long long int countStr(long long int n) {
    // complete the function here
    long long int ans=0;
    
    if(n>=1)
    {
        ans+=1;     //all a
        ans+=n;     //1 b
        ans+=n;     //1 c
        
        if(n>=2)
        {
            ans+=n*(n-1);       // 1 b, 1 c
            ans+=n*(n-1)/2;     // 2 c
            
            if(n>=3)
            {
                ans+=n*(n-1)*(n-2)/2;       //1 b, 2 c
            }
        }
    }
    
    return ans;
}