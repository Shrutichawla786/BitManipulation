Q.Number of 1 Bits
code-->    int setBits(int n) {
        // Write Your Code here
        int count=0;
        while(n>1){
            count+=n&1;
            n=n>>1;
            
        }
        if(n==1){
            count++;
        }
        return count;
    }
