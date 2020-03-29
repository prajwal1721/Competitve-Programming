// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll n,t,cn;cin>>n;cn=n;
        vector<ll> v;
        while (cn--)
        {
            cin>>t;v.push_back(t);
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll i=0,ans=0,cnt=0,mx=0;

        while(i<=n)
        {
            if(i==n){ans=max(ans,cnt);break;}
            // cout<<v[i]<<" ";
            if(cnt==0)mx=v[i];
            if(abs(mx-v[i]<=5)){cnt++;i++;mx=max(mx,v[i]);}
            else{ans=max(cnt,ans);ll t=i;mx=v[i];i=i-cnt+1;cnt=0;
                while(abs(mx-v[i])>5){i++;}
            }
        }

        cout<<ans<<"\n";
}

 /*
 100
1408 1397 1375 1350 1344 1390 1370 1428 1342 1386 1355 1417 1342 1397 1388 1366 1340 1358 1341 1343 1360 1390 1366 1407 1412 1407 1353 1413 1436 1421 1408 1391 1392 1405 1369 1393 1423 1380 1387 1390 1377 1348 1435 1423 1340 1366 1346 1416 1368 1377 1436 1372 1386 1355 1337 1418 1436 1350 1355 1346 1366 1427 1427 1392 1338 1351 1400 1358 1377 1422 1408 1400 1371 1381 1387 1408 1405 1339 1359 1404 1346 1363 1390 1360 1350 1402 1359 1348 1409 1402 1430 1400 1409 1422 1359 1392 1425 1360 1406 1437
*/       