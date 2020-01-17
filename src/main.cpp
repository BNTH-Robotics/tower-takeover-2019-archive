// To complete the VEXcode V5 Text project upgrade process, please follow the
// steps below.
// 
// 1. You can use the Robot Configuration window to recreate your V5 devices
//   - including any motors, sensors, 3-wire devices, and controllers.
// 
// 2. All previous code located in main.cpp has now been commented out. You
//   will need to migrate this code to the new "int main" structure created
//   below and keep in mind any new device names you may have set from the
//   Robot Configuration window. 
// 
// If you would like to go back to your original project, a complete backup
// of your original (pre-upgraded) project was created in a backup folder
// inside of this project's folder.

// ---- START VEXCODE CONFIGURED DEVICES ----
/* Note, #include will basically copy and paste the contents
 * of the file(literally) during compile time
 * Header guards prevent code from being added a duplicate
 * amount of times. 
 * Basically, the previous state of main.cpp is what will be
 */
#include "motorDef.h"
// ---- END VEXCODE CONFIGURED DEVICES ----
#include "vex.h"
#include "speedDef.h"
#include "autonomous.h"
#include "pre_auton.h"
#include "usercontrol.h"
// /*----------------------------------------------------------------------------*/
// /*                                                                            */
// /*    Module:       main.cpp                                                  */
// /*    Author:       VEX                                                       */
// /*    Created:      Mon Mar 25 2019                                           */
// /*    Description:  V5 project                                                */
// /*                                                                            */
// /*----------------------------------------------------------------------------*/
// // Arcade Control 
// // This program instructs your robot to use remote control values to move the robot. 
// //
// // Robot Configuration: 
// // [Smart Port]    [Name]        [Type]           [Description]       [Reversed]
// // Motor Port 1    LeftMotor     V5 Smart Motor    Left side motor     false
// // Motor Port 10   RightMotor    V5 Smart Motor    Right side motor    true
// // Motor Port 8    ArmMotor      V5 Smart Motor    Arm motor           false
// // Motor Port 3    ClawMotor     V5 Smart Motor    Claw motor          false
// //
#include "vex.h"

using namespace vex;
// vex::pneumatics piston = vex::pneumatics(Brain.ThreeWirePort.A);
// 

vex::competition Competition;
   
//vex::pneumatics pusher    = vex::  ( vex::PORT4);
int main(){
    // Initializing Robot Configuration. DO NOT REMOVE!
    vexcodeInit();

    Competition.autonomous( autonomous );
    Competition.drivercontrol( usercontrol );
    //     
    //     //Run the pre-autonomous function. 
    pre_auton();
    //        
    //     //Prevent main from exiting with an infinite loop.                        
    while(1) 
    {
        vex::task::sleep(100);//Sleep the task for a short amount of time to prevent wasted resources.
    }   
}

