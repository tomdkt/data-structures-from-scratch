#ifndef TIME_H
#define TIME_H

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int hour, int minute, int second);

    int getHour() const;

    void setHour(int hour);

    int getMinute() const;

    void setMinute(int minute);

    int getSecond() const;

    void setSecond(int second);

    void print() const;

    void nextSecond();
};

#endif //TIME_H
