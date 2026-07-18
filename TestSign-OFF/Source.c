#include <stdlib.h>

int main() {
system("bcdedit /set testsigning off");
system("shutdown /r /t 0");
}
