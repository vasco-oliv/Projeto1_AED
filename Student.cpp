//
// Created by vasco on 26-10-2022.
//

#include "Student.h"

//constructor
Student::Student(std::String n, int i, Schedule s){
    name=n;
    id_number=i;
    schedule=s;
}

//getters
String Student::get_name(){
    return name;
}
int Student::get_id_number(){
    return id_number;
}
Schedule get_schedule(){
    return schedule;
}

//setter
void set_schedule();