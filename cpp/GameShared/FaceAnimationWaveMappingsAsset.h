// Object: FaceAnimationWaveMappingsAsset
// ClassId: 498
// RuntimeId: 12289
// TypeInfo: 0x0000000144E78040
#include "../Core/Asset.h"
#include "../GameShared/FaceAnimationWaveMappings.h"

#pragma pack(push, 8)
namespace GameShared {
    class FaceAnimationWaveMappingsAsset : public Core::Asset {
        Array<GameShared::FaceAnimationWaveMappings> Mappings; // 0x20
    }; // 0x28
    static_assert(sizeof(FaceAnimationWaveMappingsAsset) == 0x28);
}
#pragma pack(pop)