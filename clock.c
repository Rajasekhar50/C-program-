#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#ifdef _WIN32
#include <windows.h> 
#else
#include <unistd.h>
#endif

int main() {
    time_t rawtime;
    struct tm *currentTime;


    while (1) {

        time(&rawtime);
        currentTime = localtime(&rawtime);

      
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif


        printf("Current Time: %02d:%02d:%02d\n",
               currentTime->tm_hour,
               currentTime->tm_min,
               currentTime->tm_sec);

       
        #ifdef _WIN32
        Sleep(1000); 
        #else
        sleep(1);    
        #endif
    }

    return 0;
}
