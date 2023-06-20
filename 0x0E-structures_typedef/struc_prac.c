#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name; char *email; int age)
{
	struct User *user;

	user->name = name;
	user->email = email;
	user->age = age;

	return user;
}
