Q.Find position of set bit
code->nt findPosition(int n) {
        // code here
        int ans=0;
        int pos=0;
        int i=0;
        while(n>=1){
            i++;
            if(n%2!=0){
                ans++;
                pos=i;
            }
            n=n/2;
        }

        if(ans>1 ||ans ==0){
            return -1;
        }
        else{
            return pos;
        }
        
    }
