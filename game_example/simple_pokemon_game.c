#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { NONE, GRASS, FIRE, WATER } Type;

struct pokemon {
	char name[20];
	char ability[20];
	int health;
	Type type;
};

typedef struct pokemon Pokemon;

int check_type(Type att, Type def);
int attack(Pokemon *att, Pokemon *def);
void print_pokemon(Pokemon *p);

int main()
{
	srand(time(NULL));
	Pokemon squirtle = { "Squirtle", "Water Gun", 50, WATER };
	Pokemon charmander = { "Charmander", "Ember", 50, FIRE };
	Pokemon bulbasaur = { "Bulbasaur", "Vine Whip", 50, GRASS };
	Pokemon *attacker = &squirtle;
	Pokemon *defender = &charmander;
	Pokemon *temp;
	int battle_result = 0;
	while (battle_result == 0) {
		print_pokemon(attacker);
		print_pokemon(defender);
		battle_result = attack(attacker, defender);
		temp = attacker;
		attacker = defender;
		defender = temp;
	}
	
}

int check_type(Type att, Type def) {
	if (att == def) {
		printf("It's not very effective...\n");
		return -1;
	}
	switch(att) {
		case GRASS:
			if (def == FIRE) {
				printf("It's not very effective...\n");
				return -1;
			}
			else if (def == WATER) {
				printf("It's super-effective!\n");
				return 1;
			}
			break;
		case WATER:
			if (def == GRASS) {
				printf("It's not very effective...\n");
				return -1;
			}
			else if (def == FIRE) {
				printf("It's super-effective!\n");
				return 1;
			}
			break;
		case FIRE:
			if (def == WATER) {
				printf("It's not very effective...\n");
				return -1;
			}
			else if (def == GRASS) {
				printf("It's super-effective!\n");
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int attack(Pokemon *att, Pokemon *def)
{
	printf("%s used %s!\n", att->name, att->ability);
	while(getchar() != '\n');
	int modifier = check_type(att->type, def->type);
	int damage = 1 + (rand() % 10);
	switch(modifier) {
		case 0:
			break;
		case -1:
			damage /= 2;
			break;
		case 1:
			damage *= 2;
			break;
		default:
			break;
	}
	printf("Deals %d damage\n", damage);
	while(getchar() != '\n');
	
	def->health -= damage;
	if (def->health <= 0) {
		printf("%s fainted!\n", def->name);
		while(getchar() != '\n');
		return 1;
	}
	return 0;
}

void print_pokemon(Pokemon *p) {
	printf("%s: %d HP\n", p->name, p->health);
}