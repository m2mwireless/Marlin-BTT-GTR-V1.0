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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
// 4092 ( beta25 value ) / 977 ( value @ 25C ) = 4.188331627430911
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
constexpr temp_entry_t temptable_1[] PROGMEM = {
  { OV(  23), 300 },
  { OV(  25), 295 },
  { OV(  27), 290 },
  { OV(  28), 285 },
  { OV(  31), 280 },
  { OV(  33), 275 },
  { OV(  35), 270 },
  { OV(  38), 265 },
  { OV(  41), 260 },
  { OV(  44), 255 },
  { OV(  48), 250 },
  { OV(  52), 245 },
  { OV(  56), 240 },
  { OV(  61), 235 },
  { OV(  66), 230 },
  { OV(  71), 225 },
  { OV(  78), 220 },
  { OV(  84), 215 },
  { OV(  92), 210 },
  { OV( 100), 205 },
  { OV( 109), 200 },
  { OV( 120), 195 },
  { OV( 131), 190 },
  { OV( 143), 185 },
  { OV( 155), 180 },
  { OV( 170), 175 },
  { OV( 183), 170 },
  { OV( 202), 165 },
  { OV( 218), 160 },
  { OV( 248), 155 },
  { OV( 270), 150 },
  { OV( 292), 145 },  
  
  { OV( 320), 140 },  // 
  { OV( 345), 135 },  // good
  { OV( 375), 130 },  // good
  { OV( 405), 125 },  // good
  { OV( 437), 120 },  // good

  { OV( 474), 115 },  // good
  { OV( 511), 110 },  // good
  { OV( 549), 105 },  // good
  { OV( 587), 100 },  // good
  { OV( 623),  95 },  // good
  { OV( 662),  90 },  // good
  { OV( 695),  85 },  // good
  { OV( 734),  80 },  // good
  { OV( 767),  75 },  // good
  { OV( 800),  70 },  // good
  { OV( 828),  65 },  // good
  { OV( 856),  60 },  // this and below calibrated 06/05/2021
  { OV( 880),  55 },
  { OV( 902),  50 },
  { OV( 922),  45 },
  { OV( 939),  40 },  
  { OV( 954),  35 },
  { OV( 966),  30 },
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
