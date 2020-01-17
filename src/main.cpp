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
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

#include "autonomous.h"
using namespace vex;


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
void pre_auton( void ) 
{
    //   // All activities that occur before the competition starts
    //   // Example: clearing encoders, setting servo positions, ...
    //     
}   
// 

// 

void usercontrol( void ) 
{

    Controller1.Screen.clearScreen();
    Controller1.Screen.print("lets-e go!");

    LeftMotor.setVelocity(100, vex::velocityUnits::pct );
    RightMotor.setVelocity(100, vex::velocityUnits::pct );
    // 
    //      
    //     


    //     // Create an infinite loop so that the program can pull remote control values every iteration.
    //     // This loop causes the program to run forever.
    while(1) 
    {
        //       // Drive Control
        //       // Set the left and right motor to spin forward using the controller's Axis position as the velocity value.
        // Since we are using a single joystick, we will need to calculate the final volicity for each motor.
        //     
        // (Axis3+Axis4)/2
        LeftMotor.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())/2, vex::velocityUnits::pct); 
        // (Axis3-Axis4)/2
        RightMotor.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())/2, vex::velocityUnits::pct);

        // 
        //   
        // 
        // 
        // 
        // 
        if(Controller1.ButtonA.pressing())
        {
            RightClaw.spin(vex::directionType::rev, ASpeedPCT, vex::velocityUnits::pct);
            LeftClaw.spin(vex::directionType::rev, ASpeedPCT, vex::velocityUnits::pct);
        }
        // 
        else if(Controller1.ButtonB.pressing())
        {
            RightClaw.spin(vex::directionType::fwd, ASpeedPCT, vex::velocityUnits::pct);
            LeftClaw.spin(vex::directionType::fwd, ASpeedPCT, vex::velocityUnits::pct);
        }
        // 
        else
        {
            RightClaw.stop(vex::brakeType::brake);
            LeftClaw.stop(vex::brakeType::brake);
        }
        //   

        //If button up pressed, activate
        //if( Controller1.ButtonY.pressing() ) {
        //piston.set(true);
        //}
        //Otherwise don’t activate
        //else {
        //piston.set(false);
        //}

        // 
        // 


        if(Controller1.ButtonR2.pressing())
        {
            pusher.spin(vex::directionType::fwd, PSpeedPCT, vex::velocityUnits::pct);
            pusher2.spin(vex::directionType::fwd, PSpeedPCT, vex::velocityUnits::pct);
        }

        else if (Controller1.ButtonR1.pressing())
        {
            pusher.spin(vex::directionType::rev, PSpeedPCT, vex::velocityUnits::pct);
            pusher2.spin(vex::directionType::rev, PSpeedPCT, vex::velocityUnits::pct); 
        }    
        else 
        {
            pusher.stop(vex::brakeType::brake);
            pusher2.stop(vex::brakeType::brake);
        }   


        if(Controller1.ButtonL1.pressing()){
            CupR.spin(vex::directionType::fwd, PSpeedPCT, vex::velocityUnits::pct);
            CupL.spin(vex::directionType::fwd, PSpeedPCT, vex::velocityUnits::pct);;
        }

        else if (Controller1.ButtonL2.pressing())
        {
            CupR.spin(vex::directionType::rev, PSpeedPCT, vex::velocityUnits::pct);
            CupL.spin(vex::directionType::rev, PSpeedPCT, vex::velocityUnits::pct); 
        }    
        else 
        {
            CupR.stop(vex::brakeType::brake);
            CupL.stop(vex::brakeType::brake);
        }   



        if(Controller1.ButtonUp.pressing())
        {
            Lifter.spin(vex::directionType::fwd, HSpeedPCT, vex::velocityUnits::pct);
        }

        else if (Controller1.ButtonDown.pressing())
        {
            Lifter.spin(vex::directionType::rev, HSpeedPCT, vex::velocityUnits::pct); 
        }    
        else 
        {
            Lifter.stop(vex::brakeType::brake);
        }   

        if(Controller1.ButtonRight.pressing())
        {
            pusher.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
            pusher2.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct); 

            vex::task::sleep(2000);

            RightClaw.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
            LeftClaw.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);

            vex::task::sleep(2000);

        }
        else 
        {
            pusher.stop(vex::brakeType::brake);
            pusher2.stop(vex::brakeType::brake);
            RightClaw.stop(vex::brakeType::brake);
            LeftClaw.stop(vex::brakeType::brake);
        }   


    }
}

// 
//vex::pneumatics pusher    = vex::  ( vex::PORT4);
// 
// 
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

