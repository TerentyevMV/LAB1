#include <locale.h>

#include <stdio.h>
int main()

{

	setlocale(LC_ALL, ".UTF-8"); // для переключения русской кодировки

	puts("моя программа"); // вывод строки

	getchar(); // задержка экрана

	return 5;

}