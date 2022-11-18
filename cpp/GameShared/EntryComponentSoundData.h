// Object: EntryComponentSoundData
// ClassId: 1576
// RuntimeId: 61222
// TypeInfo: 0x0000000144E8DF60
#include "../Core/DataContainer.h"
#include "../GameShared/StanceSwitchSoundData.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class EntryComponentSoundData : public Core::DataContainer {
        Array<GameShared::StanceSwitchSoundData> StanceSounds; // 0x18
        Audio::SoundAsset StanceSwitchSound; // 0x20
    }; // 0x28
    static_assert(sizeof(EntryComponentSoundData) == 0x28);
}
#pragma pack(pop)