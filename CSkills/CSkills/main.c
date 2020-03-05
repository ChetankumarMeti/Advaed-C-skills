#include<stdio.h>
#include<string.h>

void ptp();

int main(int argc, char **argv) {

	char str_var[] = "CSkills";
	char* stp = str_var;
	//printf("%s %p %p\n", str_var, *stp, stp);
	printf("%d %d %d\n", sizeof(str_var), sizeof(*stp), sizeof(stp));
	printf("%d\n",argc);// number of arguments(argument counter)
	printf("%s\n", argv[0]);// Base address of arguments
	/*
	for (int i = 0; i < argc; i++) {
		int len = strlen(argv[i]);
		printf("%s\n", argv[i]);
		for (int j = 0; j < len; j++)
			printf("%c\n", argv[i][j]);
	}
	*/

	ptp();
	return 0;
}
void ptp() {
	/*
	int x = 10, *pt = &x, **ptrp = &pt;
	printf("%p %d\n", &x, x);
	printf("%p %p %d\n", &pt, pt, *pt);
	printf("%p %p %p %d\n", &ptrp, ptrp, *ptrp, **ptrp);
	*/
	int arr[] = {1,2,3,4,5};
	int* pt = arr;

}