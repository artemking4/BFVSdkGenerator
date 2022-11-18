// Object: CharacterSoundData
// ClassId: 1316
// RuntimeId: 29496
// TypeInfo: 0x0000000144E82F40
#include "../Core/DataContainer.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class CharacterSoundData : public Core::DataContainer {
        Audio::SoundAsset Movement; // 0x18
    }; // 0x20
    static_assert(sizeof(CharacterSoundData) == 0x20);
}
#pragma pack(pop)