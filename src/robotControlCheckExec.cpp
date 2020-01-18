#include "robotControlCheckExec.h"

#include "controllerDef.h"
#include "speedDef.h"
#include "motorDef.h"
namespace control
{
    inline void joystickPosition()
    {
        // Drive Control
        // Set the left and right motor to spin forward using the controller's Axis position as the velocity value.
        // Since we are using a single joystick, we will need to calculate the final volicity for each motor.
        // (Axis3+Axis4)/2
        LeftMotor.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())/2, vex::velocityUnits::pct); 
        // (Axis3-Axis4)/2
        RightMotor.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())/2, vex::velocityUnits::pct);
    }

    inline void buttonAbuttonBclaw()
    {
        if(Controller1.ButtonA.pressing())
        {
            RightClaw.spin(vex::directionType::rev, ASpeedPCT, vex::velocityUnits::pct);
            LeftClaw.spin(vex::directionType::rev, ASpeedPCT, vex::velocityUnits::pct);
        }
        else if(Controller1.ButtonB.pressing())
        {
            RightClaw.spin(vex::directionType::fwd, ASpeedPCT, vex::velocityUnits::pct);
            LeftClaw.spin(vex::directionType::fwd, ASpeedPCT, vex::velocityUnits::pct);
        }
        else
        {
            RightClaw.stop(vex::brakeType::brake);
            LeftClaw.stop(vex::brakeType::brake);
        }
    }

    inline void buttonR1buttonR2()
    {
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
    }

    inline void buttonL1buttonL2()
    {
        if(Controller1.ButtonL1.pressing())
        {
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
    }

    inline void buttonUpbuttonDown()
    {
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
    }

    inline void buttonRight()
    {
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
