#include <iostream>

int main()
{
    printf("*******************************************************************\n");
    printf("****************** Welcome to my first program! *******************\n");
    printf("Convert a large number of seconds into hours, minutes, and seconds.\n");
    printf("*******************************************************************\n");
    printf("\nPlease enter a large number of seconds >> ");

    int Seconds;
    std::cin >> Seconds;

    int nSeconds = Seconds % 60;
    int Minutes = (Seconds / 60) % 60;
    int Hours = (Seconds / 3600);

    printf("Hours: %d, Minutes: %d, Seconds: %d\n", Hours, Minutes, nSeconds);

    return 0;
}
