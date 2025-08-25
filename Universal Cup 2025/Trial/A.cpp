#include<bits/stdc++.h>

int main(){
	FILE *fp;
	char c;

	fp = fopen(__FILE__, "r");
	
	while(	(c=getc(fp)) != EOF){
		putchar(c);
	}

	return 0;
}