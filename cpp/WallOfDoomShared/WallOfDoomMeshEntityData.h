// Object: WallOfDoomMeshEntityData
// ClassId: 3331
// RuntimeId: 16341
// TypeInfo: 0x0000000144F713F0
#include "../GameShared/StaticModelEntityData.h"
#include "../Global/Boolean.h"
#include "../Render/TextureAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WallOfDoomShared {
    class WallOfDoomMeshEntityData : public GameShared::StaticModelEntityData {
        Render::TextureAsset VertexPerturbationTexture; // 0x100
        Float32 PerturbationMaxScale; // 0x108
        Float32 PerturbationMaxScaleHeight; // 0x10C
        Float32 PerturbationMinHeight; // 0x110
        Boolean ShowCurvature; // 0x114
        char pad_0x115[0xB];
    }; // 0x120
    static_assert(sizeof(WallOfDoomMeshEntityData) == 0x120);
}
#pragma pack(pop)