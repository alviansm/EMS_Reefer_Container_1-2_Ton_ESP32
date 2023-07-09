#include "variables.h"

String fullData = "";

// [Time_Day, Time_Date, Time_Clock, SenseT1, SenseT2, SenseT3, SenseT4, SenseT5, SenseT6, SenseT7, SenseT8, SenseTH1, SenseRH, SenseCurrent1, SenseCurrent2, COP, Power, Uptime, ChargeTime, Charging]
String dummyFullData = "";
String mqtt_received_message = "";

void randomizeData() {
    String timeDay = "Kamis";
    String timeDate = "05/06/2023";
    String TimeClock = "07:24:30";
    String temp1 = String(0 + (rand() % 20));
    String temp2 = String(20 + (rand() % 38));
    String temp3 = String(0 + (rand() % 34));
    String temp4 = String(30 + (rand() % 28));
    String temp5 = String(30 + (rand() % 32));
    String temp6 = String(30 + (rand() % 68));
    String temp7 = String(30 + (rand() % 35));
    String temph = String(-22 + (rand() % 20));
    String relfh = String(0 + (rand() % 100));
    String current1 = String(0.00 + (rand() % 1));
    String current2 = String(0.00 + (rand() % 4));

    dummyFullData = "";
    dummyFullData.concat(timeDay);
    dummyFullData.concat(",");
    dummyFullData.concat(timeDate);
    dummyFullData.concat(",");
    dummyFullData.concat(TimeClock);
    dummyFullData.concat(",");
    dummyFullData.concat(temp1);
    dummyFullData.concat(",");
    dummyFullData.concat(temp2);
    dummyFullData.concat(",");
    dummyFullData.concat(temp3);
    dummyFullData.concat(",");
    dummyFullData.concat(temp4);
    dummyFullData.concat(",");
    dummyFullData.concat(temp5);
    dummyFullData.concat(",");
    dummyFullData.concat(temp6);
    dummyFullData.concat(",");
    dummyFullData.concat(temp7);
    dummyFullData.concat(",");
    dummyFullData.concat("");
    dummyFullData.concat(",");
    dummyFullData.concat(temph);
    dummyFullData.concat(",");
    dummyFullData.concat(relfh);
    dummyFullData.concat(",");
    dummyFullData.concat(current1);
    dummyFullData.concat(",");
    dummyFullData.concat(current2);
    dummyFullData.concat(",");
    dummyFullData.concat("2.00");
    dummyFullData.concat(",");
    dummyFullData.concat(String(0.00 + (rand() % 420)));
    dummyFullData.concat(",");
    dummyFullData.concat("1");
    dummyFullData.concat(",");
    dummyFullData.concat("14");
    dummyFullData.concat(",");
    dummyFullData.concat("1");
}