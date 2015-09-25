/*
 * ActuatorArms
 * Version 0.1.0 Aug, 2015
 * Version 1.0rc1 Sep, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Basic arms control.
 */

#include "ActuatorArms.h"

 /** CONSTRUCTORS **/

/**
 * Construct.
 */
ActuatorArms::ActuatorArms()
{
}

/** PUBLIC METHODS **/

/**
 * Attach the given pins.
 * @param pinLeft: pin where the left servo is connected.
 * @param pinRight: pin where the right servo is connected.
 */
void ActuatorArms::attach(int pinLeft, int pinRight)
{
	right_servo.attach(pinRight);
	left_servo.attach(pinLeft);
}

/**
 * Moves up the right arm.
 */
void ActuatorArms::moveRightUp()
{
	right_servo.write(180);
}

/**
 * Moves middle the right arm.
 */
void ActuatorArms::moveRightMiddle()
{
	right_servo.write(90);
}

/**
 * Moves down the right arm.
 */
void ActuatorArms::moveRightDown()
{
	right_servo.write(0);
}

/**
 * Moves up the left arm.
 */
void ActuatorArms::moveLeftUp()
{
	left_servo.write(180);
}

/**
 * Moves middle the left arm.
 */
void ActuatorArms::moveLeftMiddle()
{
	left_servo.write(90);
}

/**
 * Moves down the left arm.
 */
void ActuatorArms::moveLeftDown()
{
	left_servo.write(0);
}