#include <string.h>
#include <stdio.h>
#define MAX 1000
#define MAX_NAME 10
#define MAX_GENDER 6
#define MAX_TELE 11
#define MAX_ADDR 20

struct PeoInfo{
	char name[MAX_NAME];
	char gender[MAX_GENDER];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct contact{
	struct PeoInfo data[MAX];
	int size;
};

void InitContact(struct contact* ps);
void AddContact(struct contact* ps);
void ShowContact(const struct contact* ps);