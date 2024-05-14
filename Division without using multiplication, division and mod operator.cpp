Q.Division without using multiplication, division and mod operator
code->long long divide(long long dividend, long long divisor) 
    {
        if(divisor==dividend){
            return 1;
        }
        
        bool si=true;
          if(dividend>=0 && divisor<0 ){
              si= false;
          }
        if(dividend<=0 && divisor>0 ){
              si= false;
        }
        long long n =abs(dividend);
        long long d= abs(divisor);
        
        long long q=0;
        while(n>=d){
            int count=0;
            while(n>=(d<<(count+1))){
                count++;
            }
            q+=1<<count;
            n-=(d<<count);
        }
        if(q==(1<<31) && si){
            return INT_MAX;
        }
        if(q==(1<<31) && !si){
            return INT_MIN;
        }
        return si? q:-q;
    }
