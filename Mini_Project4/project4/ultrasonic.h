/*******************************************************************************
 *                                                                             *
 * [FILE NAME]:   ultrasonic.h                                                 *
 *                                                                             *
 * [AUTHOR]:      Ahmed Saeed                                                  *
 *                                                                             *
 * [DATE]:        11/10/2022                                                   *
 *                                                                             *
 * [DESCRIPTION]: Header file for the ULTRASONIC driver                        *
 *                                                                             *
 *******************************************************************************/


#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include"std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define ULTRASONIC_TRIGGER_PORT_ID                 PORTB_ID
#define ULTRASONIC_TRIGGER_PIN_ID                  PIN5_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * Description :
 * The Function responsible for Initializing the ICU driver.
 * Setup the ICU call back function.
 * Setup the direction for the trigger pin as output pin through the GPIO driver.
 * Inputs: None
 * Return: None
 */
void ULTRASONIC_init(void);

/*
 * Description :
 * The Function responsible for Sending the Trigger pulse to the ultrasonic.
 * Inputs: None
 * Return: None
 */
void ULTRASONIC_trigger(void);

/*
 * Description :
 * The Function responsible for Sending the trigger pulse by using ULTRASONIC_Trigger function.
 * Start the measurements by the ICU from this moment.
 * Inputs: None
 * Return: The measured distance in Centimeter.
 */
uint16 ULTRASONIC_readDistance(void);

/*
 * Description :
 * This is the call back function called by the ICU driver.
 * This function is used to calculate the high time (pulse time) generated by the ultrasonic sensor.
 * Inputs: None
 * Return: None
 */
void ULTRASONIC_edgeProcessing(void);

#endif /* ULTRASONIC_H_ */
