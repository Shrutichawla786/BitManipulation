Q.Binary number to decimal number
code->int binary_to_decimal(string str) {
        // Code here.
        int len= str.length();
        int num=0;
        int p=1;
        for(int i=len-1;i>=0;i--){
            if(str[i]=='1'){
                num= num+p;
                
            }
            p=p*2;
        }
        return num;
    }
