#include <stdio.h>

int main(int argc, char *argv[])
{
	char path[256] = { 0 };
	FILE *f;

	snprintf(path, sizeof(path) - 1, "%s/consts.asm", argv[1]);
	f = fopen(path, "w");
	fprintf(f, "AAAAA equ 111");
	fclose(f);

	return 0;
}
