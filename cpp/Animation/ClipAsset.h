// Object: ClipAsset
// ClassId: 212
// RuntimeId: 63652
// TypeInfo: 0x0000000144DFAAD0
#include "../Core/Asset.h"
#include "../Global/Uint32.h"
#include "../Animation/ClipCodecAsset.h"
#include "../Entity/SkeletonAsset.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Animation {
    class ClipAsset : public Core::Asset {
        Uint32 NumFrames; // 0x20
        char pad_0x24[0x4];
        ResourceRef CompressedData; // 0x28
        Uint32 NumBones; // 0x30
        char pad_0x34[0x4];
        Animation::ClipCodecAsset CodecAsset; // 0x38
        Entity::SkeletonAsset SkeletonAsset; // 0x40
    }; // 0x48
    static_assert(sizeof(ClipAsset) == 0x48);
}
#pragma pack(pop)