#include "Contact.h"
//init everything is 0
void InitContact(struct contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size=0;    
}
//add contact
void AddContact(struct contact* ps)
{
	if(ps->size==MAX)
	{
		printf("Your contact is full!\n");
	}
	else 
	{
		printf("input your name:");
		scanf("%s",ps->data[ps->size].name);
		printf("input your gender:");
		scanf("%s",ps->data[ps->size].gender);
		printf("input your age:");
		scanf("%d",&(ps->data[ps->size].age));
		printf("input your telephone number:");
		scanf("%s",ps->data[ps->size].tele);
		printf("input your address:");
		scanf("%s",ps->data[ps->size].addr);
		
		ps->size++;
		printf("Added success!\n\n");
		printf("you have added %d contact\n",ps->size);
	}
}

void ShowContact(const struct contact* ps)
{

	if(ps->size==0)
	{
		printf("Your contact is empty!\n");
	}
	else 
	{
		int i;
		printf("%-10s\t%-10s\t%-4d\t%-20s\t%-20s\n\n","Name","Gender","Age","Telephone","Address");
		for(i=0;i<ps->size;i++)
		{
			printf("%-10s\t%-10s\t%-4d\t%-20s\t%-20s",
			ps->data[i].name,
			ps->data[i].gender,
			ps->data[i].age,
			ps->data[i].tele,
			ps->data[i].addr
			);
			printf("\n");
		}
	}
}