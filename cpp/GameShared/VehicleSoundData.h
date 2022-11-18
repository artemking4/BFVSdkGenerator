// Object: VehicleSoundData
// ClassId: 5565
// RuntimeId: 57685
// TypeInfo: 0x0000000144E8D360
#include "../Core/DataContainer.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class VehicleSoundData : public Core::DataContainer {
        Audio::SoundAsset BulletImpact; // 0x18
    }; // 0x20
    static_assert(sizeof(VehicleSoundData) == 0x20);
}
#pragma pack(pop)