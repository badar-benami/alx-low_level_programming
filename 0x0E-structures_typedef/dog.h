#ifndef _DOG_H_
#define _DOG_H_

/**
 *  * dog_t --- struct dog typedef.
 *   */
typedef struct dog dog_t;

/**
 *  * struct dog --- struct containing information about a dog.
 *   * @name: the name of the dog.
 *    * @age: the age of the dog.
 *     * @owner: the dog's owner.
 *      *
 *       * Description: "dog" is a struct that holds its name and age
 *        * and the name of its owner.
 *         */
struct dog
{
		char *name;
			float age;
				char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif#ifndef _DOG_H_
#define _DOG_H_

/**
 *  * dog_t --- struct dog typedef.
 *   */
typedef struct dog dog_t;

/**
 *  * struct dog --- struct containing information about a dog.
 *   * @name: the name of the dog.
 *    * @age: the age of the dog.
 *     * @owner: the dog's owner.
 *      *
 *       * Description: "dog" is a struct that holds its name and age
 *        * and the name of its owner.
 *         */
struct dog
{
		char *name;
			float age;
				char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
