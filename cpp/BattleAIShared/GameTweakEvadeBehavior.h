// Object: GameTweakEvadeBehavior
// ClassId: 522
// RuntimeId: 6887
// TypeInfo: 0x0000000144C186B0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class GameTweakEvadeBehavior : public Core::Asset {
        Float32 EvadeFromGrenadesBlastRadiusPercentage; // 0x20
        Float32 EvadeGrenadeVolumeTimeToLive; // 0x24
        Boolean FaceGrenadeAfterEvading; // 0x28
        Boolean FaceVehicleAfterEvading; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(GameTweakEvadeBehavior) == 0x30);
}
#pragma pack(pop)