#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL qp(LL x,LL y){
	LL res = 1;
	for(;y>0;y>>=1){
		if(y & 1) res = res * x;
		x = x * x;
	}
	return res;
}
int main(){
	freopen("D-small-practice.in","r",stdin);
	freopen("output.txt","w",stdout);
	int t,cas = 1;
	scanf("%d",&t);
	while(t--){
		int k,c,s;
		scanf("%d %d %d",&k,&c,&s);
		printf("Case #%d: ",cas++);
		LL len = qp(k,c - 1);
//		printf("len = %lld\n",len);
		for(int i=0;i<k;++i){
			printf("%lld",len * i + 1);
			if(i == k - 1) puts("");
			else printf(" ");
		}
	}
	return 0;
}
