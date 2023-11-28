#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int count[100]= {0},cout;
	printf("Nhap vao 1 chuoi: ");
	scanf("%s",&str);
	for(int i=0;i<strlen(str);i++){
		if(str[i] == ' '){
			continue;
		}
		cout=1;
		for(int j=i+1;j<strlen(str);j++){
			if(str[i]==str[j]){
				cout++;
				count[j]=1;
			}
		}
		if(count[i]==0){
			printf("%c: %d\n",str[i],cout);
		}
	}
}
	

