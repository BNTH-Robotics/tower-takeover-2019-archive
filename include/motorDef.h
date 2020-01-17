#ifndef TOWER_TAKEOVER_MOTOR_DEFINITIONS_H
#define TOWER_TAKEOVER_MOTOR_DEFINITIONS_H
#include "vex.h"
vex::motor LeftMotor     = vex::motor(vex::PORT1, false);
vex::motor RightMotor  = vex::motor(vex::PORT2, true);      
vex::motor RightClaw        = vex::motor(vex::PORT5, false);
vex::motor LeftClaw       = vex::motor(vex::PORT6, true);
vex::controller Controller1 = vex::controller();
vex::motor Ramp     = vex::motor(vex::PORT9, true);
vex::motor pusher = vex::motor(vex::PORT3,false);
vex::motor pusher2 = vex::motor(vex::PORT10,true);
vex::motor CupL = vex::motor(vex::PORT11,false);
vex::motor CupR = vex::motor(vex::PORT20,true);
vex::motor Lifter = vex::motor(vex::PORT19,false);


#endif
