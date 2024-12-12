#pragma once
#include "Interfaces.h"

class Menu : public Singleton<Menu> {

public:
	void Render();
	void Shutdown();
	void ColorPicker(const char* name, float* color, bool alpha);

	void Legit();
	void Aimbot();
	void Antiaim();
	void Visuals();
	void Misc();
	void Skins();
	void Players();

	bool isOpen = false;
};