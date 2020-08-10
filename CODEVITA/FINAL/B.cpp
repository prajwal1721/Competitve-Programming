#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define R 6371
typedef long double ld;
long double calDistance(double latitude1,double longitude1,double latitude2,double longitude2){
    latitude1 = (((M_PI) / 180) * latitude1); 
    longitude1 = (((M_PI) / 180) * longitude1);
    latitude2 = (((M_PI) / 180) * latitude2);
    longitude2 = (((M_PI) / 180) * longitude2);
    
    // Haversine Formula 
    ld diffLong = longitude2 - longitude1; 
    ld diffLat = latitude2 - latitude1; 
    ld ans  = pow(sin(diffLat / 2), 2);
    ans+=cos(latitude2)*cos(latitude1)*pow(sin(diffLong / 2), 2); 
    ans = 2 * asin(sqrt(ans))*R;   
    return ans*ans; 
}

void solve()
{   
    int n,t1;cin>>n;
    double t;
    vector<double> latitudes, longitudes;
    vector<int > height;
    for(int i=0;i<n;i++)
        {cin>>t;latitudes.push_back(t);}
    for(int i=0;i<n;i++)
        {cin>>t;longitudes.push_back(t);}
    for(int i=0;i<n;i++)
        {cin>>t1;height.push_back(t1);}
    double mylatitude, mylongitude;
        cin>>mylatitude>>mylongitude;
    int ans=0;
    for(int i=0;i<n;i++){
        long double distance=calDistance(latitudes[i],longitudes[i],mylatitude,mylongitude);
        long double range=2*R*height[i]+height[i]*height[i];
        // cout<<distance<<" "<<range<<"\n";
        // checl if distance is less than range
        if(distance<=range)ans++;
    }
    cout<<ans<<'\n';
}


int main()
{ 
    // cout<<"Hi test complete\n";
        solve();
    return 0;
}