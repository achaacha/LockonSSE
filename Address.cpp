#include "Address.h"

// Skyrim SE 1.5.39

// ??_7Actor@@6B@ + 0x7C8 (vtbl F9)
RelocAddr<_Actor_IsInFaction> Actor_IsInFaction(0x005F8500);

RelocPtr<TES::TESCameraController> g_TESCameraController(0x01DF0A10);

RelocPtr<TES::UnkCellInfo *> g_TESUnkCellInfo(0x01EBEAD0);

// E8 ? ? ? ? EB 48 33 D2 ->
RelocAddr<_TESQuest_CreateRefHandleByAliasID> TESQuest_CreateRefHandleByAliasID(0x00378760);

// ini setting bInvertYValues:Controls
RelocPtr<bool> ini_bInvertYValues(0x01DF1770);

// E8 ? ? ? ? 45 0F B6 CC ->
RelocAddr<_PlayerCharacter_SetAngleZ> PlayerCharacter_SetAngleZ(0x005D0FC0);

// E8 ? ? ? ? 45 84 E4 75 05 ->
RelocAddr<_PlayerCharacter_SetAngleX> PlayerCharacter_SetAngleX(0x005EDD50);

// ??_7PlayerCharacter@@6B@ + 0x520 (vtbl A4)
RelocAddr<_PlayerCharacter_UnkA4> PlayerCharacter_UnkA4(0x006A5220);

// E8 ? ? ? ? 33 D2 48 8B CF E8 ? ? ? ? 48 8B D8 
RelocAddr<uintptr_t> OnCameraMoveHook(0x0069E9A0);

