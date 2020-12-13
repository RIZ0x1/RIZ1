#include <stdio.h>
#include <stdlib.h>

void	dec_to_bin(short dec, short* word);
void	create_codeword(short*, short*, short*);
short	codeword_analysis(short*, short*);
void	codeword_correction(short*, short);

void	show_the_codeword(short*); // FOR DEBUGING
void	show_the_word(short*);	// *
void	show_control_bits(short*); // *

int	main(int argc, char **argv) {
	short	word[16];
	short	codeword[21];
	short	R[5];
	short	number;
	
	number = (short)atoi(argv[1]);

	dec_to_bin(number, word);
	create_codeword(word, codeword, R);
	codeword_analysis(codeword, R);
	show_the_codeword(codeword);
	show_the_word(word);
	show_control_bits(R);

	return 0;
}

void dec_to_bin(short dec, short* word) { // Переводит число из десят. сист. в двоичную
	short *p = &word[15];
	unsigned short x = 32768;

	while (p >= word) { 		  // Пока p не будет указывать на начало word 
		if (x & dec)	*p = 1;
		else		*p = 0;

		x = x >> 1;
		p--;
	}
}

void create_codeword(short* word, short* codeword, short* R) { // Создает кодовое слово
	short *p = word;
	unsigned short bit = 1;

	for (short i = 0; i < 21; i++) {
		if (bit & (i + 1)) {
			bit = bit << 1;
		}
		else {
			codeword[i] = *p;
			p++;
		}
	}


	R[0] =	((codeword[2] + codeword[4] + codeword[6] + codeword[8] + codeword[10]
		+ codeword[12] + codeword[14] + codeword[16] + codeword[18] + codeword[20])
		% 2) != 0;

	R[1] =	((codeword[2] + codeword[5] + codeword[6] + codeword[9] + codeword[10]
		+ codeword[13] + codeword[14] + codeword[17] + codeword[18])
		% 2) != 0;

	R[2] =	((codeword[4] + codeword[5] + codeword[6] + codeword[11] + codeword[12]
		+ codeword[13] + codeword[14] + codeword[19] + codeword[20])
		% 2) != 0;

	R[3] =	((codeword[7] + codeword[8] + codeword[9] + codeword[10] + codeword[11]
		+ codeword[12] + codeword[13] + codeword[14])
		% 2) != 0;

	R[4] =	((codeword[15] + codeword[16] + codeword[17] + codeword[18] + codeword[19]
		+ codeword[20])
	  	% 2) != 0;

	codeword[0] = R[0];
	codeword[1] = R[1];
	codeword[3] = R[2];
	codeword[7] = R[3];
	codeword[15] = R[4];
}

short codeword_analysis(short* codeword, short* R) {
	short conditions[5];

	conditions[0] = ((codeword[2] + codeword[4] + codeword[6] + codeword[8] + codeword[10]
			+ codeword[12] + codeword[14] + codeword[16] + codeword[18] + codeword[20])
			% 2) != 0;

	conditions[1] = ((codeword[2] + codeword[5] + codeword[6] + codeword[9] + codeword[10]
			+ codeword[13] + codeword[14] + codeword[17] + codeword[18])
			% 2) != 0;
	
	conditions[2] = ((codeword[4] + codeword[5] + codeword[6] + codeword[11] + codeword[12]
			+ codeword[13] + codeword[14] + codeword[19] + codeword[20])
			% 2) != 0;

	conditions[3] =	((codeword[7] + codeword[8] + codeword[9] + codeword[10] + codeword[11]
			+ codeword[12] + codeword[13] + codeword[14])
			% 2) != 0;

	conditions[4] = ((codeword[15] + codeword[16] + codeword[17] + codeword[18] + codeword[19]
			+ codeword[20])
	  		% 2) != 0;


	for (short i = 0; i < 5; i++) {
		if (!(R[i] == conditions[i])) {
			printf("Error: found wrong control bit: %d \n", i);
			codeword_correction(codeword, i);

			if (codeword_analysis(codeword, R)) {
				printf("Info: the wrong bit was fixed \n");
				show_the_codeword(codeword);
				return 1;
			}
			else {
				printf("Error: fixing the wrong bit failed \n");
				return 0;
			}
		}
	}

	return 1;
}

void codeword_correction(short* codeword, short wrong_bit) {
	printf("CORRECTION \n");
}

void show_the_codeword(short* codeword) {
	printf("codeword: ");

	for (short i = 0; i < 21; i++)
		printf("%d", *(codeword + i));
	printf("\n");
}

void show_the_word(short* word) {
	printf("word: ");

	for (short i = 0; i < 16; i++)
		printf("%d", *(word + i));
	printf("\n");
}

void show_control_bits(short* R) {
	printf("R: ");

	for (short i = 0; i < 5; i++)
		printf("%d", *(R + i));
	printf("\n");
}




