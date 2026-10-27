class Solution {
public:
int findDayofYear(string date, vector<int>&SumMonthDays){
    int month = stoi(date.substr(0,2));
    int day = stoi(date.substr(3));

    return SumMonthDays[month-1] + day;
}
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
    vector<int> MonthDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    vector<int> SumMonthDays(13,0);

    SumMonthDays[1] = 31;
    for(int i = 2; i < 13; i++){
        SumMonthDays[i] = SumMonthDays[i-1] + MonthDays[i-1];
    }

    int arriveAliceDay = findDayofYear(arriveAlice, SumMonthDays);
    int leaveAliceDay = findDayofYear(leaveAlice, SumMonthDays);
    int arriveBobDay = findDayofYear(arriveBob, SumMonthDays);
    int leaveBobDay = findDayofYear(leaveBob, SumMonthDays);
 
    int DaysTogether = min(leaveBobDay, leaveAliceDay) - max(arriveBobDay,arriveAliceDay) +1;

    return DaysTogether < 0 ? 0 : DaysTogether;
    }
};