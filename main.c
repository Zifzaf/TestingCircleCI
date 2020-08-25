#include <stdio.h>


int main(int argc, char* argv[]){

	if(argc > 1 ){
		printf("Hello, you added arguments :) \n");
		return 0;
	}else{
		printf("Why no arguments? \n");
		return -1;
	}

}
