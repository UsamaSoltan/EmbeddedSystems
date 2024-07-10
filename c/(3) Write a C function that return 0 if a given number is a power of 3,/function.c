int is_power_of_3(int n)
{int i;
    if(n<=0)
    {
        return 1;
    }
    else
    {
    for(i=0;n%3==0;i++)
    n/=3;
    }
    if(n==1)
    return 0;
    else
    return 1;
    }

