#include <iostream>
#include <string>
using namespace std;

class Rain{
    public:
        int year, month, date;
        string dow;
        string weather;
    
    Rain(int year = 9999, int month = 0, int date = 0, string dow = " ", string weather = " ")
    :year(year), month(month), date(date), dow(dow), weather(weather){}
};

int main() {
    int n;
    cin>>n;
    char dash1, dash2;


    Rain rain[101];
    Rain c_rain=rain[0];
    
    for(int i=0; i<n; i++){
        cin >> rain[i].year >> dash1 >> rain[i].month >> dash2 >> rain[i].date >> rain[i].dow >> rain[i].weather;
        if(rain[i].year-2026<c_rain.year-2026 && rain[i].weather=="Rain"){
            c_rain=rain[i];
        }
    }
    printf("%d-%02d-%02d %s %s\n", c_rain.year, c_rain.month, c_rain.date, c_rain.dow.c_str(), c_rain.weather.c_str());

    // Please write your code here.
    return 0;
}