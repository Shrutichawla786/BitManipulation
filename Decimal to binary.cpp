Q.Decimal to binary
code->
  void toBinary(int n)
{
    // your code here
    int res=0;
    int i=1;
    while(n>0){
        int rem = n%2;
        res+=rem*i;
        i=i*10;
        
        n=n/2;
    }

    cout<<res;
        
}
