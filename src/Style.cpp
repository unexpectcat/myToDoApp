#include "Style.h"



ColorPalete light_color_palete = {

	IM_COL32(245, 245, 245, 255),  // #00202e (background)
	IM_COL32(248, 250, 253, 255),  // #003f5c (panel)
	IM_COL32(249, 148, 23, 255),   // #2c4875 (field)
	IM_COL32(255, 211, 128, 255),  // #ffd380 (contrast)
	IM_COL32(138, 80, 143, 255),   // #8a508f (Task1)
	IM_COL32(188, 80, 144, 255),   // #bc5090 (Task2)
	IM_COL32(255, 99, 97, 255),    // #ff6361 (Task3)
	IM_COL32(255, 133, 49, 255),   // #ff8531 (Task4)
	IM_COL32(255, 166, 0, 255)	   // #ff8531 (Task5)
};

ColorPalete dark_color_palete = {
	IM_COL32(0, 32, 46, 255),      // #00202e (background)
	IM_COL32(0, 63, 92, 255),      // #003f5c (panel)
	IM_COL32(44, 72, 117, 255),    // #2c4875 (field)
	IM_COL32(255, 211, 128, 255),  // #ffd380 (contrast)
	IM_COL32(138, 80, 143, 255),   // #8a508f (Task1)
	IM_COL32(188, 80, 144, 255),   // #bc5090 (Task2)
	IM_COL32(255, 99, 97, 255),    // #ff6361 (Task3)
	IM_COL32(255, 133, 49, 255),   // #ff8531 (Task4)
	IM_COL32(255, 166, 0, 255)	   // #ff8531 (Task5)
};

ColorPalete color_palete = light_color_palete;

void SetDarkMode()
{
	color_palete = dark_color_palete;
}
