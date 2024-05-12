Q.Bit Manipulation
code-->    void bitManipulation(int num, int i) {
        // your code here
        if((num&(1<<i-1))!=0){
            cout<<1;
        }
        else{
            cout<<0;
        }
        cout<<" "<<(num|(1<<i-1))<<" "<<(num &(~(1<<i-1)));

    }
