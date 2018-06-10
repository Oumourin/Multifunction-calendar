#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>

void mainMenu();
void returnMenu();
void choiceMenu();
void sonMenu();
int getDate(int y, int m);
void printDate(int y, int m);
int LunarCalendar(int year, int month, int day);
int isYear(int year);
int getDayOfMonth(int year, int month);
int getTotalDay(int year1, int month1, int day1, int year2, int month2, int day2);
void CaculateWeekDay(int y, int m, int d);
void searchDate();
void getLeap();
void getLunar();
void getThrottle();
void getStatistics();
int getBirthday();
void ftw();
void getInformation();
void lanurToNew();
void choiceLunar();
void getHoliday();


extern unsigned int LunarCalendarDay;
extern unsigned int LunarCalendarTable[199];
extern int MonthAdd[12];
extern int DATAS[][17];
extern int MONTH_DAYS[];
extern int DAYS_MONTH[][12];





