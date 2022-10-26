//
//
//
#ifndef PROJETO_SCHEDULE_STUDENT_H
#define PROJETO_SCHEDULE_STUDENT_H
#include <string>
#include "Schedule.h"

class Student {
private:
    const String name;
    const int id_number;
    Schedule schedule;
public:
    //constructor
    Student(String n, int i, Schedule s);

    //getters
    String get_name();
    int get_id_number();
    Schedule get_schedule();

    //setter
    void set_schedule();
};


#endif //PROJETO_SCHEDULE_STUDENT_H
