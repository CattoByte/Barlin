/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2023 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

#include "../../fontdata.h"

#if HAS_GRAPHICAL_TFT && TFT_FONT == UNIFONT

// Unifont Cyrillic 48pt, capital 'A' height: 30px, width: 100%, range: 0x0401-0x0491, glyphs: 74
extern const uint8_t Unifont_Cyrillic_30[6865] = {
  129,30,1,4,145,4,42,250, // unifont_t
  // 0x0401  Ё
  18,42,126,24,3,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,255,192,255,255,192,255,255,192,
  // 0x0402  Ђ
  255,
  // 0x0403  Ѓ
  255,
  // 0x0404  Є
  18,30,90,24,3,0,3,254,0,3,254,0,3,254,0,28,1,192,28,1,192,28,1,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,28,1,192,28,1,192,28,1,192,3,254,0,3,254,0,3,254,0,
  // 0x0405  Ѕ
  255,
  // 0x0406  І
  15,30,60,24,6,0,255,254,255,254,255,254,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,255,254,255,254,255,254,
  // 0x0407  Ї
  15,42,84,24,6,0,224,112,224,112,224,112,224,112,224,112,224,112,0,0,0,0,0,0,0,0,0,0,0,0,255,254,255,254,255,254,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,255,254,255,254,255,254,
  // 0x0408  Ј
  255,
  // 0x0409  Љ
  255,
  // 0x040a  Њ
  255,
  // 0x040b  Ћ
  255,
  // 0x040c  Ќ
  255,
  // 0x040d  Ѝ
  255,
  // 0x040e  Ў
  255,
  // 0x040f  Џ
  255,
  // 0x0410  А
  18,30,90,24,3,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0411  Б
  18,30,90,24,3,0,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,
  // 0x0412  В
  18,30,90,24,3,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,
  // 0x0413  Г
  18,30,90,24,3,0,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x0414  Д
  24,36,108,24,0,250,0,15,248,0,15,248,0,15,248,0,112,56,0,112,56,0,112,56,0,112,56,0,112,56,0,112,56,0,112,56,0,112,56,0,112,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,28,0,56,28,0,56,28,0,56,28,0,56,28,0,56,28,0,56,255,255,255,255,255,255,255,255,255,224,0,7,224,0,7,224,0,7,224,0,7,224,0,7,224,0,7,
  // 0x0415  Е
  18,30,90,24,3,0,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,255,192,255,255,192,255,255,192,
  // 0x0416  Ж
  21,30,90,24,3,0,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,28,113,192,28,113,192,28,113,192,28,113,192,28,113,192,28,113,192,3,254,0,3,254,0,3,254,0,3,254,0,3,254,0,3,254,0,28,113,192,28,113,192,28,113,192,28,113,192,28,113,192,28,113,192,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,
  // 0x0417  З
  18,30,90,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,31,254,0,31,254,0,31,254,0,0,14,0,0,14,0,0,14,0,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x0418  И
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0419  Й
  18,39,117,24,3,0,28,14,0,28,14,0,28,14,0,3,240,0,3,240,0,3,240,0,0,0,0,0,0,0,0,0,0,224,1,192,224,1,192,224,1,192,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,224,1,192,224,1,192,224,1,192,
  // 0x041a  К
  18,30,90,24,3,0,224,15,192,224,15,192,224,15,192,224,112,0,224,112,0,224,112,0,224,112,0,224,112,0,224,112,0,227,128,0,227,128,0,227,128,0,227,128,0,227,128,0,227,128,0,252,0,0,252,0,0,252,0,0,227,128,0,227,128,0,227,128,0,224,112,0,224,112,0,224,112,0,224,14,0,224,14,0,224,14,0,224,1,192,224,1,192,224,1,192,
  // 0x041b  Л
  18,30,90,24,3,0,3,255,192,3,255,192,3,255,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,224,1,192,224,1,192,224,1,192,
  // 0x041c  М
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,252,15,192,252,15,192,252,15,192,252,15,192,252,15,192,252,15,192,227,241,192,227,241,192,227,241,192,227,241,192,227,241,192,227,241,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x041d  Н
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x041e  О
  18,30,90,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x041f  П
  18,30,90,24,3,0,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0420  Р
  18,30,90,24,3,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x0421  С
  18,30,90,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x0422  Т
  21,30,90,24,3,0,255,255,248,255,255,248,255,255,248,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x0423  У
  21,30,90,24,3,0,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,31,128,0,31,128,0,31,128,0,
  // 0x0424  Ф
  21,33,99,24,3,0,0,112,0,0,112,0,0,112,0,31,255,192,31,255,192,31,255,192,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,31,255,192,31,255,192,31,255,192,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x0425  Х
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0426  Ц
  21,36,108,24,3,250,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,248,255,255,248,255,255,248,0,0,56,0,0,56,0,0,56,0,0,56,0,0,56,0,0,56,
  // 0x0427  Ч
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,15,192,224,15,192,224,15,192,31,241,192,31,241,192,31,241,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,
  // 0x0428  Ш
  21,30,90,24,3,0,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,255,255,248,255,255,248,255,255,248,
  // 0x0429  Щ
  24,36,108,24,0,250,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,255,255,255,255,255,255,255,255,255,0,0,7,0,0,7,0,0,7,0,0,7,0,0,7,0,0,7,
  // 0x042a  Ъ
  21,30,90,24,3,0,255,128,0,255,128,0,255,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,255,192,3,255,192,3,255,192,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,255,192,3,255,192,3,255,192,
  // 0x042b  Ы
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,129,192,255,129,192,255,129,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,255,129,192,255,129,192,255,129,192,
  // 0x042c  Ь
  18,30,90,24,3,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,
  // 0x042d  Э
  18,30,90,24,3,0,31,240,0,31,240,0,31,240,0,224,14,0,224,14,0,224,14,0,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,31,255,192,31,255,192,31,255,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,224,14,0,224,14,0,224,14,0,31,240,0,31,240,0,31,240,0,
  // 0x042e  Ю
  18,30,90,24,3,0,224,126,0,224,126,0,224,126,0,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,255,129,192,255,129,192,255,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,224,126,0,224,126,0,224,126,0,
  // 0x042f  Я
  18,30,90,24,3,0,31,255,192,31,255,192,31,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,255,192,31,255,192,31,255,192,3,129,192,3,129,192,3,129,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0430  а
  18,24,72,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,0,1,192,0,1,192,0,1,192,31,255,192,31,255,192,31,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,15,192,224,15,192,224,15,192,31,241,192,31,241,192,31,241,192,
  // 0x0431  б
  18,36,108,24,3,0,0,1,192,0,1,192,0,1,192,3,254,0,3,254,0,3,254,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x0432  в
  18,24,72,24,3,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,
  // 0x0433  г
  18,24,72,24,3,0,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x0434  д
  21,27,81,24,3,253,3,255,192,3,255,192,3,255,192,3,129,192,3,129,192,3,129,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,248,255,255,248,255,255,248,224,0,56,224,0,56,224,0,56,
  // 0x0435  е
  18,24,72,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x0436  ж
  21,24,72,24,3,0,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,28,113,192,28,113,192,28,113,192,3,254,0,3,254,0,3,254,0,3,254,0,3,254,0,3,254,0,28,113,192,28,113,192,28,113,192,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,
  // 0x0437  з
  18,24,72,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,0,1,192,0,1,192,0,1,192,31,254,0,31,254,0,31,254,0,0,14,0,0,14,0,0,14,0,0,1,192,0,1,192,0,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x0438  и
  18,24,72,24,3,0,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,
  // 0x0439  й
  18,36,108,24,3,0,28,14,0,28,14,0,28,14,0,3,240,0,3,240,0,3,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,
  // 0x043a  к
  18,24,72,24,3,0,224,15,192,224,15,192,224,15,192,224,112,0,224,112,0,224,112,0,227,128,0,227,128,0,227,128,0,252,0,0,252,0,0,252,0,0,227,128,0,227,128,0,227,128,0,224,112,0,224,112,0,224,112,0,224,14,0,224,14,0,224,14,0,224,1,192,224,1,192,224,1,192,
  // 0x043b  л
  18,24,72,24,3,0,3,255,192,3,255,192,3,255,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,3,129,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,224,1,192,224,1,192,224,1,192,
  // 0x043c  м
  18,24,72,24,3,0,224,1,192,224,1,192,224,1,192,252,15,192,252,15,192,252,15,192,252,15,192,252,15,192,252,15,192,227,241,192,227,241,192,227,241,192,227,241,192,227,241,192,227,241,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x043d  н
  18,24,72,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x043e  о
  18,24,72,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x043f  п
  18,24,72,24,3,0,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0440  р
  18,30,90,24,3,250,227,254,0,227,254,0,227,254,0,252,1,192,252,1,192,252,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,252,1,192,252,1,192,252,1,192,227,254,0,227,254,0,227,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x0441  с
  18,24,72,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x0442  т
  21,24,72,24,3,0,255,255,248,255,255,248,255,255,248,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x0443  у
  18,30,90,24,3,250,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,252,0,0,252,0,0,252,0,0,
  // 0x0444  ф
  21,39,117,24,3,250,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,31,255,192,31,255,192,31,255,192,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,31,255,192,31,255,192,31,255,192,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x0445  х
  18,24,72,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,28,14,0,28,14,0,28,14,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0446  ц
  21,30,90,24,3,250,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,248,255,255,248,255,255,248,0,0,56,0,0,56,0,0,56,0,0,56,0,0,56,0,0,56,
  // 0x0447  ч
  18,24,72,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,15,192,224,15,192,224,15,192,31,241,192,31,241,192,31,241,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,
  // 0x0448  ш
  21,24,72,24,3,0,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,255,255,248,255,255,248,255,255,248,
  // 0x0449  щ
  24,30,90,24,0,250,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,255,255,255,255,255,255,255,255,255,0,0,7,0,0,7,0,0,7,0,0,7,0,0,7,0,0,7,
  // 0x044a  ъ
  21,24,72,24,3,0,255,128,0,255,128,0,255,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,255,192,3,255,192,3,255,192,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,128,56,3,255,192,3,255,192,3,255,192,
  // 0x044b  ы
  18,24,72,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,129,192,255,129,192,255,129,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,255,129,192,255,129,192,255,129,192,
  // 0x044c  ь
  18,24,72,24,3,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,
  // 0x044d  э
  18,24,72,24,3,0,31,240,0,31,240,0,31,240,0,224,14,0,224,14,0,224,14,0,0,1,192,0,1,192,0,1,192,31,255,192,31,255,192,31,255,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,224,14,0,224,14,0,224,14,0,31,240,0,31,240,0,31,240,0,
  // 0x044e  ю
  18,24,72,24,3,0,224,126,0,224,126,0,224,126,0,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,255,129,192,255,129,192,255,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,224,126,0,224,126,0,224,126,0,
  // 0x044f  я
  18,24,72,24,3,0,31,255,192,31,255,192,31,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,255,192,31,255,192,31,255,192,3,129,192,3,129,192,3,129,192,28,1,192,28,1,192,28,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0450  ѐ
  255,
  // 0x0451  ё
  18,36,108,24,3,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x0452  ђ
  255,
  // 0x0453  ѓ
  255,
  // 0x0454  є
  18,24,72,24,3,0,3,254,0,3,254,0,3,254,0,28,1,192,28,1,192,28,1,192,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,28,1,192,28,1,192,28,1,192,3,254,0,3,254,0,3,254,0,
  // 0x0455  ѕ
  255,
  // 0x0456  і
  15,33,66,24,6,0,3,128,3,128,3,128,3,128,3,128,3,128,0,0,0,0,0,0,31,128,31,128,31,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,255,254,255,254,255,254,
  // 0x0457  ї
  15,33,66,24,6,0,224,112,224,112,224,112,224,112,224,112,224,112,0,0,0,0,0,0,31,128,31,128,31,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,255,254,255,254,255,254,
  // 0x0458  ј
  255,
  // 0x0459  љ
  255,
  // 0x045a  њ
  255,
  // 0x045b  ћ
  255,
  // 0x045c  ќ
  255,
  // 0x045d  ѝ
  255,
  // 0x045e  ў
  255,
  // 0x045f  џ
  255,
  // 0x0460  Ѡ
  255,
  // 0x0461  ѡ
  255,
  // 0x0462  Ѣ
  255,
  // 0x0463  ѣ
  255,
  // 0x0464  Ѥ
  255,
  // 0x0465  ѥ
  255,
  // 0x0466  Ѧ
  255,
  // 0x0467  ѧ
  255,
  // 0x0468  Ѩ
  255,
  // 0x0469  ѩ
  255,
  // 0x046a  Ѫ
  255,
  // 0x046b  ѫ
  255,
  // 0x046c  Ѭ
  255,
  // 0x046d  ѭ
  255,
  // 0x046e  Ѯ
  255,
  // 0x046f  ѯ
  255,
  // 0x0470  Ѱ
  255,
  // 0x0471  ѱ
  255,
  // 0x0472  Ѳ
  255,
  // 0x0473  ѳ
  255,
  // 0x0474  Ѵ
  255,
  // 0x0475  ѵ
  255,
  // 0x0476  Ѷ
  255,
  // 0x0477  ѷ
  255,
  // 0x0478  Ѹ
  255,
  // 0x0479  ѹ
  255,
  // 0x047a  Ѻ
  255,
  // 0x047b  ѻ
  255,
  // 0x047c  Ѽ
  255,
  // 0x047d  ѽ
  255,
  // 0x047e  Ѿ
  255,
  // 0x047f  ѿ
  255,
  // 0x0480  Ҁ
  255,
  // 0x0481  ҁ
  255,
  // 0x0482  ҂
  255,
  // 0x0483  ҃
  255,
  // 0x0484  ҄
  255,
  // 0x0485  ҅
  255,
  // 0x0486  ҆
  255,
  // 0x0487  ҇
  255,
  // 0x0488  ҈
  255,
  // 0x0489  ҉
  255,
  // 0x048a  Ҋ
  255,
  // 0x048b  ҋ
  255,
  // 0x048c  Ҍ
  255,
  // 0x048d  ҍ
  255,
  // 0x048e  Ҏ
  255,
  // 0x048f  ҏ
  255,
  // 0x0490  Ґ
  18,36,108,24,3,0,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x0491  ґ
  18,30,90,24,3,0,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
};

#endif // HAS_GRAPHICAL_TFT