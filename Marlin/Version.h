/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once


/*************************************
 * Marlin bugfix-2.0.x
 * Compiled version identifier
 ************************************/
#define COMPILE_VERSION "06" 

#define SHORT_BUILD_VERSION "bugfix-2.0.7.2-" COMPILE_VERSION
#define STRING_CONFIG_H_AUTHOR "BDM"                // Who made the changes.
#define CUSTOM_MACHINE_NAME "BTT GTR v1.0 tmc-2209"  // Name displayed in the LCD "Ready" message and Info menu
#define MACHINE_NAME "JAM-ENG Ender3pro"

/*******************************************************************************************************
 * 
 * Vxx MM/DD/2021 HH:MM

 * V07  02/08/2021 18:08
 *      #define DEFAULT_AXIS_STEPS_PER_UNIT  { 1282.00, 1283.00, 6442.00, 6220.00, 6220.00 }
 * 
 * 
 *      [ Z AXIS Calibration ]
 *      lead screw = 1 rev = 8mm.
 *      1 rev = 400 * 16 steps. 
 *      8 / 6400 = .00125 mm per step.
 *      .00125 mm = 1 step @ .9 stepper (400 per rev)
 *          measured 5.05 @ 5.00mm and 30.30 @ 30mm.
 *          5.05 - 5.00 = 0.05. 
 *          .05 / 5 = .01mm over per mm in height.
 *          .01mm  / .00125 = 8 steps
 *          
 *         **************************************************
 *         ***        8 steps = .01 mm Z travel            **
 *         ***        1 step  = .00125 mm Z travel         **
 *         **************************************************
 * 
 *      [ X/Y AXIS CALIBRATION ]
 *      80 * 16 = 1280 steps 
 *  
 *      1 rev = 400 steps = 40mm travel
 *      10 steps = 1mm of travel
 *      =>> 1 step = .1 mm of travel
 *             .1 step = .01 mm of travel  
 *          @ 16 microstepping 
 *              16 steps = .1 mm
 *              1 step = .1 / 16 = 0.016667 mm
 * 
 *         ***      1 step =  0.016667 mm XY travel      ***
 * 
 *          1 mm = 80 * 16 = 1280
 *          .1 mm = 128.0 steps        
 *          .01 mm = 12.8 steps
 * 
 *         *************************************************
 *          0.0007812  mm = 1 step
 *          0.0015625  mm = 2 steps
 *          0.00234375 mm = 3 steps
 * 
 *          0.0078120  mm = 10 steps
 *          0.01000000 mm = 12.8 steps
 *         *************************************************
 * 
 * 
 * V06  02/07/2021 18:08
 *      #define INVERT_E0_DIR true      // E0 is RIGHT side extruder
 *      #define INVERT_E1_DIR false     // E1 is LEFT  side extruder
 *      
 *      #define X_STALL_SENSITIVITY  80
 *      #define Y_STALL_SENSITIVITY  80
 * 
 *      #define TEMP_STAT_LEDS
 *        #define STAT_LED_RED_PIN      PF7   // EXT-1
 *        #define STAT_LED_BLUE_PIN     PF8   // EXT-1
 *      
 *      
 * V05  02/07/2021 12:24
 * 
 *      PID:TUNING:
 *       EXT: E0 - @285 E0 40W ( FAN_SOFT_PWM, SOFT_PWM_SCALE 0 -- NO FAST_PWM )
 *          M301 E0 P18.81 I1.69 D52.30
 *           #define DEFAULT_Kp 18.81 
 *           #define DEFAULT_Ki 1.69 
 *           #define DEFAULT_Kd 52.30
 *       BED: @ 90C ( FAN_SOFT_PWM, SOFT_PWM_SCALE 0 -- NO FAST_PWM )
 *          M304 P99.75 I19.48 D340.43     
 *           #define DEFAULT_bedKp 99.75
 *           #define DEFAULT_bedKi 19.48
 *           #define DEFAULT_bedKd 340.43
 * 
 *      STEPPER CURRENT:
 *          #define X_CURRENT (Y, E0, E1)       800 
 *          #define Z_CURRENT (Z and Z1)       1250
 *          
 *      #define SENSORLESS_BACKOFF_MM  { 2, 2 }         // (mm) Backoff from endstops before sensorless homing
 *      #define HOMING_BUMP_MM      { 5, 5, 2 }         // (mm) Backoff from endstops after first bump
 *      #define HOMING_BUMP_DIVISOR { 2, 2, 4 }         // Re-Bump Speed Divisor (Divides the Homing Feedrate)
 *      #define HOMING_BACKOFF_POST_MM { 2, 2, 2 }      // (mm) Backoff from endstops after homing
 * 
 * 
 * V04  02/07/2021 10:38
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/07/2021
 * 
 *      define SERIAL_PORT_2    3   TFT connector - 5v, Gnd <=> Pi-14, Tx <=> Pi-10, Rx <=> Pi-8, Rst
 * 
 *      #define FAN_SOFT_PWM
 *      #define SOFT_PWM_SCALE 0
 * 
 *       
 * V03  02/05/2021 12:18
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/05/2021
 *      #define HEATER_CHAMBER_PIN          #define HEATER_6_PIN                      PE13  // M5 HEAT4
 *      #define SENSORLESS_HOMING // StallGuard capable drivers only
 *          #define X_STALL_SENSITIVITY   96
 *           #define Y_STALL_SENSITIVITY  89
 *       #define TMC_HOME_PHASE { 128, 128, 128 }
 * 
 * 
 * 
 * 
 *       #define NEO_PIN                        PF13            // 04   PF13    RGB_LED     PWM - Neo-pixel lights in chamber
 *       #define CASE_LIGHT_PIN                 FAN7_PIN        // 14   PE14    M5 FAN5     PWM - White LEDs in chamber
 *       #define HEATER_CHAMBER_PIN             HEATER_6_PIN    // 13   PE13    M5 HEAT4    On/Off Heater in Chamber ( IN2 on relay module )
 *       #define CONTROLLER_FAN_PIN             FAN3_PIN        // 04   PI5     M5 FAN1     PWM - Fans inside Control Box
 * 
 * 
 * 
 * 
 * V02  02/04/2021 19:38
 *      UPDATES: MARLIN upstream bugfix-2.0.x  02/04/2021
 * 
 *      #define FAST_PWM_FAN_FREQUENCY 1287
 *      -- #define FAST_PWM_FAN
 *      ++ #define FAN_SOFT_PWM
 *           #define SOFT_PWM_SCALE 1
 * 
 *       //---------------------------
 *       //  M5 Expansion Header  
 *       //---------------------------
 *
 *      #define M5_EXTENDER 
 *        #define NEO_PIN                     PF13                                          // M5 Connector         RGB_LED     PWM for neo-pixel lights in chamber
 *        #define HEATER_CHAMBER_PIN          Y2_STOP_PIN   // #define Y2_STOP_PIN   PF12   // M5 Connector         M5_STOP      
 *        #define CONTROLLER_FAN_PIN          FAN3_PIN      // #define FAN3_PIN      PI5    // M5 Connector         FAN_M1      PWM for fans in control box
 *        #define CASE_LIGHT_PIN              FAN4_PIN      // #define FAN4_PIN      PE9    // M5 Connector         FAN_M2      PWM for 12v Case Light LEDs
 * 
 *       //---------------------------
 *       //      FAN HEADERS           
 *       //---------------------------
 *
 *        #define FAN_PIN                     PE5                                           // Fan0 - Part Cooling
 *        #define FAN1_PIN                    PE6                                           // Fan1 - Extruder Cooling
 *        #define FAN2_PIN                    PC8                                           // Fan2 - Chamber / Chassis Fan
 *          #define CHAMBER_AUTO_FAN_PIN      FAN2_PIN                                      
 * 
 * 
 * V01  02/02/2021 18:24
 *     INITIAL:    New Board replacing SKR PRO 1.1 ( BTT GTR is the upgrade to the PRO )
 *          #define BOARD_BTT_GTR_V1_0            4210  // BigTreeTech GTR v1.0 (STM32F407IGT)
 * 
 *
 *
 * V85 02/02/2021 12:10
 *          
 *      ***********************************************************************************
 *      ** DID NOT COMPILE FOR SKR PRO 1.1 -- UPGRADED PRINTER TO BTT GTR 1.0 motherboard.
 *      ** see BTT GTR 1.0 SOURCE TREE
 *      ***********************************************************************************
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0.x  02/02/2021
 *       ADDED:
 *          #define MEATPACK                // Support for MeatPack G-code compression (https://github.com/scottmudge/OctoPrint-MeatPack)
 *      CHANGED:
 *          #define NEOPIXEL_IS_SEQUENTIAL   
 *
 *******************************************************************************************************/








/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION " (Github/kamikazebdm/marlin)"

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE  __DATE__ " " __TIME__


/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
#define SOURCE_CODE_URL "github.com/MarlinFirmware/Marlin"

/**
 * Default generic printer UUID.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
#define WEBSITE_URL "marlinfw.org"

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define  USB_DEVICE_VENDOR_ID           0x0000
//#define  USB_DEVICE_PRODUCT_ID          0x0000
//#define  USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
