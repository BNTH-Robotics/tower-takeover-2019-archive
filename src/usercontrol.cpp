#include "controllerDef.h"
#include "motorDef.h"
#include "robotControlCheckExec.h"
#include "speedDef.h"
void usercontrol(void) 
{

    Controller1.Screen.clearScreen();
    Controller1.Screen.print("lets-e go!");
    Controller1.Screen.print("yote yote float the goat");

    LeftMotor.setVelocity(100, vex::velocityUnits::pct );
    RightMotor.setVelocity(100, vex::velocityUnits::pct );
    // Create an infinite loop so that the program can pull remote control values every iteration.
    /*
     * Polling input method for robot input
     * Polling is where a program loops constantly checking
     * if a certain input is pressed. If so, it will execute
     * the associated command.
     *
     * This is the fastest form of input control albeit resource
     * heavy compared to events. Since the robot only takes inputs, and responsiveness
     * is key, then polling trumpts the event based input.
     * The Vex API also has a preference to polling
     */
    while(true) 
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

