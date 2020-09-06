#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 105;
int gg=1;
int pp=1;

int pr[N];
vector<int> primes;

void sieve() {
    int i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.pb(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
    }
}


int llp , lop , rv3;
bool check = false;
int n;

void lol(int i , vector<P>& v , int ffff , vector<P> numm , int x){

    gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
    if(i == n){
        if(numm.size()==0){
            return;
        }
        int j = 0;
        for(j = 0 ; j < numm.size() ;){
            gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
            if(v[numm[j].F].S  > ffff - numm[j].S){
                break;
            }
            ffff += v[numm[j].F].F;
            j++;
        }
        if(j == numm.size()){
            gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
            check = true;
            rv3 = min(rv3 , x);
        }else{
            if(llp < ffff){
                llp = ffff;
                gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
                lop = x;
            }else if(llp == ffff){
                lop = min(lop , x);
                gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
            }
        }
        return;
    }
    
    numm.pb({i , ffff + v[i].F});
    lol(i+1 , v , ffff + v[i].F ,numm, x);
    numm.pop_back();
    lol(i+1 , v , ffff ,numm,x+1);
}

int32_t main(){

    gg++;
    pp++;
    swap(gg,pp);

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; 
    for(int tc = 1 ; tc <= t; tc++)
    {

gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
        sieve();

        gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);

        cin>>n;
        vector<P> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i].F >> v[i].S;

            gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
        }
        llp = 0;
        lop = INT_MAX;
        rv3 = INT_MAX;
        check = false;
        lol(0 , v , 0 , {} , 0);
        cout<<"Case #"<<tc<<": ";
        if(check){
            gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
            cout<<rv3<<" nummEFINITELY\n";
        }else{
            gg++;
    pp++;
    swap(gg,pp);gg++;
    pp++;
    swap(gg,pp);
            cout<<lop<<" "<<llp<<"\n";
        }



    }
    return 0;
}