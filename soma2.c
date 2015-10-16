#include <stdio.h>

int soma(int nums[5], int tamanho){
	int total = 0;
	for (int i = 0; i < tamanho; ++i){
		total += nums[i];
	}
	return total;
}

int main(){
	int nums[5];
	nums[0] = 11;
	nums[1] = 19;
	nums[2] = 35;
	nums[3] = 14;
	nums[4] = 12;
	int total = soma(nums, 5);
	printf("%d\n", total);
}