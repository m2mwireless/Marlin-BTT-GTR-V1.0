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
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor

// 4092 ( beta25 value ) / 977 ( value @ 25C ) = 4.188331627430911

const temp_entry_t temptable_1[] PROGMEM = {
  { OV(  23), 300 },  // 572
  { OV(  25), 295 },  // 563
  { OV(  27), 290 },  // 554
  { OV(  28), 285 },  // 545
  { OV(  31), 280 },  // 536
  { OV(  33), 275 },  // 527
  { OV(  35), 270 },  // 518
  { OV(  38), 265 },  // 509
  { OV(  41), 260 },  // 500
  { OV(  44), 255 },  // 491
  { OV(  48), 250 },  // 482
  { OV(  52), 245 },  // 473
  { OV(  56), 240 },  // 464
  { OV(  61), 235 },  // 455
  { OV(  66), 230 },  // 446
  { OV(  71), 225 },  // 437
  { OV(  78), 220 },  // 428
  { OV(  84), 215 },  // 419
  { OV(  92), 210 },  // 410
  { OV( 100), 205 },  // 400
  { OV( 109), 200 },  // 392
  { OV( 120), 195 },  // 383
  { OV( 131), 190 },  // 375
  { OV( 143), 185 },  // 365
  { OV( 156), 180 },  // 356
  { OV( 171), 175 },  // 347
  { OV( 187), 170 },  // 338
  { OV( 205), 165 },  // 329
  { OV( 224), 160 },  // 320
  { OV( 245), 155 },  // 311  ^^ ??
  { OV( 260), 150 },  // 302
  { OV( 281), 145 },  // 293
  { OV( 260), 140 },  // 284  ^^^ guestimate - cant test bed hotter (34 points per 5C)

    { OV( 276), 135 },  // 275 ** 
    
    { OV( 305), 132 },  // 269 ** 1279.00
    { OV( 310), 130 },  // 266 ** 1300.00
    { OV( 344), 125 },  // 257 ** 1439.75
    { OV( 375), 120 },  // 248 ** 1569.25
    { OV( 406), 115 },  // 239 ** 1698.75

    { OV( 431), 110 },  // 230 **  1805.50   Updated
    { OV( 476), 105 },  // 221 **  1991.75   Updated
    { OV( 508), 100 },  // 212 **  2128.38   Updated 
    { OV( 551),  95 },  // 203 **  2308.50   Updated
    { OV( 588),  90 },  // 194 **  2463.50   Updated
    { OV( 633),  85 },  // 185 **  2651.38   Updated
    { OV( 671),  80 },  // 176 **  2809.75   Updated
    { OV( 707),  75 },  // 167 **  2962.63   Updated
    { OV( 736),  70 },  // 158 **  3084.13   Updated
    { OV( 767),  65 },  // 149 **  3211.13   Updated
    { OV( 802),  60 },  // 140 **  3360.50   Updated
    { OV( 829),  55 },  // 131 **  3472.88   Updated
    { OV( 849),  50 },  // 122 **  3556.88   Updated 
    
    { OV( 879),  45 },  // 113 ** 3682.88
    { OV( 896),  40 },  // 104 ** 3755.63
    { OV( 913),  35 },  // 95 **  3822.75
    { OV( 925),  30 },  // 86 ** 3873.13
    { OV( 930),  27 },  // 81 ** 3893.50
    { OV( 932),  26 },  // 79 ** 3903.88

    { OV( 977),  25 },  // 77 ** 

  { OV( 985),  20 },  // 68
  { OV( 993),  15 },  // 59
  { OV( 999),  10 },  // 50
  { OV(1004),   5 },  // 41
  { OV(1008),   0 },  // 32 
  { OV(1012),  -5 },  // 23
  { OV(1016), -10 },  // 14
  { OV(1020), -15 }   // 5
};
