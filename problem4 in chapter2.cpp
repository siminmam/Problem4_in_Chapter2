#include <iostream>
using namespace std;
int main()
{
    const int SECONDS_TO_HOURS=3600;
    const int SECONDS_TO_MINUTE=60;
    int seconds;
    int minute;
    int hours;
    cout<<"\n Enter the game seconds:";
    cin>>seconds;
    minute=seconds/60;
    cout<<"\n The minute game is:"<<minute;
    hours=seconds/3600;
    cout<<"\n The hourse game is :"<<hours;
    return 0;
}