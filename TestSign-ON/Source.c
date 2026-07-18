#include <stdlib.h>

int main() {
system("bcdedit /set testsigning on");
system("shutdown /r /t 0");
}