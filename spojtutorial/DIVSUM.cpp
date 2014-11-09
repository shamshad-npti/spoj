#include <stdio.h>
#include <math.h>

int main() {
	int t, i, j, k, m, n, s, ans;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		m = n;
		s =	sqrt(n);
		ans = 1;
		for(i = 2; i <= s && n >= i; i++) {
			if(n % i == 0) {
				j = 1;
				k = i;
				while(n % i == 0) {
					n /= i;
					j += k;
					k *= i;
				}
				ans = ans * j;
			}
		}
		if(n != 1) { ans = ans * (n + 1); }
		printf("%d\n", ans - m);
	}
	return 0;
}
