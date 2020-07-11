#include <stdio.h>

char buf[1];

void repeat(int depth, int prev) {
	if(depth == 3){
		printf("%s, ", buf);
		return ;
	}

	for(int i = prev; i < 10; i++){
		buf[depth] = '0' + i;
		repeat(depth + 1, i + 1);
	}
}

int	main() {
	repeat(0, 0);
}
