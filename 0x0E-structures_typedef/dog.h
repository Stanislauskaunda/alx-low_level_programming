#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - a dog's basic info
 *
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
 */

struct dog

{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 *
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
