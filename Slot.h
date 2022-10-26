//
//
//

#ifndef PROJETO_SCHEDULE_SLOT_H
#define PROJETO_SCHEDULE_SLOT_H
#include <string>

class Slot {
private:
    float start_hour;
    float duration;
    String week_day;
    String class_code;
    String subject;
    String type;
public:
    //constructor
    Slot(String cc,String subj,String wd,float st,float dur,String t);

    //getters
    float get_start();
    float get_duration();
    float get_end();
    String get_class();
    String get_subject();

    //setters
    void set_start(float s);
    void set_duration(float d);
    void set_class(String c);
    void set_subject(String s);
};


#endif //PROJETO_SCHEDULE_SLOT_H
