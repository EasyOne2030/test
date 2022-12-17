const unsigned char PPT_bits[] U8G_PROGMEM = {
    0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x80,0x01,0x00,0x80,0x00,0x80,0x81,0x00,0x40,0x00,0x80,0x01,0x01,
    0x20,0x00,0x80,0x01,0x02,0x10,0x00,0x80,0x01,0x04,0x08,0xC0,0xFF,0x01,0x08,0x04,0x61,0x00,0x43,0x10,0xC4,0x20,0x7F,0x82,0x10,0x44,0x20,0x7F,0x02,0x11,
    0x22,0x20,0x7F,0x02,0x22,0x22,0x24,0x7F,0x12,0x22,0x22,0x22,0x7F,0x22,0x22,0x11,0x21,0x00,0x42,0x44,0x11,0x29,0x00,0x4A,0x44,0x11,0xA9,0xB6,0x4A,0x44,
    0x11,0x21,0x49,0x42,0x44,0x22,0xA2,0xB6,0x22,0x22,0x22,0xA4,0xB6,0x12,0x22,0x22,0x20,0x49,0x02,0x22,0x44,0xA0,0xB6,0x02,0x11,0x84,0xA0,0xB6,0x82,0x11,
    0x04,0x21,0x49,0x42,0x10,0x08,0xA0,0xB6,0x02,0x08,0x10,0x60,0x00,0x03,0x04,0x20,0xC0,0xFF,0x01,0x02,0x40,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x80,0x00
};

const unsigned char RSSI_1_bits[] U8G_PROGMEM = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x06,0x00,0x07,0x00,0x07,0x00,0x07,0x00
};

const unsigned char RSSI_2_bits[] U8G_PROGMEM = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x60,0x00,0x70,0x00,0x74,0x00,0x76,0x00,0x77,0x00,0x77,0x00,0x77,0x00
};

const unsigned char RSSI_3_bits[] U8G_PROGMEM = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x06,0x00,0x07,0x40,0x07,0x60,0x07,0x70,0x07,0x74,0x07,0x76,0x07,0x77,0x07,0x77,0x07,0x77,0x07
};

const unsigned char RSSI_4_bits[] U8G_PROGMEM = {
    0x00,0x40,0x00,0x60,0x00,0x70,0x00,0x74,0x00,0x76,0x00,0x77,0x40,0x77,0x60,0x77,0x70,0x77,0x74,0x77,0x76,0x77,0x77,0x77,0x77,0x77,0x77,0x77
};

const unsigned char Tone_bits[] U8G_PROGMEM = {
    0x80,0x00,0x80,0x00,0x80,0x10,0x80,0x20,0xF8,0x24,0xFC,0x49,0x04,0x49,0x04,0x91,0xFC,0x91,0xFC,0x91,0x54,0x49,0xAC,0x49,0x54,0x25,0xAC,0x21,0xF8,0x10
};

const unsigned char Antenna_2_bits[] U8G_PROGMEM = {
    0x08,0x10,0x04,0x20,0x06,0x60,0x22,0x44,0x13,0xC8,0x89,0x91,0xC9,0x93,0xC9,0x93,0x8B,0xD1,0x92,0x49,0xA6,0x65,0x84,0x21,0x88,0x11,0x80,0x01,0x80,0x01,0x80,0x01
};    

//const unsigned char Settings_bits[] U8G_PROGMEM = {
//    0x00,0x07,0x80,0x07,0xC0,0x03,0xC0,0x01,0xC0,0x01,0xC0,0xC1,0xC0,0xE3,0xC0,0xFF,0xE0,0x7F,0xF0,0x3F,0xF8,0x00,0x7C,0x00,0x3E,0x00,0x1F,0x00,0x0F,0x00,0x07,0x00
//};

const unsigned char Vol_3_bits[] U8G_PROGMEM = {
    0x80,0x11,0xC0,0x21,0xE0,0x65,0xF0,0x49,0xFC,0x49,0xFC,0xC9,0xFC,0x91,0xFC,0x91,0xFC,0x91,0xFC,0xC9,0xFC,0x49,0xF0,0x49,0xE0,0x65,0xC0,0x21,0x80,0x11
};

const unsigned char Vol_2_bits[] U8G_PROGMEM = {
    0x80,0x01,0xC0,0x01,0xE0,0x05,0xF0,0x09,0xFC,0x09,0xFC,0x09,0xFC,0x11,0xFC,0x11,0xFC,0x11,0xFC,0x09,0xFC,0x09,0xF0,0x09,0xE0,0x05,0xC0,0x01,0x80,0x01
};

const unsigned char Vol_1_bits[] U8G_PROGMEM = {
    0x80,0x01,0xC0,0x01,0xE0,0x01,0xF0,0x01,0xFC,0x01,0xFC,0x01,0xFC,0x01,0xFC,0x01,0xFC,0x01,0xFC,0x01,0xFC,0x01,0xF0,0x01,0xE0,0x01,0xC0,0x01,0x80,0x01
};

const unsigned char battery_ch_bits[] U8G_PROGMEM = {
    0xF8,0xFF,0xF5,0xFF,0x04,0x00,0x06,0x80,0x04,0x00,0x03,0x80,0x07,0x80,0x03,0x80,0x07,0xC0,0x01,0x80,0x07,0xE0,0x01,0x80,0x07,0xF0,0x00,0x80,0x07,0xF8,0x3F,0x80,
    0x07,0x00,0x1E,0x80,0x07,0x00,0x0F,0x80,0x07,0x00,0x07,0x80,0x07,0x80,0x03,0x80,0x04,0x80,0x01,0x80,0x04,0xC0,0x00,0x80,0xF8,0x5F,0xFF,0xFF
};

const unsigned char battery_0_bits[] U8G_PROGMEM = {
    0xF8,0xFF,0xFF,0xFF,0x04,0x00,0x00,0x80,0x04,0x00,0x00,0x80,0x07,0x00,0x00,0x80,0x07,0x00,0x00,0x80,0x07,0x00,0x00,0x80,0x07,0x00,0x00,0x80,0x07,0x00,0x00,0x80,
    0x07,0x00,0x00,0x80,0x07,0x00,0x00,0x80,0x07,0x00,0x00,0x80,0x07,0x00,0x00,0x80,0x04,0x00,0x00,0x80,0x04,0x00,0x00,0x80,0xF8,0xFF,0xFF,0xFF
};

const unsigned char battery_33_bits[] U8G_PROGMEM = {
    0xF8,0xFF,0xFF,0xFF,0x04,0x00,0x00,0x80,0x04,0x00,0xC0,0xBF,0x07,0x00,0xC0,0xBF,0x07,0x00,0xC0,0xBF,0x07,0x00,0xC0,0xBF,0x07,0x00,0xC0,0xBF,0x07,0x00,0xC0,0xBF,
    0x07,0x00,0xC0,0xBF,0x07,0x00,0xC0,0xBF,0x07,0x00,0xC0,0xBF,0x07,0x00,0xC0,0xBF,0x04,0x00,0xC0,0xBF,0x04,0x00,0x00,0x80,0xF8,0xFF,0xFF,0xFF
};

const unsigned char battery_66_bits[] U8G_PROGMEM = {
    0xF8,0xFF,0xFF,0xFF,0x04,0x00,0x00,0x80,0x04,0xE0,0xDF,0xBF,0x07,0xE0,0xDF,0xBF,0x07,0xE0,0xDF,0xBF,0x07,0xE0,0xDF,0xBF,0x07,0xE0,0xDF,0xBF,0x07,0xE0,0xDF,0xBF,
    0x07,0xE0,0xDF,0xBF,0x07,0xE0,0xDF,0xBF,0x07,0xE0,0xDF,0xBF,0x07,0xE0,0xDF,0xBF,0x04,0xE0,0xDF,0xBF,0x04,0x00,0x00,0x80,0xF8,0xFF,0xFF,0xFF
};

const unsigned char battery_100_bits[] U8G_PROGMEM = {
    0xF8,0xFF,0xFF,0xFF,0x04,0x00,0x00,0x80,0xF4,0xEF,0xDF,0xBF,0xF7,0xEF,0xDF,0xBF,0xF7,0xEF,0xDF,0xBF,0xF7,0xEF,0xDF,0xBF,0xF7,0xEF,0xDF,0xBF,0xF7,0xEF,0xDF,0xBF,
    0xF7,0xEF,0xDF,0xBF,0xF7,0xEF,0xDF,0xBF,0xF7,0xEF,0xDF,0xBF,0xF7,0xEF,0xDF,0xBF,0xF4,0xEF,0xDF,0xBF,0x04,0x00,0x00,0x80,0xF8,0xFF,0xFF,0xFF
};
