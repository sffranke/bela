#define NyBoard_V0_1
#define NYBBLE
#define NUM_SKILLS 43
#define I2C_EEPROM

const char bd[] PROGMEM = { 
30, 0, 0,
 0,0,0,0, 39, 39,-80,-80, 20, 20, 47, 47,
 0,0,0,0, 29, 29,-73,-73, 24, 24, 48, 48,
 0,0,0,0, 25, 25,-64,-64, 25, 25, 46, 46,
 0,0,0,0, 23, 23,-55,-55, 24, 24, 43, 43,
 0,0,0,0, 22, 22,-47,-47, 20, 20, 38, 38,
 0,0,0,0, 21, 21,-41,-41, 15, 15, 32, 32,
 0,0,0,0, 22, 22,-35,-35,  8,  8, 25, 25,
 0,0,0,0, 24, 24,-31,-31,  0,  0, 19, 19,
 0,0,0,0, 26, 26,-28,-28, -8, -8, 11, 11,
 0,0,0,0, 29, 29,-25,-25,-15,-15,  3,  3,
 0,0,0,0, 33, 33,-24,-24,-23,-23, -4, -4,
 0,0,0,0, 38, 38,-23,-23,-30,-30,-10,-10,
 0,0,0,0, 44, 44,-24,-24,-36,-36,-15,-15,
 0,0,0,0, 52, 52,-26,-26,-42,-42,-18,-18,
 0,0,0,0, 60, 60,-30,-30,-45,-45,-18,-18,
 0,0,0,0, 68, 68,-36,-36,-47,-47,-21,-21,
 0,0,0,0, 77, 77,-40,-40,-47,-47,-25,-25,
 0,0,0,0, 84, 84,-43,-43,-46,-46,-25,-25,
 0,0,0,0, 87, 87,-48,-48,-42,-42,-22,-22,
 0,0,0,0, 89, 89,-54,-54,-37,-37,-17,-17,
 0,0,0,0, 88, 88,-60,-60,-30,-30,-12,-12,
 0,0,0,0, 85, 85,-66,-66,-24,-24, -5, -5,
 0,0,0,0, 81, 81,-72,-72,-16,-16,  3,  3,
 0,0,0,0, 76, 76,-78,-78, -8, -8, 11, 11,
 0,0,0,0, 70, 70,-82,-82, -1, -1, 19, 19,
 0,0,0,0, 64, 64,-86,-86,  5,  5, 26, 26,
 0,0,0,0, 58, 58,-88,-88, 12, 12, 32, 32,
 0,0,0,0, 52, 52,-89,-89, 16, 16, 39, 39,
 0,0,0,0, 47, 47,-87,-87, 18, 18, 43, 43,
 0,0,0,0, 41, 41,-82,-82, 19, 19, 46, 46,
};
const char bk[] PROGMEM = { 
45, 0, 0,
 0,0,0,0, 30, 39,-57,-64,  6, -9, -6,  9,
 0,0,0,0, 28, 49,-58,-56,  7,-11, -7, 11,
 0,0,0,0, 25, 58,-59,-47,  9,-10, -9, 11,
 0,0,0,0, 23, 65,-60,-37, 10, -8,-10,  8,
 0,0,0,0, 20, 66,-61,-34, 12, -6,-12,  6,
 0,0,0,0, 17, 66,-62,-31, 14, -3,-14,  3,
 0,0,0,0, 14, 64,-63,-28, 16,  1,-16, -1,
 0,0,0,0, 12, 61,-63,-27, 18,  5,-18, -5,
 0,0,0,0, 9, 58,-64,-27, 20,  8,-20, -8,
 0,0,0,0, 6, 57,-64,-30, 22,  7,-22, -7,
 0,0,0,0, 3, 55,-64,-32, 25,  6,-25, -6,
 0,0,0,0, 0, 54,-64,-35, 28,  5,-28, -5,
 0,0,0,0, -3, 52,-64,-37, 31,  4,-32, -4,
 0,0,0,0, -7, 50,-63,-40, 35,  4,-35, -4,
 0,0,0,0, -10, 48,-64,-42, 38,  3,-38, -3,
 0,0,0,0, -10, 46,-66,-44, 36,  3,-36, -3,
 0,0,0,0, -9, 44,-69,-46, 32,  3,-32, -3,
 0,0,0,0, -6, 42,-73,-48, 25,  3,-25, -3,
 0,0,0,0, -2, 40,-75,-50, 19,  3,-19, -4,
 0,0,0,0,  3, 38,-76,-52, 14,  4,-14, -4,
 0,0,0,0, 15, 35,-74,-53,  4,  5, -4, -5,
 0,0,0,0, 26, 33,-71,-55, -3,  5,  3, -5,
 0,0,0,0, 37, 30,-65,-57, -8,  6,  8, -6,
 0,0,0,0, 47, 28,-58,-58,-11,  7, 11, -7,
 0,0,0,0, 56, 25,-49,-59,-11,  9, 11, -9,
 0,0,0,0, 64, 23,-39,-60, -9, 10,  9,-10,
 0,0,0,0, 66, 20,-35,-61, -7, 12,  7,-12,
 0,0,0,0, 66, 17,-31,-62, -4, 14,  4,-14,
 0,0,0,0, 65, 14,-29,-63,  0, 16,  0,-16,
 0,0,0,0, 62, 12,-27,-63,  4, 18, -5,-18,
 0,0,0,0, 59,  9,-27,-64,  7, 20, -7,-20,
 0,0,0,0, 57,  6,-29,-64,  7, 22, -7,-22,
 0,0,0,0, 56,  3,-32,-64,  6, 25, -6,-25,
 0,0,0,0, 54,  0,-34,-64,  5, 28, -5,-28,
 0,0,0,0, 52, -3,-37,-64,  4, 31, -4,-32,
 0,0,0,0, 51, -7,-39,-63,  4, 35, -4,-35,
 0,0,0,0, 49,-10,-41,-64,  3, 38, -3,-38,
 0,0,0,0, 47,-10,-43,-66,  3, 36, -3,-36,
 0,0,0,0, 45, -9,-46,-69,  3, 32, -3,-32,
 0,0,0,0, 43, -6,-48,-73,  3, 25, -3,-25,
 0,0,0,0, 40, -2,-49,-75,  3, 19, -4,-19,
 0,0,0,0, 38,  3,-51,-76,  4, 14, -4,-14,
 0,0,0,0, 36, 15,-53,-74,  5,  4, -5, -4,
 0,0,0,0, 33, 26,-55,-71,  5, -3, -5,  3,
 0,0,0,0, 31, 37,-56,-65,  6, -8, -6,  8,
};
const char bkL[] PROGMEM = { 
37, 0, 0, 
 0,0,0,0, 32, 39,-57,-61,  3, -9, -6,  2, 
 0,0,0,0, 31, 51,-58,-59,  3,-11, -8,  4, 
 0,0,0,0, 30, 61,-60,-56,  3,-10, -9,  5, 
 0,0,0,0, 29, 66,-61,-54,  4, -8,-11,  5, 
 0,0,0,0, 28, 66,-62,-53,  5, -4,-13,  4, 
 0,0,0,0, 27, 64,-63,-51,  5,  1,-16,  3, 
 0,0,0,0, 26, 61,-63,-50,  6,  6,-18,  1, 
 0,0,0,0, 25, 57,-64,-51,  6,  7,-21,  0, 
 0,0,0,0, 24, 56,-64,-51,  7,  6,-24,  0, 
 0,0,0,0, 23, 54,-64,-52,  7,  5,-28,  0, 
 0,0,0,0, 22, 52,-64,-53,  8,  4,-32,  0, 
 0,0,0,0, 20, 50,-63,-53,  9,  4,-37,  0, 
 0,0,0,0, 20, 48,-64,-54,  8,  3,-38, -1, 
 0,0,0,0, 20, 45,-68,-55,  8,  3,-34, -1, 
 0,0,0,0, 21, 43,-72,-56,  6,  3,-26, -1, 
 0,0,0,0, 22, 40,-75,-56,  4,  3,-19, -2, 
 0,0,0,0, 24, 37,-75,-57,  3,  4,-12, -2, 
 0,0,0,0, 29, 34,-73,-58,  0,  5, -1, -2, 
 0,0,0,0, 33, 31,-68,-58, -2,  6,  6, -3, 
 0,0,0,0, 37, 28,-59,-59, -3,  7, 10, -3, 
 0,0,0,0, 41, 25,-49,-60, -4,  9, 11, -3, 
 0,0,0,0, 44, 22,-37,-60, -5, 11,  8, -4, 
 0,0,0,0, 46, 19,-33,-61, -5, 13,  6, -5, 
 0,0,0,0, 45, 16,-30,-61, -4, 15,  2, -5, 
 0,0,0,0, 45, 12,-27,-62, -2, 17, -4, -6, 
 0,0,0,0, 44,  9,-27,-62,  0, 20, -7, -6, 
 0,0,0,0, 43,  5,-30,-63,  0, 23, -7, -7, 
 0,0,0,0, 42,  2,-33,-63,  0, 26, -5, -7, 
 0,0,0,0, 41, -2,-36,-64,  0, 30, -5, -8, 
 0,0,0,0, 40, -6,-39,-64,  0, 34, -4, -9, 
 0,0,0,0, 39,-10,-41,-64,  1, 38, -3, -9, 
 0,0,0,0, 38,-10,-44,-66,  1, 35, -3, -8, 
 0,0,0,0, 37, -8,-46,-67,  1, 29, -3, -6, 
 0,0,0,0, 36, -4,-49,-67,  1, 22, -3, -5, 
 0,0,0,0, 35,  1,-51,-67,  2, 16, -4, -3, 
 0,0,0,0, 34, 15,-53,-65,  2,  4, -5, -1, 
 0,0,0,0, 33, 28,-55,-64,  2, -4, -5,  1,
};
const char bkR[] PROGMEM = { 
37, 0, 0, 
 0,0,0,0, 30, 35,-58,-64,  6, -3, -3,  9, 
 0,0,0,0, 27, 39,-59,-55,  8, -4, -3, 11, 
 0,0,0,0, 24, 43,-60,-43,  9, -5, -3, 10, 
 0,0,0,0, 21, 45,-60,-36, 11, -5, -4,  7, 
 0,0,0,0, 18, 46,-61,-31, 13, -4, -5,  4, 
 0,0,0,0, 14, 45,-61,-28, 16, -3, -5, -1, 
 0,0,0,0, 11, 44,-62,-27, 18, -1, -6, -6, 
 0,0,0,0,  8, 43,-62,-28, 21,  0, -6, -7, 
 0,0,0,0,  4, 42,-63,-31, 24,  0, -7, -6, 
 0,0,0,0,  0, 42,-63,-34, 28,  0, -7, -5, 
 0,0,0,0, -3, 41,-64,-37, 31,  0, -8, -4, 
 0,0,0,0, -8, 40,-64,-40, 37,  1, -9, -4,
 0,0,0,0, -10, 39,-65,-43, 38,  1, -8, -3,
 0,0,0,0, -10, 38,-66,-45, 34,  1, -8, -3,
 0,0,0,0, -6, 37,-67,-48, 26,  1, -6, -3, 
 0,0,0,0, -2, 36,-67,-50, 19,  1, -3, -4, 
 0,0,0,0,  6, 35,-67,-52, 12,  2, -3, -4, 
 0,0,0,0, 20, 34,-65,-54,  1,  2,  0, -5, 
 0,0,0,0, 33, 33,-63,-56, -6,  2,  2, -6, 
 0,0,0,0, 45, 31,-60,-58,-10,  3,  3, -7, 
 0,0,0,0, 56, 30,-57,-59,-11,  3,  4, -9, 
 0,0,0,0, 65, 29,-54,-60, -8,  4,  5,-10, 
 0,0,0,0, 66, 28,-54,-61, -6,  5,  5,-13, 
 0,0,0,0, 66, 27,-52,-63, -2,  5,  3,-15, 
 0,0,0,0, 63, 26,-51,-63,  3,  6,  2,-17, 
 0,0,0,0, 59, 25,-50,-64,  7,  6,  0,-20, 
 0,0,0,0, 57, 24,-51,-64,  7,  7,  0,-23, 
 0,0,0,0, 55, 23,-51,-64,  5,  7,  0,-26, 
 0,0,0,0, 53, 22,-52,-64,  5,  8,  0,-30, 
 0,0,0,0, 51, 21,-53,-64,  4,  9,  0,-34, 
 0,0,0,0, 49, 20,-54,-64,  3,  9,  0,-38, 
 0,0,0,0, 46, 20,-55,-67,  3,  8, -1,-35, 
 0,0,0,0, 44, 20,-55,-71,  3,  6, -1,-29, 
 0,0,0,0, 41, 21,-56,-74,  3,  5, -1,-22, 
 0,0,0,0, 39, 23,-57,-75,  4,  3, -2,-16, 
 0,0,0,0, 36, 27,-57,-74,  5,  1, -2, -4, 
 0,0,0,0, 33, 31,-58,-70,  5, -1, -2,  4,
};
const char cr[] PROGMEM = { 
34, 0, -5, 
 0,0,0,0, 35, 37,-46,-53,-23,-32, -3, 12, 
 0,0,0,0, 39, 30,-43,-57,-24,-29, -3, 11, 
 0,0,0,0, 42, 24,-40,-61,-25,-26, -4, 12, 
 0,0,0,0, 47, 18,-37,-65,-26,-22, -5, 11, 
 0,0,0,0, 51, 12,-34,-69,-26,-19, -7, 10, 
 0,0,0,0, 54,  6,-31,-72,-27,-14, -8,  9, 
 0,0,0,0, 58,  1,-28,-74,-26, -9,-10,  6, 
 0,0,0,0, 61, -3,-25,-67,-26,  2,-11, -9, 
 0,0,0,0, 64,  1,-21,-64,-26, -1,-14, -9, 
 0,0,0,0, 67,  5,-18,-63,-25, -5,-16, -7, 
 0,0,0,0, 75,  9,-16,-61,-29, -8,-12, -6, 
 0,0,0,0, 73, 13,-24,-59,-35,-11, -1, -4, 
 0,0,0,0, 68, 16,-29,-57,-36,-13,  3, -4, 
 0,0,0,0, 62, 20,-34,-55,-36,-16,  5, -3, 
 0,0,0,0, 56, 25,-39,-52,-36,-18,  7, -3, 
 0,0,0,0, 50, 29,-43,-50,-35,-20,  9, -2, 
 0,0,0,0, 44, 32,-48,-47,-34,-22, 11, -3, 
 0,0,0,0, 37, 36,-53,-45,-32,-23, 12, -3, 
 0,0,0,0, 31, 40,-56,-42,-29,-24, 12, -4, 
 0,0,0,0, 25, 44,-61,-39,-26,-25, 12, -5, 
 0,0,0,0, 19, 48,-64,-36,-23,-26, 11, -6, 
 0,0,0,0, 13, 52,-68,-33,-19,-26, 10, -7, 
 0,0,0,0,  7, 56,-71,-30,-15,-27,  9, -9, 
 0,0,0,0,  1, 59,-74,-27, -9,-26,  7,-10, 
 0,0,0,0, -4, 62,-69,-23,  2,-26, -7,-13, 
 0,0,0,0,  1, 65,-64,-20, -1,-26, -9,-15, 
 0,0,0,0,  4, 68,-63,-17, -4,-24, -7,-17, 
 0,0,0,0,  8, 76,-61,-20, -7,-33, -6, -5, 
 0,0,0,0, 12, 71,-59,-25,-10,-35, -5,  0, 
 0,0,0,0, 16, 66,-57,-31,-13,-36, -4,  3, 
 0,0,0,0, 20, 60,-55,-36,-15,-37, -3,  6, 
 0,0,0,0, 24, 54,-53,-40,-18,-36, -3,  7, 
 0,0,0,0, 28, 48,-50,-45,-19,-35, -3,  9, 
 0,0,0,0, 32, 42,-48,-49,-21,-33, -3, 11,
};
const char crL[] PROGMEM = { 
26, 0, -5, 
 0,0,0,0, 35, 37,-46,-50,-25,-32, -3,  6, 
 0,0,0,0, 37, 28,-42,-52,-26,-28, -4,  6, 
 0,0,0,0, 39, 20,-38,-53,-26,-24, -5,  6, 
 0,0,0,0, 41, 12,-34,-55,-26,-19, -7,  7, 
 0,0,0,0, 43,  4,-30,-57,-27,-13, -9,  6, 
 0,0,0,0, 45, -5,-26,-58,-28,  1,-10,  3, 
 0,0,0,0, 47,  1,-21,-55,-28, -1,-14,  1, 
 0,0,0,0, 48,  6,-17,-54,-28, -5,-17,  1, 
 0,0,0,0, 50, 11,-23,-53,-32,-10, -2,  2, 
 0,0,0,0, 48, 16,-29,-52,-32,-13,  3,  2, 
 0,0,0,0, 45, 21,-36,-51,-31,-16,  6,  2, 
 0,0,0,0, 42, 27,-42,-50,-30,-20,  9,  1, 
 0,0,0,0, 39, 32,-48,-48,-30,-22, 11,  1, 
 0,0,0,0, 37, 37,-54,-47,-28,-23, 12,  1, 
 0,0,0,0, 34, 42,-59,-46,-27,-25, 12,  1, 
 0,0,0,0, 31, 48,-64,-44,-26,-26, 11,  0, 
 0,0,0,0, 29, 53,-69,-43,-25,-27, 10,  0, 
 0,0,0,0, 26, 58,-73,-42,-23,-26,  8,  0, 
 0,0,0,0, 22, 62,-69,-41,-19,-26, -7,  0, 
 0,0,0,0, 24, 66,-64,-40,-19,-26, -8, -1, 
 0,0,0,0, 26, 75,-61,-38,-20,-29, -7,  1, 
 0,0,0,0, 27, 71,-59,-41,-21,-35, -5,  4, 
 0,0,0,0, 29, 64,-56,-43,-22,-36, -4,  4, 
 0,0,0,0, 31, 56,-54,-46,-23,-36, -2,  5, 
 0,0,0,0, 33, 48,-50,-47,-24,-35, -3,  5, 
 0,0,0,0, 35, 39,-47,-49,-24,-32, -3,  5,
};
const char crR[] PROGMEM = { 
26, 0, -5, 
 0,0,0,0, 35, 37,-48,-53,-23,-28,  1, 12, 
 0,0,0,0, 40, 34,-47,-59,-24,-27,  1, 12, 
 0,0,0,0, 45, 31,-46,-64,-25,-26,  1, 12, 
 0,0,0,0, 51, 29,-44,-69,-26,-25,  0, 10, 
 0,0,0,0, 56, 26,-43,-72,-27,-23,  0,  8, 
 0,0,0,0, 60, 22,-42,-71,-26,-20,  0, -4, 
 0,0,0,0, 64, 24,-40,-64,-26,-19,  0, -9, 
 0,0,0,0, 68, 26,-38,-62,-24,-20, -1, -6, 
 0,0,0,0, 74, 27,-40,-59,-34,-21,  3, -5, 
 0,0,0,0, 68, 29,-42,-57,-36,-22,  4, -4, 
 0,0,0,0, 60, 31,-44,-54,-37,-23,  4, -3, 
 0,0,0,0, 52, 33,-47,-51,-36,-24,  5, -3, 
 0,0,0,0, 44, 35,-48,-47,-34,-24,  5, -3, 
 0,0,0,0, 35, 36,-50,-44,-31,-25,  6, -3, 
 0,0,0,0, 26, 38,-52,-40,-27,-26,  6, -4, 
 0,0,0,0, 19, 40,-54,-36,-23,-26,  6, -6, 
 0,0,0,0, 11, 42,-55,-32,-17,-27,  7, -7, 
 0,0,0,0,  3, 44,-57,-28,-11,-27,  6,-10, 
 0,0,0,0, -4, 45,-57,-23,  2,-28,  2,-13, 
 0,0,0,0,  2, 47,-55,-19, -2,-29,  1,-15, 
 0,0,0,0,  7, 51,-54,-16, -6,-31,  1,-12, 
 0,0,0,0, 12, 49,-53,-25,-10,-32,  2,  0, 
 0,0,0,0, 17, 47,-52,-32,-13,-31,  2,  4, 
 0,0,0,0, 22, 44,-51,-39,-16,-30,  2,  7, 
 0,0,0,0, 28, 41,-50,-45,-19,-30,  1,  9, 
 0,0,0,0, 33, 38,-48,-51,-22,-29,  1, 11,
};
const char ly[] PROGMEM = { 
20, 0, -20,
0,0,0,0, 114,117,-45,-53, 52, 49,-38,-24,
0,0,0,0, 114,117,-39,-58, 52, 49,-42,-23,
0,0,0,0, 114,117,-34,-62, 52, 49,-46,-21,
0,0,0,0, 114,116,-26,-66, 52, 48,-54,-22,
0,0,0,0, 114,116,-22,-66, 54, 48,-59,-25,
0,0,0,0, 114,116,-25,-64, 54, 48,-50,-30,
0,0,0,0, 115,115,-30,-60, 52, 50,-42,-34,
0,0,0,0, 116,115,-35,-58, 50, 50,-36,-34,
0,0,0,0, 116,115,-42,-54, 50, 50,-31,-34,
0,0,0,0, 116,115,-47,-49, 50, 50,-28,-36,
0,0,0,0, 117,114,-53,-43, 49, 52,-25,-39,
0,0,0,0, 117,114,-58,-37, 49, 52,-22,-44,
0,0,0,0, 117,114,-63,-30, 49, 52,-21,-50,
0,0,0,0, 116,114,-66,-22, 48, 54,-22,-59,
0,0,0,0, 116,114,-66,-24, 48, 54,-25,-54,
0,0,0,0, 116,115,-63,-27, 48, 52,-31,-47,
0,0,0,0, 115,116,-60,-31, 50, 50,-34,-41,
0,0,0,0, 115,116,-58,-38, 50, 50,-33,-34,
0,0,0,0, 115,116,-53,-44, 50, 50,-34,-29,
0,0,0,0, 115,116,-48,-50, 50, 50,-36,-26,
};
const char tr[] PROGMEM = { 
36, 0, 0, 
 0,0,0,0, 43, 48,-51,-56,  7, -2, -8,  1, 
 0,0,0,0, 46, 37,-48,-63,  7,  0, -7, -4, 
 0,0,0,0, 49, 25,-45,-67,  7,  5, -7,-12, 
 0,0,0,0, 52, 12,-42,-68,  8, 14, -7,-25, 
 0,0,0,0, 54,  0,-38,-66, 10, 24, -7,-40, 
 0,0,0,0, 56, -4,-35,-62, 12, 30, -8,-48, 
 0,0,0,0, 58, -5,-31,-58, 14, 35, -9,-55, 
 0,0,0,0, 60, -2,-28,-58, 17, 33,-10,-51, 
 0,0,0,0, 60,  3,-23,-60, 20, 28,-13,-43, 
 0,0,0,0, 61,  7,-19,-61, 24, 24,-15,-36, 
 0,0,0,0, 61, 12,-15,-61, 28, 20,-18,-31, 
 0,0,0,0, 61, 16,-10,-61, 33, 17,-22,-27, 
 0,0,0,0, 62, 21, -8,-61, 35, 14,-22,-22, 
 0,0,0,0, 66, 25, -9,-60, 30, 12,-18,-19, 
 0,0,0,0, 68, 29,-12,-59, 24, 10,-13,-16, 
 0,0,0,0, 68, 33,-22,-57, 15,  8, -6,-13, 
 0,0,0,0, 64, 36,-35,-56,  5,  7,  0,-11, 
 0,0,0,0, 57, 40,-46,-53,  0,  7,  2, -9, 
 0,0,0,0, 48, 43,-56,-51, -2,  7,  1, -8, 
 0,0,0,0, 37, 46,-63,-48,  0,  7, -4, -7, 
 0,0,0,0, 25, 49,-67,-45,  5,  7,-12, -7, 
 0,0,0,0, 12, 52,-68,-42, 14,  8,-25, -7, 
 0,0,0,0,  0, 54,-66,-38, 24, 10,-40, -7, 
 0,0,0,0, -4, 56,-62,-35, 30, 12,-48, -8, 
 0,0,0,0, -5, 58,-58,-31, 35, 14,-55, -9, 
 0,0,0,0, -2, 60,-58,-28, 33, 17,-51,-10, 
 0,0,0,0,  3, 60,-60,-23, 28, 20,-43,-13, 
 0,0,0,0,  7, 61,-61,-19, 24, 24,-36,-15, 
 0,0,0,0, 12, 61,-61,-15, 20, 28,-31,-18, 
 0,0,0,0, 16, 61,-61,-10, 17, 33,-27,-22, 
 0,0,0,0, 21, 62,-61, -8, 14, 35,-22,-22, 
 0,0,0,0, 25, 66,-60, -9, 12, 30,-19,-18, 
 0,0,0,0, 29, 68,-59,-12, 10, 24,-16,-13, 
 0,0,0,0, 33, 68,-57,-22,  8, 15,-13, -6, 
 0,0,0,0, 36, 64,-56,-35,  7,  5,-11,  0, 
 0,0,0,0, 40, 57,-53,-46,  7,  0, -9,  2,
};
const char trL[] PROGMEM = { 
25, 0, 0, 
 0,0,0,0, 33, 37,-40,-45, 10, -1,-13, -3, 
 0,0,0,0, 35, 22,-36,-49, 10,  5,-14, -3, 
 0,0,0,0, 36,  6,-31,-52,  9, 17,-15, -4, 
 0,0,0,0, 38, -7,-27,-54,  9, 31,-16, -6, 
 0,0,0,0, 39,-14,-22,-53,  9, 47,-19, -9, 
 0,0,0,0, 40,-10,-17,-51,  8, 45,-21,-10, 
 0,0,0,0, 42, -3,-11,-50,  8, 38,-26,-10, 
 0,0,0,0, 43,  3, -6,-49,  8, 32,-30, -9, 
 0,0,0,0, 44,  9,  1,-48, 10, 27,-37, -9, 
 0,0,0,0, 47, 15, -3,-47,  6, 22,-25, -9, 
 0,0,0,0, 46, 20,-12,-45,  3, 19,-13, -9, 
 0,0,0,0, 42, 25,-28,-44,  3, 16, -3, -9, 
 0,0,0,0, 38, 30,-43,-43,  4, 14,  2, -9, 
 0,0,0,0, 33, 34,-55,-41,  5, 14,  2, -9, 
 0,0,0,0, 29, 38,-64,-40,  7, 13, -3, -9, 
 0,0,0,0, 24, 42,-69,-39, 10, 13,-13, -9, 
 0,0,0,0, 20, 45,-65,-37, 14, 14,-25, -9, 
 0,0,0,0, 20, 48,-57,-36, 16, 15,-33, -9, 
 0,0,0,0, 22, 51,-57,-35, 15, 17,-29, -9, 
 0,0,0,0, 24, 53,-56,-33, 14, 20,-24,-10, 
 0,0,0,0, 25, 55,-54,-31, 13, 23,-20,-10, 
 0,0,0,0, 27, 60,-53,-31, 12, 21,-17, -9, 
 0,0,0,0, 29, 65,-50,-33, 12,  8,-15, -6, 
 0,0,0,0, 30, 60,-47,-37, 11,  1,-14, -4, 
 0,0,0,0, 32, 49,-44,-42, 10, -3,-13, -3,
};
const char trR[] PROGMEM = { 
25, 0, 0, 
 0,0,0,0, 31, 36,-42,-49, 15,  5, -9,  3, 
 0,0,0,0, 35, 31,-41,-61, 14,  6, -9,  1, 
 0,0,0,0, 39, 26,-40,-67, 13,  8, -9, -7, 
 0,0,0,0, 43, 22,-38,-68, 14, 11, -9,-18, 
 0,0,0,0, 47, 20,-37,-61, 14, 15, -9,-31, 
 0,0,0,0, 49, 21,-36,-57, 16, 15, -9,-31, 
 0,0,0,0, 52, 22,-34,-56, 18, 15,-10,-26, 
 0,0,0,0, 54, 25,-32,-55, 21, 13,-10,-22, 
 0,0,0,0, 55, 26,-30,-54, 26, 13,-12,-19, 
 0,0,0,0, 63, 27,-31,-51, 15, 12, -8,-16, 
 0,0,0,0, 64, 30,-34,-49,  5, 11, -5,-14, 
 0,0,0,0, 55, 31,-39,-45, -1, 11, -4,-13, 
 0,0,0,0, 44, 32,-43,-42, -3, 10, -3,-13, 
 0,0,0,0, 30, 34,-47,-37,  2, 10, -3,-14, 
 0,0,0,0, 15, 35,-51,-33, 10,  9, -4,-14, 
 0,0,0,0, -2, 37,-54,-29, 25,  9, -5,-16,
 0,0,0,0, -11, 39,-54,-24, 40,  9, -8,-17,
 0,0,0,0, -13, 40,-51,-19, 49,  8,-11,-20, 
 0,0,0,0, -6, 41,-50,-14, 42,  8,-10,-24, 
 0,0,0,0,  0, 43,-49, -8, 35,  8,-10,-28, 
 0,0,0,0,  6, 44,-49, -2, 29,  8, -9,-33, 
 0,0,0,0, 12, 46,-47,  0, 24,  7, -9,-32, 
 0,0,0,0, 17, 47,-46, -8, 20,  4, -9,-17, 
 0,0,0,0, 23, 44,-45,-22, 17,  3, -9, -6, 
 0,0,0,0, 27, 39,-43,-37, 15,  4, -9,  1,
};
const char vt[] PROGMEM = { 
17, 0, 0, 
 0,0,0,0, 51, 39,-57,-43,-18,  7, 19, -7, 
 0,0,0,0, 42, 39,-47,-43,  1,  7,  0, -7, 
 0,0,0,0, 39, 39,-43,-43,  7,  7, -7, -7, 
 0,0,0,0, 39, 39,-43,-43,  7,  7, -7, -7, 
 0,0,0,0, 39, 42,-43,-47,  7,  0, -7,  0, 
 0,0,0,0, 39, 51,-43,-57,  7,-19, -7, 19, 
 0,0,0,0, 39, 59,-43,-67,  7,-36, -7, 36, 
 0,0,0,0, 39, 59,-43,-66,  7,-35, -7, 36, 
 0,0,0,0, 39, 51,-43,-57,  7,-18, -7, 19, 
 0,0,0,0, 39, 42,-43,-47,  7,  1, -7,  0, 
 0,0,0,0, 39, 39,-43,-43,  7,  7, -7, -7, 
 0,0,0,0, 39, 39,-43,-43,  7,  7, -7, -7, 
 0,0,0,0, 40, 39,-45,-43,  3,  7, -3, -7, 
 0,0,0,0, 50, 39,-56,-43,-16,  7, 16, -7, 
 0,0,0,0, 58, 39,-65,-43,-33,  7, 33, -7, 
 0,0,0,0, 60, 39,-68,-43,-38,  7, 38, -7, 
 0,0,0,0, 52, 39,-59,-43,-21,  7, 22, -7,
};
const char wk[] PROGMEM = { 
43, 0, 0,
 0,0,0,0, 12, 59,-55,-49, 23, 24, -2,-12,
 0,0,0,0, 15, 59,-63,-47, 22, 27, -8,-11,
 0,0,0,0, 18, 59,-67,-45, 20, 30,-20,-11,
 0,0,0,0, 21, 59,-66,-43, 18, 34,-33,-10,
 0,0,0,0, 24, 59,-64,-40, 16, 38,-37,-10,
 0,0,0,0, 27, 58,-62,-37, 15, 43,-41,-11,
 0,0,0,0, 30, 57,-60,-35, 13, 47,-45,-12,
 0,0,0,0, 32, 58,-57,-32, 13, 47,-48,-13,
 0,0,0,0, 35, 60,-57,-29, 12, 45,-47,-14,
 0,0,0,0, 38, 62,-58,-26, 12, 41,-42,-15,
 0,0,0,0, 40, 65,-59,-23, 11, 36,-37,-16,
 0,0,0,0, 43, 66,-59,-20, 11, 32,-33,-18,
 0,0,0,0, 45, 67,-59,-17, 11, 18,-30,-20,
 0,0,0,0, 47, 62,-59,-14, 11,  7,-26,-22,
 0,0,0,0, 49, 53,-59,-12, 12,  1,-24,-24,
 0,0,0,0, 51, 40,-58,-12, 13,  2,-21,-22,
 0,0,0,0, 52, 26,-57,-12, 14,  7,-19,-20,
 0,0,0,0, 54, 17,-55,-14, 15, 13,-18,-16,
 0,0,0,0, 55, 15,-54,-16, 17, 16,-16,-15,
 0,0,0,0, 57, 13,-53,-23, 18, 19,-15, -9,
 0,0,0,0, 58, 12,-51,-38, 21, 22,-13, -2,
 0,0,0,0, 58, 12,-49,-51, 23, 24,-12, -1,
 0,0,0,0, 59, 13,-47,-60, 26, 23,-11, -6,
 0,0,0,0, 59, 17,-45,-66, 29, 20,-11,-15,
 0,0,0,0, 59, 20,-43,-66, 32, 18,-10,-33,
 0,0,0,0, 59, 23,-41,-65, 37, 17,-10,-35,
 0,0,0,0, 58, 26,-38,-63, 41, 15,-11,-40,
 0,0,0,0, 57, 29,-35,-61, 46, 14,-12,-44,
 0,0,0,0, 58, 32,-33,-58, 47, 13,-13,-47,
 0,0,0,0, 59, 34,-30,-57, 47, 12,-14,-48,
 0,0,0,0, 61, 37,-27,-58, 43, 12,-15,-43,
 0,0,0,0, 64, 40,-24,-59, 38, 11,-16,-38,
 0,0,0,0, 65, 42,-21,-59, 34, 11,-17,-34,
 0,0,0,0, 67, 44,-18,-59, 23, 11,-19,-31,
 0,0,0,0, 64, 46,-15,-59, 10, 11,-21,-27,
 0,0,0,0, 56, 48,-12,-59,  3, 12,-23,-24,
 0,0,0,0, 45, 50,-12,-58,  1, 13,-23,-22,
 0,0,0,0, 31, 52,-12,-57,  5, 14,-20,-19,
 0,0,0,0, 18, 53,-14,-56, 13, 15,-17,-17,
 0,0,0,0, 16, 55,-16,-55, 15, 17,-15,-16,
 0,0,0,0, 14, 57,-18,-53, 17, 17,-13,-15,
 0,0,0,0, 12, 57,-33,-52, 21, 20, -4,-14,
 0,0,0,0, 12, 58,-47,-50, 23, 22,  0,-13,
};
const char wkL[] PROGMEM = { 
43, 0, 0, 
 0,0,0,0, 40, 59,-55,-51,  8, 24, -2, -9, 
 0,0,0,0, 41, 59,-63,-50,  8, 27, -8, -9, 
 0,0,0,0, 42, 59,-67,-49,  7, 30,-20, -8, 
 0,0,0,0, 42, 59,-66,-48,  7, 34,-33, -8, 
 0,0,0,0, 43, 59,-64,-48,  7, 38,-37, -8, 
 0,0,0,0, 44, 58,-62,-47,  7, 43,-41, -8, 
 0,0,0,0, 45, 57,-60,-46,  8, 47,-45, -8, 
 0,0,0,0, 46, 58,-57,-46,  8, 47,-48, -8, 
 0,0,0,0, 46, 60,-57,-45,  8, 45,-47, -8, 
 0,0,0,0, 47, 62,-58,-44,  8, 41,-42, -8, 
 0,0,0,0, 48, 65,-59,-43,  8, 36,-37, -8, 
 0,0,0,0, 48, 66,-59,-42,  8, 32,-33, -8, 
 0,0,0,0, 49, 67,-59,-41,  8, 18,-30, -8, 
 0,0,0,0, 50, 62,-59,-41,  9,  7,-26, -8, 
 0,0,0,0, 50, 53,-59,-40,  9,  1,-24, -9, 
 0,0,0,0, 51, 40,-58,-40,  9,  2,-21, -8, 
 0,0,0,0, 52, 26,-57,-40, 10,  7,-19, -7, 
 0,0,0,0, 52, 17,-55,-41, 10, 13,-18, -6, 
 0,0,0,0, 53, 15,-54,-41, 10, 16,-16, -6, 
 0,0,0,0, 53, 13,-53,-44, 11, 19,-15, -4, 
 0,0,0,0, 54, 12,-51,-48, 11, 22,-13, -4, 
 0,0,0,0, 54, 12,-49,-51, 12, 24,-12, -5, 
 0,0,0,0, 55, 13,-47,-54, 12, 23,-11, -6, 
 0,0,0,0, 55, 17,-45,-57, 13, 20,-11, -8, 
 0,0,0,0, 56, 20,-43,-60, 13, 18,-10,-11, 
 0,0,0,0, 56, 23,-41,-59, 14, 17,-10,-13, 
 0,0,0,0, 57, 26,-38,-59, 14, 15,-11,-13, 
 0,0,0,0, 57, 29,-35,-59, 15, 14,-12,-14, 
 0,0,0,0, 58, 32,-33,-58, 15, 13,-13,-15, 
 0,0,0,0, 58, 34,-30,-57, 14, 12,-14,-15, 
 0,0,0,0, 59, 37,-27,-57, 14, 12,-15,-15, 
 0,0,0,0, 59, 40,-24,-57, 12, 11,-16,-14, 
 0,0,0,0, 59, 42,-21,-56, 12, 11,-17,-14, 
 0,0,0,0, 59, 44,-18,-56, 10, 11,-19,-13, 
 0,0,0,0, 56, 46,-15,-56,  7, 11,-21,-12, 
 0,0,0,0, 53, 48,-12,-55,  6, 12,-23,-12, 
 0,0,0,0, 50, 50,-12,-54,  5, 13,-23,-12, 
 0,0,0,0, 46, 52,-12,-54,  4, 14,-20,-11, 
 0,0,0,0, 42, 53,-14,-53,  5, 15,-17,-11, 
 0,0,0,0, 41, 55,-16,-53,  6, 17,-15,-10, 
 0,0,0,0, 41, 57,-18,-52,  6, 17,-13,-10, 
 0,0,0,0, 40, 57,-33,-52,  7, 20, -4,-10, 
 0,0,0,0, 40, 58,-47,-51,  8, 22,  0, -9,
};
const char wkR[] PROGMEM = { 
43, 0, 0, 
 0,0,0,0, 12, 55,-53,-49, 23, 12, -5,-12, 
 0,0,0,0, 15, 55,-55,-47, 22, 12, -7,-11, 
 0,0,0,0, 18, 56,-58,-45, 20, 13, -9,-11, 
 0,0,0,0, 21, 56,-60,-43, 18, 13,-11,-10, 
 0,0,0,0, 24, 57,-59,-40, 16, 14,-13,-10, 
 0,0,0,0, 27, 57,-59,-37, 15, 15,-14,-11, 
 0,0,0,0, 30, 58,-58,-35, 13, 15,-15,-12, 
 0,0,0,0, 32, 58,-58,-32, 13, 15,-15,-13, 
 0,0,0,0, 35, 58,-57,-29, 12, 14,-15,-14, 
 0,0,0,0, 38, 59,-57,-26, 12, 14,-15,-15, 
 0,0,0,0, 40, 59,-56,-23, 11, 12,-14,-16, 
 0,0,0,0, 43, 60,-56,-20, 11, 11,-13,-18, 
 0,0,0,0, 45, 58,-56,-17, 11,  9,-13,-20, 
 0,0,0,0, 47, 55,-55,-14, 11,  7,-13,-22, 
 0,0,0,0, 49, 52,-55,-12, 12,  5,-12,-24, 
 0,0,0,0, 51, 49,-54,-12, 13,  4,-11,-22, 
 0,0,0,0, 52, 45,-54,-12, 14,  4,-11,-20, 
 0,0,0,0, 54, 42,-53,-14, 15,  5,-10,-16, 
 0,0,0,0, 55, 41,-53,-16, 17,  6,-10,-15, 
 0,0,0,0, 57, 40,-52,-23, 18,  7,-10, -9, 
 0,0,0,0, 58, 40,-51,-38, 21,  7, -9, -2, 
 0,0,0,0, 58, 40,-51,-51, 23,  8, -9, -1, 
 0,0,0,0, 59, 40,-50,-60, 26,  8, -9, -6, 
 0,0,0,0, 59, 41,-49,-66, 29,  8, -9,-15, 
 0,0,0,0, 59, 42,-49,-66, 32,  7, -8,-33, 
 0,0,0,0, 59, 43,-48,-65, 37,  7, -8,-35, 
 0,0,0,0, 58, 44,-47,-63, 41,  7, -8,-40, 
 0,0,0,0, 57, 44,-47,-61, 46,  8, -8,-44, 
 0,0,0,0, 58, 45,-46,-58, 47,  8, -8,-47, 
 0,0,0,0, 59, 46,-45,-57, 47,  8, -8,-48, 
 0,0,0,0, 61, 47,-44,-58, 43,  8, -8,-43, 
 0,0,0,0, 64, 47,-43,-59, 38,  8, -8,-38, 
 0,0,0,0, 65, 48,-43,-59, 34,  8, -8,-34, 
 0,0,0,0, 67, 49,-42,-59, 23,  8, -8,-31, 
 0,0,0,0, 64, 49,-41,-59, 10,  8, -8,-27, 
 0,0,0,0, 56, 50,-40,-59,  3,  9, -9,-24, 
 0,0,0,0, 45, 51,-40,-58,  1,  9, -8,-22, 
 0,0,0,0, 31, 51,-40,-57,  5, 10, -7,-19, 
 0,0,0,0, 18, 52,-40,-56, 13, 10, -7,-17, 
 0,0,0,0, 16, 53,-41,-55, 15, 10, -6,-16, 
 0,0,0,0, 14, 53,-42,-53, 17, 11, -5,-15, 
 0,0,0,0, 12, 54,-46,-52, 21, 11, -4,-14, 
 0,0,0,0, 12, 54,-50,-50, 23, 11, -5,-13,
};


const char balance[] PROGMEM = { 
1, 0, 0,
  0,  0,  0,  0,  0,  0,  0,  0, 30, 30,-30,-30, 30, 30,-30,-30,};
const char buttUp[] PROGMEM = { 
1, 0, -15,
 20, 40,  0,  0,  5,  5,  3,  3, 90, 90,-45,-45,-60,-60, -5, -5,};
const char calib[] PROGMEM = { 
1, 0, 0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,};
const char cd1[] PROGMEM = { 
1, -15, -15,
 20,-45, 30,  0,  5,  5,  3,  3, 70, 70,-45,-45,-60,-60,  0,  0,};
const char cd2[] PROGMEM = { 
1, 15, -15,
-30,-30,  0,  0,  5,  5,  3,  3, 70, 70,-45,-45,-60,-60,  0,  0,};
const char dropped[] PROGMEM = { 
1, 0, -75,
  0, 30,  0,  0, -5, -5, 15, 15,-75,-75,-60,-60, 60, 60, 30, 30,};
const char hi[] PROGMEM = { 
1, 0, 30,
 35, -5,-60,  0, -3, -3,  3,  3,-75, 30,-60,-70, 40, 75, 45,  0,};
const char hi2[] PROGMEM = { 
1, 0, 30,
 40,  0,-35,  0, -3, -3,  3,  3,-60, 30,-60,-70, 60, 75, 45,  0,};
const char lifted[] PROGMEM = { 
1, 0, 75,
  0,-70,  0,  0,  0,  0,  0,  0, 55, 55, 20, 20, 45, 45,  0,  0,};
const char pee[] PROGMEM = { 
1, 0, 0,
 45, 20,  0,  0, 15,-10, 60,-10, 45, 45,-70,-15, 15, 45, 30,-20,};
const char pee1[] PROGMEM = { 
1, 0, 0,
 45, 10,  0,  0, 15,-10, -5, -5, 45, 30,-30,-15, 15, 45,-30,  0,};
const char pu1[] PROGMEM = { 
1, 0, 0,
  0,-30,  0,  0,  0,  0,  0,  0, 20, 20, 60, 60, 60, 60,-55,-55,};
const char pu2[] PROGMEM = { 
1, 0, 0,
  0, 10,  0,  0,  0,  0,  0,  0, 60, 60, 40, 40,-45,-45,-55,-55,};
const char rc1[] PROGMEM = { 
1, 0, 0,
  0,-80,  0,  0,  0,  0,  0,  0, 60, 60, 60, 60,-45,-45,-45,-45,};
const char rc10[] PROGMEM = { 
1, 0, 0,
 45,-80,  0,  0,  0,  0,  0,  0,-80, 15,-15, 70, 60, 60,-55,  0,};
const char rc2[] PROGMEM = { 
1, 0, 0,
  0, 20,  0,  0,  0,  0,  0,  0, 60, 60, 60, 65, 60, 60,-55,-55,};
const char rc3[] PROGMEM = { 
1, 0, 0,
-60, 20,  0,  0,  0,  0,  0,  0, 15, 15,-15,-15, 60, 60,-55,-55,};
const char rc4[] PROGMEM = { 
1, 0, 0,
-60, 50,  0,  0,  0,  0,  0,  0, 15, 15,-15,-15, 60, 60,-55,-55,};
const char rc5[] PROGMEM = { 
1, 0, 0,
 50, 50,  0,  0,  0,  0,  0,  0, 15, 15,-15,-15, 60, 60,-55,-65,};
const char rc6[] PROGMEM = { 
1, 0, 0,
 50, 20,  0,  0,  0,  0,  0,  0,-80, 15,-15, 70, 60, 60,-55,-65,};
const char rc7[] PROGMEM = { 
1, 0, 0,
 45,-80,  0,  0,  0,  0,  0,  0,-80, 60, 60, 70, 60, 60,-55,-65,};
const char rc8[] PROGMEM = { 
1, 0, 0,
 45,-80,-35,  0,  0,  0,  0,  0,-80, 15,-15, 70, 60,-60, 55,-65,};
const char rc9[] PROGMEM = { 
1, 0, 0,
 45,-80,-70,  0,  0,  0,  0,  0,-80, 15,-15, 70, 60, 60,-55,  0,};
const char rest[] PROGMEM = { 
1, 0, 0,
-30,-80,-45,  0, -3, -3,  3,  3, 60, 60,-60,-60,-45,-45, 45, 45,};
const char sit[] PROGMEM = { 
1, 0, 30,
  0,-20,-60,  0, -5, -5, 20, 20, 30, 30,-90,-90, 60, 60, 45, 45,};
const char sleep[] PROGMEM = { 
1, 0, 0,
-10,-100,  0,  0, -5, -5,  3,  3, 80, 80,-80,-80,-55,-55, 55, 55,};
const char str[] PROGMEM = { 
1, 0, 15,
  0, 30,  0,  0, -5, -5,  0,  0,-60,-60,-15,-15, 60, 60,-45,-45,};
const char zero[] PROGMEM = { 
1, 0, 0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,};

#if !defined(MAIN_SKETCH) || !defined(I2C_EEPROM)
		//if it's not the main sketch to save data or there's no external EEPROM, 
		//the list should always contain all information.
  //const char* skillNameWithType[]={"bdI","bkI","bkLI","bkRI","crI","crLI","crRI","lyI","trI","trLI","trRI","vtI","wkI","wkLI","wkRI","balanceI","buttUpI","calibI","cd1I","cd2I","droppedI","hiI","hi2I","liftedI","peeI","pee1I","pu1I","pu2I","rc1I","rc10I","rc2I","rc3I","rc4I","rc5I","rc6I","rc7I","rc8I","rc9I","restI","sitI","sleepI","strI","zeroI",};
  const char* skillNameWithType[]={"bdI","bkI","bkLI","bkRI","crI","crLI","crRI","lyI","trI","trLI","trRI","vtI","wkI","wkLI","wkRI","balanceI","buttUpI","calibI","cd1I","cd2I","droppedI","hiI","hi2I","liftedI","peeI","pee1I","pu1I","pu2I","rc1I","rc10I","rc2I","rc3I","rc4I","rc5I","rc6I","rc7I","rc8I","rc9I","restI","sitI","sleepI","strI","zeroI",};
  const char* progmemPointer[] = {bd, bk, bkL, bkR, cr, crL, crR, ly, tr, trL, trR, vt, wk, wkL, wkR, balance, buttUp, calib, cd1, cd2, dropped, hi, hi2, lifted, pee, pee1, pu1, pu2, rc1, rc10, rc2, rc3, rc4, rc5, rc6, rc7, rc8, rc9, rest, sit, sleep, str, zero, };
#else	//only need to know the pointers to newbilities, because the intuitions have been saved onto external EEPROM,
	//while the newbilities on progmem are assigned to new addresses
  const char* progmemPointer[] = {};
#endif
//the total byte of instincts is 4473
//the maximal array size is 364 bytes of bk. 
//Make sure to leave enough memory for SRAM to work properly. Any single skill should be smaller than 400 bytes for safety.
