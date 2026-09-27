#include <stdio.h> //printf(), scanf_s()
#include <Windows.h> //Sleep()
#include <stdlib.h> //rand(), srand()
#include <locale.h> //setlocale()
#include <time.h> //time
#include <math.h>

#define DOORS Sleep(1000); \
system("cls"); \
printf("--- --- ---\n"); \
for (int i = 0; i < 2; i++) { \
if (first_door == 1) printf("- - "); \
else printf("-X- "); \
if (second_door == 1) printf("- - "); \
else printf("-X- "); \
if (third_door == 1) printf("- -\n"); \
else printf("-X-\n"); } \
printf("--- --- ---\n");

#define COIN {while (turn < 3 && point < 2) { \
	rute = rand() % 2; \
	printf("Input the number of the side (0 or 1): "); \
	scanf_s("%d", &guess); \
	if (guess == rute) point++; \
	turn++;} \
    if (point > 1) {printf("Let's go!\n"); continue;} }

#define CUEFA {while (turn < 3 && point < 2) { \
	rute = rand() % 3; \
	printf("Input stone (0), scirsors (1) or paper (2): "); \
	scanf_s("%d", &guess); \
	if (guess == 0 && (rute == 0 || rute == 1)) point++; \
    if (guess == 1 && (rute == 1 || rute == 2)) point++; \
    if (guess == 2 && (rute == 2 || rute == 0)) point++; \
	turn++;} \
    if (point > 1) {printf("Let's go!\n"); continue;} }

#define OTHERGAME {rute = rand() % 101; \
    printf("Guess the number from 0 to 100 (+- 10): "); \
    scanf_s("%d", &guess); \
    if (fabs(guess - rute) <= 10) {printf("Let's go!\n"); continue;} }

#define MAGIC is_bad = rand() % 2; \
if (is_bad == 0) {printf("Let's go!\n"); continue;} \
is_game = rand() % 3; \
point = 0; turn = 0; \
if (is_game == 0) COIN; \
if (is_game == 1) CUEFA; \
if (is_game == 2) OTHERGAME;

int main() {
	//SetConsoleCP(CP_UTF8);
	//SetConsoleOutputCP(CP_UTF8);
	//setlocale(LC_ALL, "rus");
	srand(time(0));
	int level = 0, first_door = 1, second_door = 1, third_door = 1;
	int monster = 10, other = 80, exit = 10, behind_the_door_1, behind_the_door_2, behind_the_door_3, rute, is_bad, is_game;
	int lose = 0, win = 0, point = 0, turn = 0, prev = -2, guess, way;
	for (level = 0; level < 9; level++) {
		if (prev != level - 1) {
			first_door = 1; second_door = 1; third_door = 1;
			monster = 10 + 5 * level; other = 80 - 10 * level; exit = 10 + 5 * level;
			behind_the_door_1 = rand() % 100; behind_the_door_2 = rand() % 100; behind_the_door_3 = rand() % 100;
		}
		if (behind_the_door_1 < monster && behind_the_door_2 < monster && behind_the_door_3 < monster) {
			if (first_door == 1) behind_the_door_1 = 99;
			else if (second_door == 1) behind_the_door_2 = 99;
			else behind_the_door_3 = 99;
		}
		DOORS;
		if (first_door == 0 && second_door == 0 && third_door == 0) { lose = 1; break; }
		printf("Input the number of the door (1, 2 or 3): ");
		scanf_s("%d", &way);
		if (way == 1 && first_door == 1) {
			if (behind_the_door_1 < monster) { lose = 1; break; }
			else if (behind_the_door_1 < monster + exit) { win = 1; break; }
			else {
				MAGIC
				first_door = 0;
				prev = level;
				printf("Go back!\n");
			}
		}
		else if (way == 2 && second_door == 1) {
			if (behind_the_door_2 < monster) { lose = 1; break; }
			else if (behind_the_door_2 < monster + exit) { win = 1; break; }
			else {
				MAGIC
				second_door = 0;
				prev = level;
				printf("Go back!\n");
			}
		}
		else if (way == 3 && third_door == 1) {
			if (behind_the_door_3 < monster) { lose = 1; break; }
			else if (behind_the_door_3 < monster + exit) { win = 1; break; }
			else {
				MAGIC
				third_door = 0;
				prev = level;
				printf("Go back!\n");
			}
		}
		else { printf("Error"); return 0; }
		if (lose == 1 || win == 1) break;
	}
	if (lose == 1) printf("You lose!");
	else printf("Exit! You win!");
	return 0;}