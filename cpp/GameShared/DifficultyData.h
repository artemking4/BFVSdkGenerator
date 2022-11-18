// Object: DifficultyData
// ClassId: 1521
// RuntimeId: 31698
// TypeInfo: 0x0000000144E811C0
#include "../Core/DataContainer.h"
#include "../GameShared/Difficulty.h"
#include "../GameShared/PersistenceGameType.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../GameShared/GameAIDifficultyData.h"

#pragma pack(push, 16)
namespace GameShared {
    class DifficultyData : public Core::DataContainer {
        GameShared::Difficulty Difficulty; // 0x18
        GameShared::PersistenceGameType GameType; // 0x1C
        Core::Vec3 StickyBoxModifier; // 0x20
        Core::Vec3 SnapBoxModifier; // 0x30
        CString ReadableName; // 0x40
        Float32 HumanHealthModifier; // 0x48
        Float32 FriendsHealthModifier; // 0x4C
        Float32 EnemiesHealthModifier; // 0x50
        Float32 FriendlyDamageModifier; // 0x54
        Float32 VehicleDamageModifier; // 0x58
        Float32 PlaneDamageModifier; // 0x5C
        Float32 HumanInCriticalHealth; // 0x60
        Float32 HumanInCriticalHealthDamageModifier; // 0x64
        Float32 HumanRegenerationRateModifier; // 0x68
        Float32 CriticalFakeImmortalModifier; // 0x6C
        Float32 ManDownTimeMultiplier; // 0x70
        Float32 ManDownReviveTime; // 0x74
        Int32 AdrenalineKillLimit; // 0x78
        Core::Vec2 AttractDistanceFallOffModifier; // 0x7C
        Float32 AttractSoftZoneModifier; // 0x84
        Float32 AttractUserInputMultiplierModifier; // 0x88
        Float32 SnapZoomPostTimeNoInputModifier; // 0x8C
        Float32 SnapZoomPostTimeModifier; // 0x90
        Float32 SuckZoomModifier; // 0x94
        Float32 AiBulletDamageHumanCooldown; // 0x98
        char pad_0x9C[0x4];
        GameShared::GameAIDifficultyData AIData; // 0xA0
        Boolean IgnoreByDefault; // 0xA8
        Boolean UsePitchZoomSnap; // 0xA9
        char pad_0xAA[0x6];
    }; // 0xB0
    static_assert(sizeof(DifficultyData) == 0xB0);
}
#pragma pack(pop)