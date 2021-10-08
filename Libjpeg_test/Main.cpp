#include <stdio.h>
#include "../LibJPEG/Header/jpeglib.h"
int main(){
	printf("hello");
	// just to test whether I am able to call API or not 
	j_compress_ptr data;
	bool write_all_tables;
	jpeg_start_compress(data,write_all_tables);
	return 0;
}