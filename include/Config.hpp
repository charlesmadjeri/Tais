#pragma once

#include "Types.hpp"

#define SERVO_DELAY_PER_DEGREE 7

// ****************************** RIGHT FOREARM ******************************

// ******************** RIGHT WRIST ********************

#define RIGHT_WRIST_SERVO_PIN 2
#define RIGHT_WRIST_SERVO_TYPE ServoType::JX_6225MG
#define RIGHT_WRIST_DEFAULT_ANGLE 150
#define RIGHT_WRIST_MIN_ANGLE 0
#define RIGHT_WRIST_MAX_ANGLE 300

// ******************** RIGHT HAND ********************

// ********** RIGHT FINGERS **********

// SERVOS
#define RIGHT_THUMB_SERVO_PIN 3
#define RIGHT_THUMB_SERVO_TYPE ServoType::JX_6225MG
#define RIGHT_THUMB_MIN_ANGLE 35
#define RIGHT_THUMB_MAX_ANGLE 120

#define RIGHT_INDEX_SERVO_PIN 4
#define RIGHT_INDEX_SERVO_TYPE ServoType::JX_6225MG
#define RIGHT_INDEX_MIN_ANGLE 25
#define RIGHT_INDEX_MAX_ANGLE 180

#define RIGHT_MIDDLE_SERVO_PIN 5
#define RIGHT_MIDDLE_SERVO_TYPE ServoType::JX_6225MG
#define RIGHT_MIDDLE_MIN_ANGLE 15
#define RIGHT_MIDDLE_MAX_ANGLE 160

#define RIGHT_RING_SERVO_PIN 6
#define RIGHT_RING_SERVO_TYPE ServoType::HK15298B
#define RIGHT_RING_MIN_ANGLE 18
#define RIGHT_RING_MAX_ANGLE 180

#define RIGHT_PINKY_SERVO_PIN 7
#define RIGHT_PINKY_SERVO_TYPE ServoType::JX_6225MG
#define RIGHT_PINKY_MIN_ANGLE 25
#define RIGHT_PINKY_MAX_ANGLE 200

// SENSOR

#define RIGHT_THUMB_GOT_SENSOR true
#define RIGHT_THUMB_SENSOR_PIN A6
#define RIGHT_THUMB_SENSOR_MIN 547
#define RIGHT_THUMB_SENSOR_MAX 552

#define RIGHT_INDEX_GOT_SENSOR false
#define RIGHT_INDEX_SENSOR_PIN A7
#define RIGHT_INDEX_SENSOR_MIN 0
#define RIGHT_INDEX_SENSOR_MAX 0

#define RIGHT_MIDDLE_GOT_SENSOR true
#define RIGHT_MIDDLE_SENSOR_PIN A8
#define RIGHT_MIDDLE_SENSOR_MIN 527
#define RIGHT_MIDDLE_SENSOR_MAX 534

#define RIGHT_RING_GOT_SENSOR true
#define RIGHT_RING_SENSOR_PIN A9
#define RIGHT_RING_SENSOR_MIN 514
#define RIGHT_RING_SENSOR_MAX 520

#define RIGHT_PINKY_GOT_SENSOR true
#define RIGHT_PINKY_SENSOR_PIN A10
#define RIGHT_PINKY_SENSOR_MIN 568
#define RIGHT_PINKY_SENSOR_MAX 580

// ****************************** LEFT FOREARM ******************************

// ******************** LEFT WRIST ********************

#define LEFT_WRIST_SERVO_PIN 0 // TO DEFINE
#define LEFT_WRIST_SERVO_TYPE ServoType::JX_6225MG // TO DEFINE
#define LEFT_WRIST_DEFAULT_ANGLE 0 // TO DEFINE
#define LEFT_WRIST_MIN_ANGLE 0 // TO DEFINE
#define LEFT_WRIST_MAX_ANGLE 0 // TO DEFINE

// ******************** LEFT HAND ********************

// ********** LEFT FINGERS **********

// SERVOS
#define LEFT_THUMB_SERVO_PIN 0
#define LEFT_THUMB_SERVO_TYPE ServoType::JX_6225MG
#define LEFT_THUMB_MIN_ANGLE 0
#define LEFT_THUMB_MAX_ANGLE 0

#define LEFT_INDEX_SERVO_PIN 0
#define LEFT_INDEX_SERVO_TYPE ServoType::JX_6225MG
#define LEFT_INDEX_MIN_ANGLE 0
#define LEFT_INDEX_MAX_ANGLE 0

#define LEFT_MIDDLE_SERVO_PIN 0
#define LEFT_MIDDLE_SERVO_TYPE ServoType::JX_6225MG
#define LEFT_MIDDLE_MIN_ANGLE 0
#define LEFT_MIDDLE_MAX_ANGLE 0

#define LEFT_RING_SERVO_PIN 0
#define LEFT_RING_SERVO_TYPE ServoType::JX_6225MG
#define LEFT_RING_MIN_ANGLE 0
#define LEFT_RING_MAX_ANGLE 0

#define LEFT_PINKY_SERVO_PIN 0
#define LEFT_PINKY_SERVO_TYPE ServoType::JX_6225MG
#define LEFT_PINKY_MIN_ANGLE 0
#define LEFT_PINKY_MAX_ANGLE 0

// SENSOR
#define LEFT_THUMB_GOT_SENSOR false
#define LEFT_THUMB_SENSOR_PIN A0
#define LEFT_THUMB_SENSOR_MIN 0
#define LEFT_THUMB_SENSOR_MAX 0

#define LEFT_INDEX_GOT_SENSOR false
#define LEFT_INDEX_SENSOR_PIN A0
#define LEFT_INDEX_SENSOR_MIN 0
#define LEFT_INDEX_SENSOR_MAX 0

#define LEFT_MIDDLE_GOT_SENSOR false
#define LEFT_MIDDLE_SENSOR_PIN A0
#define LEFT_MIDDLE_SENSOR_MIN 0
#define LEFT_MIDDLE_SENSOR_MAX 0

#define LEFT_RING_GOT_SENSOR false
#define LEFT_RING_SENSOR_PIN A0
#define LEFT_RING_SENSOR_MIN 0
#define LEFT_RING_SENSOR_MAX 0

#define LEFT_PINKY_GOT_SENSOR false
#define LEFT_PINKY_SENSOR_PIN A0
#define LEFT_PINKY_SENSOR_MIN 0
#define LEFT_PINKY_SENSOR_MAX 0
