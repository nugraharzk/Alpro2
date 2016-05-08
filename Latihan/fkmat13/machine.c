#include "header.h"

int rekursif(int input){
	if((input == 0) || (input == 1)){
		return 1;
	}else{
		return (input * rekursif(input-1));
	}
}