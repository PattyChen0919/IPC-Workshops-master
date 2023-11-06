#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define PASSWORD_SIZE 5
#define PASSWORD_ATTEMPT_SIZE 80

void updatePassword(char* password);
int enoughSpace(const char* inputString, int storageSize);

int main(void)
{
	char password[PASSWORD_SIZE] = "";
	updatePassword(password);


}


void updatePassword(const char* password)
{
	char passwordAttempt[PASSWORD_ATTEMPT_SIZE];
	printf("enter new password(at most %d characters):", PASSWORD_SIZE - 1); //cuz \0 at the end,need give a space for \0
	scanf("%s", passwordAttempt);

	//validate password attempt(size is ok)

	//if valid, update the password
	if (enoughSpace(passwordAttempt, PASSWORD_SIZE))
	{
		strcpy(password, passwordAttempt);
		printf("password update to %s", password); // for strcpy, password and passwordAttempt will be same
	}
	else
	{
		printf("password is too long\n");
	}
	return;
}


int enoughSpace(const char* inputString, int storageSize)
{
	int enough = 0;
	if (inputString != NULL && storageSize > strlen(inputString))
	{
		enough = 1;
	}
	return enough;
}