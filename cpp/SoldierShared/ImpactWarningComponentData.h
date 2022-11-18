// Object: ImpactWarningComponentData
// ClassId: 1790
// RuntimeId: 63745
// TypeInfo: 0x0000000144F44230
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class ImpactWarningComponentData : public Entity::GameComponentData {
        Float32 WarnTimeBeforeImpact; // 0x80
        Float32 SoldierImpactAreaPadding; // 0x84
        Float32 SoldierImpactAreaHeight; // 0x88
        char pad_0x8C[0x4];
        Audio::SoundAsset IncomingArtillerySound; // 0x90
        Float32 TriggerWarningDistanceFromImpact; // 0x98
        Float32 WarningSoundRadius; // 0x9C
        Boolean PredictImpactPosition; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(ImpactWarningComponentData) == 0xB0);
}
#pragma pack(pop)