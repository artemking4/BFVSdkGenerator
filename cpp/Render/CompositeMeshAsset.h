// Object: CompositeMeshAsset
// ClassId: 560
// RuntimeId: 16844
// TypeInfo: 0x0000000144F1D000
#include "../Render/MeshAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Render {
    class CompositeMeshAsset : public Render::MeshAsset {
        Boolean PartGrouping; // 0xB0
        char pad_0xB1[0xF];
    }; // 0xC0
    static_assert(sizeof(CompositeMeshAsset) == 0xC0);
}
#pragma pack(pop)