int findComplement(int num) 
    {
        
        int mask=num;
        int i=0;
        if(num==0)
        {
            return 1;
        }
        while(mask!=0)
        {
            mask=mask>>1;
            i++;
        }
        for(int j=0;j<i;j++)
        {
            mask=mask<<1;
            mask=(mask|1);
        }
        num=~num;
        return num&mask;
    }