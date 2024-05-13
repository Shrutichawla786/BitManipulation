Q.Bit Difference
code-->    int countBitsFlip(int a, int b){
        
        // Your logic here
        int ans = a^b;
        int count=0;
        while(ans>1){
            count+=ans&1;
            ans=ans>>1;
            
        }
        if(ans==1){
            count++;
        }
        return count;
        
    }
