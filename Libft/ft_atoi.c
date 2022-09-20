#include<stdio.h>
#include<stdlib.h>

int ft_atoi(char *str){
	int i;
	int neg;
	int num;

	num = 0;
	i = 0;
	neg = 1;
	while((str[i] == 32)|| (str[i] <=13  && str[i] >= 9)){
		i++;
	}
	if(str[i] == '-'){
		neg = neg * (-1);
		i++;
	}
	else if (str[i] == '+'){
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9'){
		num = num * 10;
		num = num + str[i] - '0';
		i++;
	}
	num = num * neg;
	return (num);
}
int main(){
	char c [] = "  1234Miguel";

	printf("%d\n", ft_atoi(c));
	printf("%d\n",atoi(c));
}