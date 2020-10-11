#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl;


typedef vector<ll> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef map<int, int> mii;

const int KMX = 3e5 + 10, MOD = 1e9 + 7, INF = 2e9, NINF = -2e9;
//int dp[MX][MX];
//int in[MX];
//int a[KMX];
//int dp[KMX];
//bool s[KMX], c[KMX];



int main()
{
    //    ios_base::sync_with_stdio(false);cout<<fixed;cout<<setprecision(12);

    //* Do Not Rush *//

    int tc;
    cin>>tc;
    for(int t=1; t<tc+1; t++)
    {
        int start=-1,end=-1,s=-1,curmx,themx;
        int r;
        cin>>r;
        vi vec (r-1);
        for(auto &i : vec)
            cin>>i;
        curmx = -1;
        themx = 0;
        for(int i=0; i<r-1; i++)
        {

            if(curmx >= 0)
                curmx += vec[i];
            else
            {
                curmx =vec[i];
                s = i;
            }
            if(curmx >= themx)
            {
                themx = curmx;
                start = s;
                end = i;
            }

        }

        if(themx <=0)
            cout<<"Route "<<t<<" has no nice parts"<<endl;
        else
        {
            cout<<"The nicest part of route "<<t<<" is between stops "<<start+1<<" and "<<end+2<<endl;
        }

    }


    return 0;

}


