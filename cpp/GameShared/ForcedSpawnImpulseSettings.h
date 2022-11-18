// Object: ForcedSpawnImpulseSettings
// ClassId: 1643
// RuntimeId: 46499
// TypeInfo: 0x0000000144E82B40
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"
#include "../GameShared/ImpulseSpace.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class ForcedSpawnImpulseSettings : public Core::DataContainer {
        GameShared::ImpulseSpace PositionSpace; // 0x18
        GameShared::ImpulseSpace DirectionSpace; // 0x1C
        Core::Vec3 Position; // 0x20
        Core::Vec3 Direction; // 0x30
        Float32 Dispersion; // 0x40
        char pad_0x44[0xC];
    }; // 0x50
    static_assert(sizeof(ForcedSpawnImpulseSettings) == 0x50);
}
#pragma pack(pop)