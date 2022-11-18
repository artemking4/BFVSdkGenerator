// Object: Minimap2DEntityData
// ClassId: 2889
// RuntimeId: 52869
// TypeInfo: 0x0000000144D5BEE0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/Minimap2DTextureAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class Minimap2DEntityData : public Entity::EntityData {
        CString Tag; // 0x20
        Uint32 Layer; // 0x28
        Uint32 OutputSize; // 0x2C
        Uint32 MaxActiveTiles; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::Minimap2DTextureAsset Minimap2DTextureAsset; // 0x38
        Float32 ContourInterval; // 0x40
        Uint32 VectorSmoothingPasses; // 0x44
        Boolean Visible; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(Minimap2DEntityData) == 0x50);
}
#pragma pack(pop)