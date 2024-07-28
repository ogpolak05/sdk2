#include "interfaces.h"

#include "../../engine/utils/utils.h"
int IEngineClient::GetMaxClients()
{
	return g_pUtils->m_VMT.CallVMT<int, 34>(this);
}

bool IEngineClient::IsInGame()
{
	return g_pUtils->m_VMT.CallVMT<bool, 35>(this);
}

bool IEngineClient::IsConnected()
{
	return g_pUtils->m_VMT.CallVMT<bool, 36>(this);
}

int IEngineClient::GetLocalPlayerIndex()
{
	int nIndex = -1;
	g_pUtils->m_VMT.CallVMT<void, 47>(this, std::ref(nIndex), 0);
	return nIndex + 1;
}

void* IEntityListSystem::pGetEntityByIndex(int Index)
{
	using fnGetBaseEntity = void* (__thiscall*)(void*, int);
	static auto GetBaseEntity = reinterpret_cast<fnGetBaseEntity>(g_pUtils->m_Memory.PatternScan("client.dll", "81 FA ? ? ? ? 77 ? 8B C2 C1 F8 ? 83 F8 ? 77 ? 48 98 48 8B 4C C1 ? 48 85 C9 74 ? 8B C2 25 ? ? ? ? 48 6B C0 ? 48 03 C8 74 ? 8B 41 ? 25 ? ? ? ? 3B C2 75 ? 48 8B 01"));
	return GetBaseEntity(this, Index);
}