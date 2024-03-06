// ========================================
// ==== Settings LEVEL 1 (required) =======
// ========================================


#define DEBUG_MODE true  // change "false" to "true" to enable
//#define DEBUG_MODE false  // change "false" to "true" to enable
// Next, logs levels for comfortable deallbugging, 
// if DEBUG_MODE == false, logs level are not important 
#define DEBUG_TS true         // print touchscreen logs
#define DEBUG_WiFi true       // print WiFi logs
#define DEBUG_MQTT true       // print MQTT logs
#define DEBUG_EEPROM true     // print EEPROM logs
#define DEBUG_BATT true       // print BATT logs

#define CS_PIN D2

//#define TS_MINX 250
//#define TS_MINY 200 // calibration points for touchscreen
//#define TS_MAXX 3800
//#define TS_MAXY 3750

#define TS_MINX 450
#define TS_MINY 350 // calibration points for touchscreen
#define TS_MAXX 3300
#define TS_MAXY 3700

#define TFT_DC D4
#define TFT_CS D8

#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF
#define DOSEBACKGROUND 0x0455