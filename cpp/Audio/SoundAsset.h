// Object: SoundAsset
// ClassId: 740
// RuntimeId: 29836
// TypeInfo: 0x0000000144E16BC0
#include "../Core/Asset.h"
#include "../Audio/SoundDataReference.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundAsset : public Core::Asset {
        Array<Audio::SoundDataReference> ReferencedData; // 0x20
        Uint32 MaxActiveInstanceCount; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(SoundAsset) == 0x30);
}
#pragma pack(pop)