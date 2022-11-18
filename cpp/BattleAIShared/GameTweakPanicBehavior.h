// Object: GameTweakPanicBehavior
// ClassId: 523
// RuntimeId: 17302
// TypeInfo: 0x0000000144C19930
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class GameTweakPanicBehavior : public Core::Asset {
        Float32 PrePanicTime; // 0x20
        Float32 TotalPanicTime; // 0x24
        Float32 PanicBlastRadiusPercentage; // 0x28
        Boolean UseMoralePanicBehavior; // 0x2C
        Boolean PanicOnGrenade; // 0x2D
        Boolean PanicOnWeaponSuppression; // 0x2E
        Boolean PanicOnVehicleSuppression; // 0x2F
    }; // 0x30
    static_assert(sizeof(GameTweakPanicBehavior) == 0x30);
}
#pragma pack(pop)