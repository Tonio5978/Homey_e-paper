const uint32_t update40_width = 40;
const uint32_t update40_height = 40;
const uint8_t update40_data[(40*40)/2] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xCF, 0x85, 0xFF, 0xFF, 0xFF, 0xFF, 0x8B, 0x56, 0x65, 0xB8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x1F, 0x00, 0xFB, 0xFF, 0xBF, 0x15, 0x00, 0x00, 0x00, 0x00, 0x50, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0F, 0x00, 0xF9, 0xBF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0F, 0x00, 0xFC, 0x06, 0x00, 0x00, 0x10, 0x54, 0x45, 0x01, 0x00, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0F, 0x00, 0x59, 0x00, 0x00, 0x82, 0xFD, 0xFF, 0xFF, 0xDF, 0x18, 0x00, 0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0xA1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x19, 0x00, 0x10, 0xFE, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0x00, 0xF1, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x20, 0x12, 0xF7, 0xFF, 0x2C, 0xB1, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x05, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xFB, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xFF, 0x05, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xF1, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xAA, 0xAA, 0xAA, 0xAA, 0xFE, 0xFF, 0x06, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xA0, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x30, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xFE, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x00, 0xFA, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0xF7, 0xFF, 
	0xFF, 0xFF, 0x67, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xF6, 0xFF, 
	0xFF, 0x6F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xF5, 0xFF, 
	0xFF, 0x4F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xF5, 0xFF, 
	0xFF, 0x6F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 0x00, 0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xF5, 0xFF, 
	0xFF, 0x8F, 0x00, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0xF7, 0xFF, 
	0xFF, 0xBF, 0x00, 0xD0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x30, 0xFF, 0xFF, 0xFF, 0x0E, 0x00, 0xFA, 0xFF, 
	0xFF, 0xFF, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xF5, 0xFF, 0xFF, 0x09, 0x00, 0xFE, 0xFF, 
	0xFF, 0xFF, 0x04, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xF4, 0xFF, 0xFF, 0x02, 0x30, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0B, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x55, 0xFE, 0xFF, 0xBF, 0x00, 0xA0, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x1F, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xF0, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xBF, 0x00, 0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0xFA, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x05, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0x40, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0xF1, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xEF, 0x01, 0x00, 0xA1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2A, 0x00, 0x00, 0xFD, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 0x00, 0x92, 0xFD, 0xFF, 0xFF, 0xEF, 0x39, 0x00, 0x00, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x20, 0x65, 0x56, 0x03, 0x00, 0x00, 0x40, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x04, 0x00, 0x00, 0x00, 0x00, 0x30, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x7A, 0x56, 0x65, 0xA7, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	};
