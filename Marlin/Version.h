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
#define COMPILE_VERSION "33" 

#define SHORT_BUILD_VERSION "bugfix-2.0.7.2-" COMPILE_VERSION
#define STRING_CONFIG_H_AUTHOR "BDM"                    // Who made the changes.
#define CUSTOM_MACHINE_NAME "BTT GTR v1.0 tmc-2209"     // Name displayed in the LCD "Ready" message and Info menu
#define MACHINE_NAME "JAM-ENG Ender3pro"

/*******************************************************************************************************
 * 
 * Vxx MM/DD/2021 HH:MM
 * 
 * V33  03/12/2021 16:45
 *      #define HOTEND_OFFSET_X { 0.0, -20.05 }  // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0,  -0.12 }  // (mm) relative Y-offset for each nozzle * 
 * 
 * V32  03/11/2021 11:07
 * 
 *      ENABLED:  #define TMC_HOME_PHASE { 128, 640, 128 }  // added noise filter ( 100 nf cap) to Z endstop switch
 * 
 *      #define HOTEND_OFFSET_X { 0.0, -20.15 } // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0, -0.11 }  // (mm) relative Y-offset for each nozzle * 
 * 
 *      #define HOMING_FEEDRATE_MM_M { (90*60), (90*60), (11*60) }
 *      #define MANUAL_FEEDRATE { 90*60, 90*60, 11*60, 2*60 } // (mm/min) Feedrates for manual moves along X, Y, Z, E from panel
 * 
 *      #define SENSORLESS_BACKOFF_MM  { 2, 2 }       // (mm) Backoff from endstops before sensorless homing
 *      #define HOMING_BUMP_MM      { 5, 5, 5 }       // (mm) Backoff from endstops after first bump
 *      #define HOMING_BUMP_DIVISOR { 4, 4, 8 }       // Re-Bump Speed Divisor (Divides the Homing Feedrate)
 *      #define HOMING_BACKOFF_POST_MM { 2, 2, 2 }    // (mm) Backoff from endstops after homing
 * 
 * V31  03/10/2021 17:58
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  03/10/2021
 *      REMOVED: #define TMC_HOME_PHASE { 128, 640, 640 }
 *      ADDED: #define SQUARE_WAVE_STEPPING
 * 
 * V30  03/10/2021 08:28
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  03/09/2021
 *          ** updates correct the serial boot init for TMC.
 *      
 *      #define HOTEND_OFFSET_X { 0.0, -20.12 } // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0, -0.11 }  // (mm) relative Y-offset for each nozzle * 
 * 
 * V29  03/09/2021 12:01
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  03/09/2021
 *      
 *      #define X_CURRENT_HOME 350  // (mA) RMS current for sensorless homing
 *      #define HOTEND_OFFSET_X { 0.0, -20.11 } // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0, -0.11 }  // (mm) relative Y-offset for each nozzle * 
 * 
 *      M301 E0 P15.92 I1.42 D44.54     // M303 E0 C20 S215 U1
 *      M301 E1 P23.81 I2.27 D62.51     // M303 E1 C20 S215 U1
 * 
 * V28  03/09/2021 09:42
 * 
 *      CLEAN: Clean source tree
 * 
 *      #define HOTEND_OFFSET_X { 0.0, -20.10 } // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0, -0.11 }  // (mm) relative Y-offset for each nozzle * 
 * 
 * V27  03/08/2021 16:49
 *      READDED:  #define TOOLCHANGE_FILAMENT_SWAP ( no retract or prime )
 *      #define HOTEND_OFFSET_X { 0.0, -20.09 } // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0, -0.11 }  // (mm) relative Y-offset for each nozzle * 
 * 
 *      #define TOOLCHANGE_FS_FAN                 1  // Fan index or -1 to skip
 *      #define TOOLCHANGE_FS_FAN_SPEED          255  // 0-255
 *      #define TOOLCHANGE_FS_FAN_TIME            10  // (seconds)
 * 
 * V26  03/08/2021 11:55
 * 
 *      ** REMOVED: MARLIN upstream bugfix-2.0(.7.2)  03/08/2021
 * 
 * V25  03/08/2021 11:46
 * 
 *      ** DOESN'T BOOT - RESTARTS immediately
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  03/08/2021
 * 
 *      #define TOOLCHANGE_FS_EXTRA_PRIME          0  // (mm) Extra priming length
 *      M301 E0 P17.17 I1.57 D46.99
 *      M301 E1 P25.83 I2.58 D64.72
 * 
 *      #define HOTEND_OFFSET_X { 0.0, -20.14 } // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0, -0.10 }  // (mm) relative Y-offset for each nozzle * 
 * 
 * V24  03/07/2021 09:01
 * 
 *      REMOVED:  // #define TOOLCHANGE_PARK
 *      #define X_BED_SIZE 247
 *      #define Y_BED_SIZE 225 
 * * 
 * V23  03/07/2021 07:59
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  03/07/2021
 *      #define HOTEND_OFFSET_X { 0.0, -20.20 } // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0, 0.05 }  // (mm) relative Y-offset for each nozzle 
 *      #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 50, 50 }
 *      #define X_CURRENT_HOME  ( X_CURRENT / 2 )  // (mA) RMS current for sensorless homing
 *      #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MIN_POS + 10), 10 }
 *      REMOVED:   #define HOME_BEFORE_FILAMENT_CHANGE           // If needed, home before parking for filament change
 *      #define TOOLCHANGE_FILAMENT_SWAP
 *      #define TOOLCHANGE_PARK
 * 
 *      #define RX_BUFFER_MONITOR
 *      #define EXTRA_FAN_SPEED
 *      #define CASE_LIGHT_MENU                   // Add Case Light options to the LCD menu
 * 
 * V22  03/05/2021 11:17
 * 
 *      ** RELOADED CLEAN SOURCE TREE **
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  03/05/2021
 *      M218 T1 X-20.15 Y0.00 Z0.000       // Hotend Offsets
 *      #define HOTEND_OFFSET_X { 0.0, -20.10 } // (mm) relative X-offset for each nozzle
 *      #define TMC_HOME_PHASE { 128, 640, 640 }    // X=88, Y=89, Z=90
 *      #define LIN_ADVANCE_K 0.02
 *      #define ENDSTOP_NOISE_THRESHOLD 2
 *      #define DETECT_BROKEN_ENDSTOP
 *      #define HOMING_FEEDRATE_MM_M { (85*60), (85*60), (9*60) }
 *      #define MANUAL_FEEDRATE { 85*60, 85*60, 9*60, 2*60 } // (mm/min) Feedrates for manual moves along X, Y, Z, E from panel
 *      #define DEFAULT_MAX_FEEDRATE          { 300, 300, 12, 50, 50 }
 * 
 * 
 * V21  03/04/2021 09:24
 *  
 *          **********  D O    N O T    U S E   *******************
 *              G O   B A C K   T O  V20   until code is fixed
 *              BROKEN UPSREAM - SERIAL DOESNT WORK 
 *              FIRMWARE STUCK IN "BUSY"
 *              https://community.octoprint.org/t/loosing-connection-and-no-temp-readings-with-latest-marlin-firmware-bug-fix-2-0-x-29-01-2021/30125/14
 *          **********  D O    N O T    U S E   *******************
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  03/04/2021   09:00 AM
 *      Installed 40w heater in E1. New PID tuning.
 *          M301 E0 P16.82 I1.50 D47.06
 *          M301 E1 P24.30 I2.61 D56.55
 *      #define TEMP_RESIDENCY_TIME     5
 * 
 * 
 * V20  02/26/2021 09:49
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/26/2021
 *      #define TMC_HOME_PHASE { -1, -1, 896 } 
 *      #define HOTEND_OFFSET_X { 0.0, -20.10 }     // (mm) relative X-offset for each nozzle
 *      #define HOTEND_OFFSET_Y { 0.0, 0.00 }       // (mm) relative Y-offset for each nozzle
 *      //#define DETECT_BROKEN_ENDSTOP
 *      //#define DISABLE_INACTIVE_EXTRUDER   // Keep only the active extruder enabled
 *      #define X_BED_SIZE 235
 *      #define Y_BED_SIZE 235 
 *      #define Z_MAX_POS 220
 *      #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MAX_POS - 10), 4 }       // Z was 20  
 * V19  02/25/2021 19:22
 *      #define INVERT_E0_DIR   false     // new temporary wiring ( was mispinned )
 *  
 * V18  02/25/2021 15:46
 *      * New stepper adaptor wires installed.
 *      #define INVERT_Z_DIR    false
 * 
 * V17  02/25/2021 14:40
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/25/2021
 *       #define TMC_HOME_PHASE { 896, 128, 896 }
 *      #define X_CURRENT_HOME  350  // (mA) RMS current for sensorless homing
 *      #define Y_CURRENT_HOME  (Y_CURRENT/2)  // (mA) RMS current for sensorless homing
 * 
 * V16  02/23/2021 15:04
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/23/2021
 * 
 *      #define CHAMBER_AUTO_FAN_TEMPERATURE 55
 *      #define CHAMBER_AUTO_FAN_SPEED 255
 *      #define CHAMBER_FAN_MODE 1
 *      #define TEMP_CHAMBER_HYSTERESIS     2
 *      ! //#define CHAMBER_LIMIT_SWITCHING
 *     
 *          #define CHAMBER_FAN_BASE    10       // Minimum chamber fan PWM (0-255)
 *          #define CHAMBER_FAN_FACTOR  25       // PWM increase per °C difference from target
 *  
 * V15  02/22/2021 17:34
 *      #define TMC_HOME_PHASE { 896, 128, 384 }
 *      #define CHAMBER_FAN_MODE 1 
 *          
 *          #define CHAMBER_FAN_BASE  0     // Minimum chamber fan PWM (0-255)
 *          #define CHAMBER_FAN_FACTOR 5   // PWM increase per °C difference from target
 * 
 *          #define TEMP_CHAMBER_HYSTERESIS     2
 *      
 *      REMOVED:  Going back to Limit Switches
 *          //#define SENSORLESS_HOMING // StallGuard capable drivers only
 *          #define Y_CURRENT_HOME  (Y_CURRENT/2)
 *          #define X_CURRENT_HOME  (X_CURRENT/2)
 * 
 * V14  02/21/2021 18:43
 * 
 *      ** CORRECTED WIRING -->         ** NOTE ** SEE #08 = fix after re-wiring - DONE
 * 
 *      #define HEATER_0_PIN                        PB1   // Heater0
 *      #define HEATER_1_PIN                        PA1   // Heater1
 *      #define HEATER_2_PIN                        PB0   // Heater2

 * V13  02/21/2021 11:14
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/21/2021
 * 
 *      #define X_STALL_SENSITIVITY  70
 *      #define Y_STALL_SENSITIVITY  70
 *      #define DEFAULT_MAX_FEEDRATE          { 300, 300, 7, 50, 50 }
 *      REMOVED:   #define HOME_BEFORE_FILAMENT_CHANGE  
 *      #define MANUAL_FEEDRATE { 70*60, 70*60, 6*60, 2*60 } // (mm/min) Feedrates for manual moves along X, Y, Z, E from panel
 * 
 *      #define RX_BUFFER_SIZE 1024     
 *           #define SERIAL_XON_XOFF
 *      #define TX_BUFFER_SIZE 4
 *      #define MAX_CMD_SIZE 128
 *      #define BUFSIZE 8
 *      READDED: #define SQUARE_WAVE_STEPPING
 *            
 * V12  02/19/2021 11:01
 *      
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/19/2021
 *          #define DEFAULT_AXIS_STEPS_PER_UNIT  { 1285.20, 1285.10, 6444.00, 6220.00, 6220.00 }
 *          #define TMC_HOME_PHASE { 896, 896, 896 }
 *          REMOVED:   //#define SQUARE_WAVE_STEPPING
 *          #define LIN_ADVANCE_K 0.00   
 * 
 * V11  02/17/2021 09:28
 *      
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/17/2021
 *      ** TRANSFERED to NEW PC - GEORGIOU - RE-CLONED
 *      
 *      #define DEFAULT_AXIS_STEPS_PER_UNIT  { 1285.25, 1285.25, 6446.00, 6220.00, 6220.00 }
 *      #define DEFAULT_MAX_ACCELERATION      { 2500, 2500, 100, 10000, 10000 }
 * 
 * 
 * V10  02/15/2021 10:39
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/15/2021
 * 
 * V09  02/14/2021 13:45
 *      ** NOTE ** SEE #08 = fix after re-wiring
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.7.2)  02/14/2021
 * 
 *      PID:TUNING:
 * 
 *       BED: @ 90C ( 50% FAN ON FAN_SOFT_PWM, SOFT_PWM_SCALE 0 -- NO FAST_PWM )
 *          M301 E0 P13.31 I1.05 D42.31
 *          #define DEFAULT_Kp 13.31
 *          #define DEFAULT_Ki 1.05 
 *          #define DEFAULT_Kd 42.31
 * 
 *      #define X_STALL_SENSITIVITY  76
 *      #define Y_STALL_SENSITIVITY  76
 * 
 *      #define CONTROLLERFAN_SPEED_ACTIVE      39 // (0-255) Active speed, used when any motor is enabled
 *      #define CONTROLLERFAN_SPEED_IDLE        18 // (0-255) Idle speed, used when motors are disabled
 *   
 * V08  02/08/2021 18:09
 *      
 *      ***** FIX ME     FIX ME     FIX ME   *******
 *      #define HEATER_0_PIN                        PB0   // Swapped - change back when we re-wire new heater element in to wiring
 *      #define HEATER_2_PIN                        PB1   // Seapped to use 50w heater and didnt want to unscrew hard to reach 0_PIN
 * 
 *      
 * V07  02/08/2021 10:32
 *      #define DEFAULT_AXIS_STEPS_PER_UNIT  { 1282.00, 1283.00, 6442.00, 6220.00, 6220.00 }
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
 *          0.01000000 mm = 12.8 steps *** WRONG  0.02421875 per step..   5 * 12.8 = 64. yielded +1.55mm on x,y axis. 
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
 *          #define DEFAULT_Kp 13.31
 *          #define DEFAULT_Ki 1.05 
 *          #define DEFAULT_Kd 42.31 * 
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
