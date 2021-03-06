#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Environment_Grass_BP_Lobby_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Environment_Grass_BP_Lobby.P_Environment_Grass_BP_Lobby_C
// 0x0060 (0x0488 - 0x0428)
class AP_Environment_Grass_BP_Lobby_C : public ATslParticleEnvironment
{
public:
	struct FVector                                     SpawnBoxMax;                                              // 0x0428(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnBoxMin;                                              // 0x0434(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Color;                                                    // 0x0440(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SizeMax;                                                  // 0x0450(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SizeMin;                                                  // 0x045C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VelocityMax;                                              // 0x0468(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VelocityMin;                                              // 0x0474(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTimeLow;                                              // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x57b9bf43);
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
