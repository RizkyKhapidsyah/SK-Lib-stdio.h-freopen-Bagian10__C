#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

FILE* stream;

int main(void) {
    stream = freopen("freopen.out", "w", stderr);

    if (stream == NULL) {
        fprintf(stdout, "error on freopen\n");
    } else {
        fprintf(stdout, "successfully reassigned\n"); fflush(stdout);
        fprintf(stream, "This will go to the file 'freopen.out'\n");
        fclose(stream);
    }

    system("type freopen.out");

    _getch();
    return 0;
}