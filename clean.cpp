#include <stdlib.h>  

#ifdef _WIN32
  #include<windows.h>
#endif  

void ClearTerminal()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}