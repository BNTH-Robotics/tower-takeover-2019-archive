#include "controllerDef.h"
#include "motorDef.h"
#include "robotControlCheckExec.h"
#include "speeDef.h"
void usercontrol(void) 
{

    Controller1.Screen.clearScreen();
    Controller1.Screen.print("lets-e go!");
    Controller1.Screen.print("yote yote float the goat");

    LeftMotor.setVelocity(100, vex::velocityUnits::pct );
    RightMotor.setVelocity(100, vex::velocityUnits::pct );
    // Create an infinite loop so that the program can pull remote control values every iteration.
    // This loop causes the program to run forever.
    while(1) 
    {
        
        control::joystickPosition(); 
        control::buttonAbuttonBclaw(); 
        //If button up pressed, activate
        //if( Controller1.ButtonY.pressing() ) {
        //piston.set(true);
        //}
        //Otherwise don’t activate
        //else {
        //piston.set(false);
        //}
        control::buttonR1buttonR2();
        control::buttonL1buttonL2();  
        control::buttonUpbuttonDown();
        control::buttonRight(); 
    }
}

