// Object: FOVScaleEntityData
// ClassId: 2733
// RuntimeId: 28788
// TypeInfo: 0x0000000144C1D100
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/AudioCurve.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FOVScaleEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 BaseFOV; // 0x24
        Float32 MaxFOVIncreaseDelta; // 0x28
        Float32 MaxFOVDecreaseDelta; // 0x2C
        Float32 FOVDebounce; // 0x30
        Float32 SpeedInputLow; // 0x34
        Float32 SpeedInputHigh; // 0x38
        Float32 FOVIncreaseLow; // 0x3C
        Float32 FOVIncreaseHigh; // 0x40
        Float32 MotionSpeed; // 0x44
        Core::AudioCurve BoostEnterCurve; // 0x48
        Core::AudioCurve BoostExitCurve; // 0x58
        Float32 BoostExitTime; // 0x68
        Boolean IsBoosting; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(FOVScaleEntityData) == 0x70);
}
#pragma pack(pop)