#ifndef DOG
#define DOG
/**
 * struct dog - dogs structure.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
