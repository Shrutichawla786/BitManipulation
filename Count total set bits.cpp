Q.Count total set bits
code-->int get(int n){
        int ans=0;
        while(n>1){
                ans+=n&1;
                n=n>>1;
            }
        if(n==1){
            ans++;
        }
        return ans;
    }
    int countSetBits(int n)
    {
        // Your logic here
        int ans=0;
        while(n>0){
            ans+=get(n);
            n--;
        }
        return ans;
    }
