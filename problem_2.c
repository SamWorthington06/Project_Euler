#include <stdio.h>

int main(void){
	int current_num = 1;
	int next_num = 2;
	int temp = 0;

	int max_value = 4000000;

	int sum_of_even_nums = 2; //Start at 2 as i do not take into account the first 2 terms (2nd term is 2).

	for(int i = 0; i < 50; i++){
		temp = current_num + next_num;
		current_num = next_num;
		next_num = temp;

		if(next_num % 2 == 0 && next_num < max_value){
			sum_of_even_nums += next_num;
		}
		if(next_num > max_value){
			break;
		}
	}
	printf("Sum: %d", sum_of_even_nums);
}

//Answer: 4613732
