#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;
int main() {
    _setmode(_fileno(stdout),_O_U16TEXT);
   
   setlocale(LC_ALL,"");
   wcout<<L"♇ ♄ ♃ ℥ ℧"<<endl;
   wprintf(L"Ελληνικά");
}
