#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
int t;
cin>>t;
int l=t;
while(t--){
    double c,f,x;
    cin>>c>>f>>x;
    double rate=2.0;
    double tot_time=0,time,next_time,current_time;
    time= c/rate;
     next_time = (x/(rate+f))+ time;
    current_time = x/rate;
    while(next_time<current_time){
            rate+=f;
            tot_time += time;
    time = c/rate;
    next_time = (x/(rate+f))+ time;
    current_time = x/rate;

    /*if(next_time>=current_time)
            break;*/

    }printf("Case #%d: %.7lf\n",l-t,tot_time+current_time);

}    return 0;
}
