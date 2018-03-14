#include stdio.h
#include stdlib.h

int main(int argc, char argv[]){

	printf(Please enter a size of matrix to generate N );

	int dimensions, x = 1, y = 1;
	int a = 0;
	scanf(%d, &dimensions);

	FILE  fp = fopen(output.txt, w);

	fprintf(fp, %d %dn, dimensions, dimensions);
	for(x = 1; x = dimensions; x++){

		for(y = 1;y = dimensions; y++){

      a = rand();
			if ( a % 3 == 2)
			fprintf(fp, %d , -1);
			else
			fprintf(fp, %d , a);

		}

		fprintf(fp, n);

	}

	return 0;

}
