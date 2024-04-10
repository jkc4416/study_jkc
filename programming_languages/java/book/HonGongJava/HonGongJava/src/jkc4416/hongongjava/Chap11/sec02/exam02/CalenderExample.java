package jkc4416.hongongjava.Chap11.sec02.exam02;
import jkc4416.hongongjava.Chap7.sec01.exam07.pack2.C;

import java.util.*;

public class CalenderExample {
    public static void main(String[] args) {
        Calendar now = Calendar.getInstance();

        int year = now.get(Calendar.YEAR);
        int month = now.get(Calendar.MONTH) + 1;
        int day = now.get(Calendar.DAY_OF_MONTH);

        int week = now.get(Calendar.DAY_OF_WEEK);

        String strWeek = null;

        switch (week) {
            case Calendar.MONDAY:
                strWeek = "Mon";
                break;
            case Calendar.TUESDAY:
                strWeek = "Tues";
                break;
            case Calendar.WEDNESDAY:
                strWeek = "Wed";
                break;
            case Calendar.THURSDAY:
                strWeek = "Thurs";
                break;
            case Calendar.FRIDAY:
                strWeek = "Fri";
                break;
            case Calendar.SATURDAY:
                strWeek = "Sat";
                break;
            default:
                strWeek = "Sun";
        }

        int amPm = now.get(Calendar.AM_PM);
        String strAmPm = null;
        if(amPm == Calendar.AM) {
            strAmPm = "AM";
        } else {
            strAmPm = "PM";
        }

        int hour = now.get(Calendar.HOUR);
        int minute = now.get(Calendar.MINUTE);
        int second = now.get(Calendar.SECOND);

        System.out.print(year);
        System.out.print(month);
        System.out.println(day);
        System.out.print(strWeek);
        System.out.println(strAmPm);
        System.out.print(hour);
        System.out.print(minute);
        System.out.print(second);
    }
}
