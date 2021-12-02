#include "game_params.h"
#include "printer.h"
#include <stdio.h>

void print_stage(GameParams *game_params) {
	const char *letters[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
	for (int i = -1; i < game_params->x_value; ++i) {
		for (int j = -1; j < game_params->y_value; ++j) {
			if (i < 0 && j < 0) {
				printf(" y\\x \t");
			} else if (i < 0) {
				printf(" %d", j + 1);
			} else if (j < 0) {
				printf(" %s \t", letters[i]);
			} else {
				switch ( game_params->board[i][j] ) {
					case 0: printf(" \033[1;47;35mx\033[0m"); break;
					case 1: printf(" \x1B[31m1\033[0m"); break;
					case 2: printf(" \x1B[93m2\033[0m"); break;
					case 3: printf(" \x1B[32m3\033[0m"); break;
					case 11: printf(" \033[3;100;30m!\033[0m"); break;
					case 12: printf(" \033[3;44;30m@\033[0m"); break;
					case 13: printf(" \033[3;42;30m#\033[0m"); break;
					case 14: printf(" \033[3;43;30m$\033[0m"); break;
					case 15: printf(" \x1B[35m%%\033[0m"); break;
					case 16: printf(" \033[3;104;30m&\033[0m"); break;
					default: printf("x"); break;
				}
			}
		}
		if (i < 0 ) {
			printf("\n");
		}
		printf("\n");
	}
}

void print_scoreboard(GameParams *game_params) {
	printf("\nscore_board_array\n");
}
