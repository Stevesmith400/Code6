#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    cin>>T;
    while(T--){
       int N,T=0,D=0,R=0;
       cin>>N;
       string S;
       cin>>S;
       int A[N];
       for (int i = 0; i < N; i++) {cin>>A[i];
            if(S[i]-'0'==1) { T=i;D++;}
           
       }
       vector <int> V;
       for (int i = 0; i <= T; i++) {
           V.push_back(A[i]);}
           sort(V.begin(), V.end(), greater<int>());
           for (int i = 0; i < D; i++) {
               R=R+V[i];}
               cout<<R<<endl;
    }

    return 0;
}
