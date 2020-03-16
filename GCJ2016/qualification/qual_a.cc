#include <bits/stdc++.h>
#define LL long long
using namespace std;
bool have[10];
bool cal(LL n){
	if(n == 0) have[0] = true;
	while(n){
		int d = n % 10;
		have[d] = true;
		n /= 10;
	}
	for(int i=0;i<10;++i)
		if(!have[i]) return false;
	return true;
}
LL solve(LL n){
	memset(have,false,sizeof(have));
	LL now = 0;
	for(int i=1;i<1000;++i){
		now += n;
		if(cal(now)) return now;
	}
	return -1;
}
int main(){
//	freopen("A-small-practice.in","r",stdin);
	freopen("A-large-practice.in","r",stdin);
	freopen("output.txt","w",stdout);
	int t,cas = 1;
	scanf("%d",&t);
	while(t--){
		LL n;
		scanf("%lld",&n);
		LL ans = solve(n);
		printf("Case #%d: ",cas++);
		if(ans == -1) puts("INSOMNIA");
		else printf("%lld\n",ans);
	}
	return 0;
}
