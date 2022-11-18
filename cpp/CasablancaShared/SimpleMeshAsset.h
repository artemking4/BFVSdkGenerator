// Object: SimpleMeshAsset
// ClassId: 734
// RuntimeId: 11963
// TypeInfo: 0x0000000144D35E30
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/SimpleMeshVertex.h"
#include "../Global/Uint16.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SimpleMeshAsset : public Core::Asset {
        Float32 PositionEqualDistance; // 0x20
        Float32 NormalEqualDistance; // 0x24
        Float32 UvEqualDistance; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::SimpleMeshVertex> Vertices; // 0x30
        Array<Uint16> Indices; // 0x38
        Uint32 TriangleCount; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(SimpleMeshAsset) == 0x48);
}
#pragma pack(pop)