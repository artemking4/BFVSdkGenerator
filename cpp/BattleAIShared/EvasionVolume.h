// Object: EvasionVolume
// ClassId: 1600
// RuntimeId: 64469
// TypeInfo: 0x0000000144C05960
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class EvasionVolume : public Core::DataContainer {
        Float32 VolumeWidth; // 0x18
        Float32 VolumeHeight; // 0x1C
        Core::Vec3 OffsetFromCenter; // 0x20
        Float32 VolumeDepth; // 0x30
        char pad_0x34[0xC];
    }; // 0x40
    static_assert(sizeof(EvasionVolume) == 0x40);
}
#pragma pack(pop)