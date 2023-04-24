#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include "kiero/kiero.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"
#pragma comment(lib, "Urlmon.lib")
#include <Urlmon.h>
#include<iostream>
#include <filesystem>
typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;
#include <cstdint> //uint, int, etc...


#include "Var.hpp"
#include "Offset.hpp"
//tab
#include "engine.hpp"
#include "Camera.hpp"
#include "PatchNote.hpp"
#include "button.hpp"
#include "Camo.hpp"