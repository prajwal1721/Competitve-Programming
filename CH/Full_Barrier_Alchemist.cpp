    #include<iostream>
    using namespace std;
    int main()
    {
        // ios::sync_with_stdio(0);
        // cin.tie(0);
        int q;
        cin>>q;
        while(q--)
        {
            long long int count =0,b,hei;
        long long n,h,y1,y2,l;
        cin>>n>>h>>y1>>y2>>l;
        for(int i=0;i<n;i++)
            {
                cin>>b>>hei;
                if(b==1 )
                    {
                        if( (h-y1)<=hei && l)
                            count++;
                        else if(l)  
                        {
                            l--;count++;
                        }
                    }
                else if(b==2 ) 
                {
                    if(y2>=hei && l)
                        count++;
                    else if(l)
                    {
                        l--;count++;
                    }
                }
                else
                {

                }
            }
            if(l)
                cout<<count<<"\n";        
            else
                cout<<count-1<<"\n";        
        }
    }