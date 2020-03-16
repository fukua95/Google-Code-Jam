#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 105;
const LL INF = 0x3f3f3f3f3f3f;
char str[MAXN];
int a[MAXN];
LL f[MAXN][2];
LL solve(){
	int n = strlen(str + 1);
	for(int i=1;i<=n;++i)
		a[i] = str[i] == '+' ? 1 : 0;
	for(int i=1;i<=n;++i)
		f[i][0] = f[i][1] = INF;
	f[0][1] = f[0][0] = 0;
	for(int i=0;i<n;++i){
		for(int j=0;j<2;++j){
			if(a[i + 1] == j){
				f[i+1][j] = min(f[i+1][j],f[i][j]);
				f[i+1][!j] = min(f[i+1][!j],f[i][j] + 1);
			}
			else{
				f[i+1][j] = min(f[i+1][j],f[i][j] + 2);
				f[i+1][!j] = min(f[i+1][!j],f[i][j] + 1);
			}
		}
	}
	if(f[n][1] == INF) f[n][1] = -1;
	return f[n][1];
}
int main(){
	freopen("B-large-practice.in","r",stdin);
	freopen("output.txt","w",stdout);
	int t,cas = 1;
	scanf("%d",&t);
	while(t--){
		scanf("%s",str + 1);
		printf("Case #%d: %lld\n",cas++,solve());
	}
	return 0;
}
