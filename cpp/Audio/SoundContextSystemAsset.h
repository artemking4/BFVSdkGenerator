// Object: SoundContextSystemAsset
// ClassId: 747
// RuntimeId: 60050
// TypeInfo: 0x0000000144E159C0
#include "../Core/Asset.h"
#include "../Audio/SoundContextData.h"
#include "../Audio/SoundContextGroupData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundContextSystemAsset : public Core::Asset {
        Array<Audio::SoundContextData> Contexts; // 0x20
        Array<Audio::SoundContextGroupData> ContextGroups; // 0x28
    }; // 0x30
    static_assert(sizeof(SoundContextSystemAsset) == 0x30);
}
#pragma pack(pop)