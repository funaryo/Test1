#include <stdio.h>
#define BUFFER_SIZE 102

int main(){
	char ch[BUFFER_SIZE]= "Kansai University";
	char ch2[BUFFER_SIZE+1] = "\0";
	char a = '*';
	int i = 0, j = 0;
	int b = 0;

	printf("�}���O�̕�����: %s\n",ch);
	printf("�ǂ̈ʒu�̕����̑O�ɑ}�����܂����H\n");
	scanf("%d", &b);	
	
	while( ch[i] != '\0'){
		
		
		if( j == b ){
			ch2[j] = a;
			j++;
		}else{
			ch2[j] = ch[i]; 
			i++;
			j++;
		}
	}
	printf("�}����̕�����:%s\n", ch2);
	scanf("%d", &b);	
    return 0;
}
