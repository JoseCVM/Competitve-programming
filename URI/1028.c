int gcd(int u,int v){
	int shift;
	
	if (u == 0) return v;
	if (v == 0) return u;
	for (shift = 0; ((u | v) & 1) == 0; ++shift) {
		u >>= 1;
		v >>= 1;
	} 
	while ((u & 1) == 0)
		u >>= 1;
	
	do{
		
		while ((v & 1) == 0) 
			v >>= 1;
		
		if (u > v){
			int t = v; v = u; u = t; 
		}
		
		v = v - u;
	} while (v != 0);
	
	return u << shift;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a, b;
		scanf("%d %d",&a,&b);
		printf("%d\n",gcd(a,b));
	}
	return 0;
}
