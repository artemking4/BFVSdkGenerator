// Object: MorphShapes
// ClassId: 574
// RuntimeId: 35968
// TypeInfo: 0x0000000144EA2950
#include "../Core/Asset.h"
#include "../MorphBase/MorphShape.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphShapes : public Core::Asset {
        Array<MorphBase::MorphShape> Shapes; // 0x20
    }; // 0x28
    static_assert(sizeof(MorphShapes) == 0x28);
}
#pragma pack(pop)