#include <stdlib.h>
#include <locale.h>
void name();
void date();

void main()

{

	name();

	date();


}


void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("     * * * * * * * * * * * * * * * * * * * * * * * *");
	puts("     *	                                           *");
	puts("     *   Тема: Разработка консольного приложения   *");
	puts("     *   Выполнили Самохина В.Е. и Нетёсова М.С.   *");
	puts("     *	                                           *");
	puts("     * * * * * * * * * * * * * * * * * * * * * * * *");
};

void date()
{
	puts("        __    __  __    __   __ ");
	puts("     /|   |  |  | __|  |  | |__|");
	puts("      |   |. |__| __|. |__| |__|");
};


