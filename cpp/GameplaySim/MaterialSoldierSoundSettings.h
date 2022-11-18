// Object: MaterialSoldierSoundSettings
// ClassId: 4278
// RuntimeId: 6717
// TypeInfo: 0x0000000144E9FD40
#include "../Core/DataContainer.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialSoldierSoundSettings : public Core::DataContainer {
        Audio::SoundAsset FootStepSound; // 0x18
        Audio::SoundAsset ProneSound; // 0x20
        Audio::SoundAsset LandSound; // 0x28
    }; // 0x30
    static_assert(sizeof(MaterialSoldierSoundSettings) == 0x30);
}
#pragma pack(pop)