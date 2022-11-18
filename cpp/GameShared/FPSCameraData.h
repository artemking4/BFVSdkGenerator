// Object: FPSCameraData
// ClassId: 1683
// RuntimeId: 50020
// TypeInfo: 0x0000000144E839C0
#include "../GameShared/TargetCameraData.h"
#include "../GameShared/TurnEffectData.h"
#include "../GameShared/BlurEffectData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class FPSCameraData : public GameShared::TargetCameraData {
        GameShared::TurnEffectData TurnEffectSettings; // 0x90
        GameShared::BlurEffectData BlurEffectSettings; // 0xB0
        Float32 FOV; // 0xC8
        char pad_0xCC[0x4];
    }; // 0xD0
    static_assert(sizeof(FPSCameraData) == 0xD0);
}
#pragma pack(pop)