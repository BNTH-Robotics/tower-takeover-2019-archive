#include "vex.h"
#include "motorDef.h"
#include "autonomous.h"
void autonomous(void) 
{
    Brain.Screen.clearScreen();
    Brain.Screen.print("ye ye ye");
    Brain.Screen.newLine();
    Brain.Screen.print("I'm comming for that");
    Brain.Screen.newLine();
    Brain.Screen.print("Booty");


    //   // ..........................................................................
    //   // Insert autonomous user code here.
    //   // ....................................................................

    vex::task::sleep(1);

    vex::task::sleep(100);
    LeftMotor.spin(vex::directionType::fwd, 65,  vex::velocityUnits::pct);
    RightMotor.spin(vex::directionType::fwd, 65,  vex::velocityUnits::pct);
    LeftClaw.spin(vex::directionType::fwd, FSpeedPCT,  vex::velocityUnits::pct);
    RightClaw.spin(vex::directionType::fwd, FSpeedPCT,  vex::velocityUnits::pct);

    vex::task::sleep(1000);

    LeftMotor.spin(vex::directionType::fwd, 15,  vex::velocityUnits::pct);
    RightMotor.spin(vex::directionType::fwd, 15,  vex::velocityUnits::pct);
    LeftClaw.spin(vex::directionType::fwd, 160,  vex::velocityUnits::pct);
    RightClaw.spin(vex::directionType::fwd, 160,  vex::velocityUnits::pct);

    vex::task::sleep(2900);

    RightMotor.stop(vex::brakeType::brake);
    LeftMotor.stop(vex::brakeType::brake);
    RightClaw.stop(vex::brakeType::brake);
    LeftClaw.stop(vex::brakeType::brake);
    vex::task::sleep(10);

    LeftClaw.spin(vex::directionType::fwd, 160,  vex::velocityUnits::pct);
    RightClaw.spin(vex::directionType::fwd, 160,  vex::velocityUnits::pct);
    LeftMotor.spin(vex::directionType::fwd, -66,  vex::velocityUnits::pct);
    RightMotor.spin(vex::directionType::fwd, -66,  vex::velocityUnits::pct);
    vex::task::sleep(820);

    RightMotor.stop(vex::brakeType::brake);
    LeftMotor.stop(vex::brakeType::brake);
    RightClaw.stop(vex::brakeType::brake);
    LeftClaw.stop(vex::brakeType::brake);
    vex::task::sleep(10);

    LeftMotor.spin(vex::directionType::fwd, 125,  vex::velocityUnits::pct);
    RightMotor.spin(vex::directionType::fwd, -125,  vex::velocityUnits::pct);

    vex::task::sleep(700);

    RightMotor.stop(vex::brakeType::brake);
    LeftMotor.stop(vex::brakeType::brake);
    RightClaw.stop(vex::brakeType::brake);
    LeftClaw.stop(vex::brakeType::brake);
    vex::task::sleep(100);

    LeftMotor.spin(vex::directionType::fwd, 60,  vex::velocityUnits::pct);
    RightMotor.spin(vex::directionType::fwd, 60,  vex::velocityUnits::pct);

    vex::task::sleep(850);

    pusher.spin(vex::directionType::rev, 80, vex::velocityUnits::pct);
    pusher2.spin(vex::directionType::rev, 80, vex::velocityUnits::pct); 

    vex::task::sleep(1000);

    LeftClaw.spin(vex::directionType::fwd, -160,  vex::velocityUnits::pct);
    RightClaw.spin(vex::directionType::fwd, -160,  vex::velocityUnits::pct);

    vex::task::sleep(600);

    RightMotor.stop(vex::brakeType::brake);
    LeftMotor.stop(vex::brakeType::brake);
    RightClaw.stop(vex::brakeType::brake);
    LeftClaw.stop(vex::brakeType::brake);
    vex::task::sleep(100);

    //LeftMotor.spin(vex::directionType::fwd, 125,  vex::velocityUnits::pct);
    //RightMotor.spin(vex::directionType::fwd, -125,  vex::velocityUnits::pct);

    //vex::task::sleep(700);

    RightMotor.stop(vex::brakeType::brake);
    LeftMotor.stop(vex::brakeType::brake);
    RightClaw.stop(vex::brakeType::brake);
    LeftClaw.stop(vex::brakeType::brake);
    vex::task::sleep(100);

    pusher.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
    pusher2.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct); 

    vex::task::sleep(2000);

    RightClaw.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
    LeftClaw.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);

    vex::task::sleep(2000);

    RightMotor.stop(vex::brakeType::brake);
    LeftMotor.stop(vex::brakeType::brake);
    RightClaw.stop(vex::brakeType::brake);
    LeftClaw.stop(vex::brakeType::brake);
    vex::task::sleep(100);

    LeftMotor.spin(vex::directionType::fwd, -125,  vex::velocityUnits::pct);
    RightMotor.spin(vex::directionType::fwd, -125,  vex::velocityUnits::pct);

    vex::task::sleep(700);


    RightMotor.stop(vex::brakeType::brake);
    LeftMotor.stop(vex::brakeType::brake);
    RightClaw.stop(vex::brakeType::brake);
    LeftClaw.stop(vex::brakeType::brake);
    vex::task::sleep(100);

    /*LeftClaw.spin(vex::directionType::fwd, -160,  vex::velocityUnits::pct);
      RightClaw.spin(vex::directionType::fwd, -160,  vex::velocityUnits::pct);
      vex::task::sleep(800);*/

    /*
       vex::task::sleep(1000);

       LeftMotor.spin(vex::directionType::rev, FSpeedPCT,  vex::velocityUnits::pct);
       RightMotor.spin(vex::directionType::fwd, FSpeedPCT,  vex::velocityUnits::pct);

       vex::task::sleep(500);

       LeftMotor.spin(vex::directionType::fwd, FSpeedPCT,  vex::velocityUnits::pct);
       RightMotor.spin(vex::directionType::fwd, FSpeedPCT,  vex::velocityUnits::pct);

       vex::task::sleep(1300);

       CupR.spin(vex::directionType::fwd, HSpeedPCT, vex::velocityUnits::pct);

       vex::task::sleep(500);

       pusher.spin(vex::directionType::fwd, PSpeedPCT, vex::velocityUnits::pct);
       pusher2.spin(vex::directionType::fwd, PSpeedPCT, vex::velocityUnits::pct);

       vex::task::sleep(1000);

       LeftMotor.spin(vex::directionType::rev, FSpeedPCT,  vex::velocityUnits::pct);
       RightMotor.spin(vex::directionType::rev, FSpeedPCT,  vex::velocityUnits::pct);

       vex::task::sleep(1500);

       RightMotor.stop(vex::brakeType::brake);
       LeftMotor.stop(vex::brakeType::brake);
       */


}
