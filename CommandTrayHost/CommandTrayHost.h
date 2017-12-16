﻿#pragma once

#include "resource.h"

BOOL ShowTrayIcon(LPCWSTR lpszProxy, DWORD dwMessage);

#define NID_UID 123
#define WM_TASKBARNOTIFY WM_USER+0x20
#define WM_TASKBARNOTIFY_MENUITEM_SHOW (WM_USER + 0x21)
#define WM_TASKBARNOTIFY_MENUITEM_HIDE (WM_USER + 0x22)
#define WM_TASKBARNOTIFY_MENUITEM_RELOAD (WM_USER + 0x23)
#define WM_TASKBARNOTIFY_MENUITEM_ABOUT (WM_USER + 0x24)
#define WM_TASKBARNOTIFY_MENUITEM_EXIT (WM_USER + 0x25)
#define WM_TASKBARNOTIFY_MENUITEM_PROXYLIST_BASE (WM_USER + 0x26)

#define WM_TASKBARNOTIFY_MENUITEM_STARTUP (WM_USER + 0x10)
#define WM_TASKBARNOTIFY_MENUITEM_OPENURL (WM_USER + 0x11)
#define WM_TASKBARNOTIFY_MENUITEM_ELEVATE (WM_USER + 0x12)
#define WM_TASKBARNOTIFY_MENUITEM_HIDEALL (WM_USER + 0x13)
#define WM_TASKBARNOTIFY_MENUITEM_DISABLEALL (WM_USER + 0x14)
#define WM_TASKBARNOTIFY_MENUITEM_ENABLEALL (WM_USER + 0x15)
#define WM_TASKBARNOTIFY_MENUITEM_SHOWALL (WM_USER + 0x16)
#define WM_TASKBARNOTIFY_MENUITEM_RESTARTALL (WM_USER + 0x17)

#define WM_HOTKEY_ID_BASE (WM_USER + 0x60)
#define WM_HOTKEY_LEFT_CLICK (WM_USER + 0x61)
#define WM_HOTKEY_RIGHT_CLICK (WM_USER + 0x62)
#define WM_HOTKEY_ADD_ALPHA (WM_USER + 0x63)
#define WM_HOTKEY_MINUS_ALPHA (WM_USER + 0x64)
#define WM_HOTKEY_TOPMOST (WM_USER + 0x65)

#define VM_TIMER_CREATEPROCESS_SHOW 0x100
