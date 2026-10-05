#include <iostream>
#include <windows.h>
#include <cstdio>

using namespace std;

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	FILE* file = nullptr;

	fopen_s(&file, "file.bin", "wb");

	int n = 100;

	fwrite(&n, sizeof(int), 1, file);

	fclose(file);




	return 0;
}