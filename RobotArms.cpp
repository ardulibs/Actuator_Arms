/*
 * RobotArms
 * Version 0.1.0 Aug, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Basic arms control.
 */

#include "RobotArms.h"

 /** CONSTRUCTORS **/

/**
 * Construct.
 */
RobotArms::RobotArms()
{
}

/** PUBLIC METHODS **/

/**
 * Attach the given pins.
 * @param pinLeft: pin where the left servo is connected.
 * @param pinRight: pin where the right servo is connected.
 */
void RobotArms::attach(int pinLeft, int pinRight)
{
	right_servo.attach(pinRight);
	left_servo.attach(pinLeft);
}

/**
 * Moves up the right arm.
 */
void RobotArms::moveRightUp()
{
	right_servo.write(180);
}

/**
 * Moves middle the right arm.
 */
void RobotArms::moveRightMiddle()
{
	right_servo.write(90);
}

/**
 * Moves down the right arm.
 */
void RobotArms::moveRightDown()
{
	right_servo.write(0);
}

/**
 * Moves up the left arm.
 */
void RobotArms::moveLeftUp()
{
	left_servo.write(180);
}

/**
 * Moves middle the left arm.
 */
void RobotArms::moveLeftMiddle()
{
	left_servo.write(90);
}

/**
 * Moves down the left arm.
 */
void RobotArms::moveLeftDown()
{
	left_servo.write(0);
}