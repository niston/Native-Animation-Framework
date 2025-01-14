#pragma once
#include "IStateManager.h"
#include "IMenuHandler.h"
#include "NAFMenu/NAFMenu.h"
#include "NAFHUDMenu/NAFHUDMenu.h"

namespace Menu
{
	void Register(RE::UI* ui) {
		ui->RegisterMenu("NAFMenu", Menu::NAFMenu::Create);
		ui->RegisterMenu("NAFHUDMenu", Menu::NAFHUDMenu::Create);
	}
}
