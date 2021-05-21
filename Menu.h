#pragma once
#pragma once

#ifndef MENU_H
#define MENU_H

#include <Windows.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#include <tchar.h>

//#include <Psapi.h>

namespace Menu
{
	void Create();
	void Initialize();
	void Render();
	void Shutdown();
	void ToggleMenu();
};

#endif