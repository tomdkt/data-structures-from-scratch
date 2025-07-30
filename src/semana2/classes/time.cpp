#include <iostream>
#include "./time.h"

using namespace std;

Time::Time(const int hour, const int minute, const int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

void Time::setHour(const int hour) {
    this->hour = hour;
}

void Time::setMinute(const int minute) {
    this->minute = minute;
}

void Time::setSecond(const int second) {
    this->second = second;
}


void Time::print() const {
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::nextSecond() {
    second += 1;
    if (second >= 60) {
        second = 0;
        minute++;
    }
    if (minute >= 60) {
        hour++;
        minute = 0;
    }
    if (hour >= 24) {
        hour = 0;
    }
}
