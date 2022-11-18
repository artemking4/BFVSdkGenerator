// Object: BigWorldSetting
// ClassId: 1275
// RuntimeId: 1368
// TypeInfo: 0x0000000144E781C0
#include "../Core/DataContainer.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class BigWorldSetting : public Core::DataContainer {
        Audio::SoundAsset Sound; // 0x18
        Int32 MinDistance; // 0x20
        Int32 MaxDistance; // 0x24
        Float32 MinDelayTimeInMinutes; // 0x28
        Float32 MaxDelayTimeInMinutes; // 0x2C
    }; // 0x30
    static_assert(sizeof(BigWorldSetting) == 0x30);
}
#pragma pack(pop)