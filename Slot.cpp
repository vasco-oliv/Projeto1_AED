//
// Created by vasco on 26-10-2022.
//
#include "Slot.h"

//constructor
Slot::Slot(String cc,String subj,String wd,float st,float dur,String t){
    class_code=cc;
    subject=subj;
    start_hour=st;
    duration=dur;
    type=t;
    week_day=wd;
}

//getters
float Slot::get_start(){
    return start_hour;
}
float Slot::get_duration(){
    return duration;
}
float Slot::get_end(){
    return start_hour+duration;
}
String Slot::get_class(){
    return class_code;
}
String Slot::get_subject(){
    return subject;
}
String Slot::get_type(){
    return type;
}

//setters
void Slot::set_start(float s){
    start_hour=s;
}
void Slot::set_duration(float d){
    duration=d;
}
void Slot::set_class(String c){
    class_code=c;
}
void Slot::set_subject(String s){
    subject=s;
}
