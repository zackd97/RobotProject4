// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DoNothing.h"
#include "Commands/DriveWithJoystick.h"
#include "Commands/FrisbeeLoad.h"
#include "Commands/PushFrisbee.h"
#include "Commands/ReadyPosition.h"
#include "Commands/StartShootingWheel.h"
#include "Commands/TrackLift.h"
#include "Commands/TrackLower.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	shootingStick = new Joystick(2);
	
	trackDown = new JoystickButton(shootingStick, 5);
	trackDown->WhileHeld(new TrackLower());
	trackUp = new JoystickButton(shootingStick, 4);
	trackUp->WhileHeld(new TrackLift());
	loaderButton = new JoystickButton(shootingStick, 2);
	loaderButton->WhenPressed(new FrisbeeLoad());
	trigger = new JoystickButton(shootingStick, 1);
	trigger->WhileHeld(new StartShootingWheel());
	drivingStick = new Joystick(1);
	
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("TrackLift", new TrackLift());
	SmartDashboard::PutData("StartShootingWheel", new StartShootingWheel());
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	SmartDashboard::PutData("DriveWithJoystick", new DriveWithJoystick());
	SmartDashboard::PutData("TrackLower", new TrackLower());
	SmartDashboard::PutData("DoNothing", new DoNothing());
	SmartDashboard::PutData("PushFrisbee", new PushFrisbee());
	SmartDashboard::PutData("ReadyPosition", new ReadyPosition());
	SmartDashboard::PutData("FrisbeeLoad", new FrisbeeLoad());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getShootingStick() {
	return shootingStick;
}
Joystick* OI::getDrivingStick() {
	return drivingStick;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
