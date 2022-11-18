// Object: DiceUIVectorShapeAsset
// ClassId: 336
// RuntimeId: 30576
// TypeInfo: 0x0000000144DBAF00
#include "../Core/DataContainerPolicyAsset.h"
#include "../DiceCommonsShared/DiceUIVectorShape.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class DiceUIVectorShapeAsset : public Core::DataContainerPolicyAsset {
        Array<DiceCommonsShared::DiceUIVectorShape> Shapes; // 0x20
        char pad_0x28[0x8];
        Core::Vec4 LayoutRect; // 0x30
    }; // 0x40
    static_assert(sizeof(DiceUIVectorShapeAsset) == 0x40);
}
#pragma pack(pop)