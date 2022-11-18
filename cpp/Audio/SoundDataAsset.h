// Object: SoundDataAsset
// ClassId: 748
// RuntimeId: 6280
// TypeInfo: 0x0000000144E158C0
#include "../Core/Asset.h"
#include "../Audio/SoundDataChunk.h"
#include "../Audio/SoundDataPolicy.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundDataAsset : public Core::Asset {
        Array<Audio::SoundDataChunk> Chunks; // 0x20
        Audio::SoundDataPolicy Policy; // 0x28
        Uint8 PrimePriority; // 0x30
        Uint8 RequestPriority; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(SoundDataAsset) == 0x38);
}
#pragma pack(pop)