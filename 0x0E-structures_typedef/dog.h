#ifndef DOG
#define DOG

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog, char, float, char);
void print_dog(struct dog *d);
#endif
