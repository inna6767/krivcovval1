
#include <stdio.h>
#include <locale.h>
int name();
int date();

int main()
{
	setlocale(LC_CTYPE, "RUS");
	name();
	date();
	return 3;
}



int name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("**************************************************************************");
	puts("*                                                                        *");
	puts("*Разработка консольного приложения Выполнил:Киселева А.П. и Кривцова И.А.*");
	puts("*                                                                        *");
	puts("**************************************************************************");
	return 1;
}

int date()
{
	puts(" _                _    _  ");
	puts("| |  |    |  |   | |  |_| ");
	puts("| |  |    |  |   | |  | | ");
	puts(" -                -    -  ");
	return 1;
}


