// Object: DOTGiverBaseComponentData
// ClassId: 1747
// RuntimeId: 34434
// TypeInfo: 0x0000000144D5D260
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DOTGiverBaseComponentData : public Entity::GameComponentData {
        Core::Vec3 AoEOcclusionRaycastStartOffset; // 0x80
        Float32 AoERadius; // 0x90
        Float32 AoEDuration; // 0x94
        Float32 AoEMaxOcclusionRaycastRadius; // 0x98
        Float32 DoTDuration; // 0x9C
        Float32 DoTTickDuration; // 0xA0
        Boolean AoEInfiniteDuration; // 0xA4
        Boolean AoEIgnoreObstructed; // 0xA5
        Boolean DoTDamageShielded; // 0xA6
        Boolean DamageAll; // 0xA7
        Boolean DamageVehicles; // 0xA8
        Boolean DamageCharacters; // 0xA9
        Boolean DamageHorses; // 0xAA
        Boolean DamageBangers; // 0xAB
        Boolean DamageStatic; // 0xAC
        Boolean DamageFriendlies; // 0xAD
        Boolean InitiallyActive; // 0xAE
        char pad_0xAF[0x1];
    }; // 0xB0
    static_assert(sizeof(DOTGiverBaseComponentData) == 0xB0);
}
#pragma pack(pop)