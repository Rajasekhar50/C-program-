#include<stdio.h>
#include<time.h>
int main(){
    char buffer[80];
    time_t rawtime;
    struct tm *timeinfo;
    
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    
    strftime(buffer,sizeof(buffer),"%Y-%m-%d %H:%M%S", timeinfo);
    printf("Formatted Time: %s/n",buffer);
    
    return 0;
}