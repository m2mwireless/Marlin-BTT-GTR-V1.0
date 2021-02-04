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
#define COMPILE_VERSION "02" 

#define SHORT_BUILD_VERSION "bugfix-2.0.7.2-" COMPILE_VERSION
#define STRING_CONFIG_H_AUTHOR "BDM"                // Who made the changes.
#define CUSTOM_MACHINE_NAME "BTT GTR v1.0 tmc-2209"  // Name displayed in the LCD "Ready" message and Info menu
#define MACHINE_NAME "JAM-ENG Ender3pro"

/*******************************************************************************************************
 * 
 * Vxx MM/DD/2021 HH:MM
 *
 * V02  02/04/2021 xx:xx
 *      UPDATES: MARLIN upstream bugfix-2.0.x  02/03/2021
 * 
 *      #define FAST_PWM_FAN_FREQUENCY 1287
 *      -- #define FAST_PWM_FAN
 *      ++ #define FAN_SOFT_PWM
 *           #define SOFT_PWM_SCALE 1
 * 
 *       /************************
 *       *  M5 Expansion Header  * 
 *       *************************
 *
 *      #define M5_EXTENDER 
 *        #define NEO_PIN                     PF13                                          // M5 Connector         RGB_LED     PWM for neo-pixel lights in chamber
 *        #define HEATER_CHAMBER_PIN          Y2_STOP_PIN   // #define Y2_STOP_PIN   PF12   // M5 Connector         M5_STOP      
 *        #define CONTROLLER_FAN_PIN          FAN3_PIN      // #define FAN3_PIN      PI5    // M5 Connector         FAN_M1      PWM for fans in control box
 *        #define CASE_LIGHT_PIN              FAN4_PIN      // #define FAN4_PIN      PE9    // M5 Connector         FAN_M2      PWM for 12v Case Light LEDs
 * 
 *       /************************
 *       *  FAN HEADERS          * 
 *       *************************
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
