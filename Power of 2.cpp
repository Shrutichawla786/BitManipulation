Q.Power of 2
code-->bool isPowerofTwo(long long n){
        
        // Your code here 
        if (n <= 0)
            return false;
        if((n & (n-1))==0){
            return 1;
        }
        else{
            return 0;
        }
        
    }
