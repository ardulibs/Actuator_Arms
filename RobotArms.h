/*
 * RobotArms
 * Version 0.1.0 Aug, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Basic wheels control.
 */

#ifndef RobotArms_h
#define RobotArms_h
#define LIBRARY_VERSION	 0.1

#include <Servo.h>

// Class RobotArms
class RobotArms {
 
	/** Public elements. **/
	public:
	
		/**
		 * Construct.
		 */
		RobotArms();
	
		/**
		 * Attach the given pins.
		 * @param pinLeft: pin where the left servo is connected.
		 * @param pinRight: pin where the right servo is connected.
		 */
		void attach(int pinLeft, int pinRight);

		/**
		 * Moves up the right arm.
		 */
		void moveRightUp();

		/**
		 * Moves middle the right arm.
		 */
		void moveRightMiddle();

		/**
		 * Moves down the right arm.
		 */
		void moveRightDown();

		/**
		 * Moves up the left arm.
		 */
		void moveLeftUp();

		/**
		 * Moves middle the left arm.
		 */
		void moveLeftMiddle();

		/**
		 * Moves down the left arm.
		 */
		void moveLeftDown();

	private:

		/** Attributes **/

		//Controls the right servo.
		Servo right_servo;

		//Controls the left servo.
		Servo left_servo;
};

#endif