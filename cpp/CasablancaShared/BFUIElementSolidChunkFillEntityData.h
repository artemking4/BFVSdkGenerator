// Object: BFUIElementSolidChunkFillEntityData
// ClassId: 3666
// RuntimeId: 20941
// TypeInfo: 0x0000000144D9D010
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../GameShared/UIBlendMode.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementSolidChunkFillEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec3 Color1; // 0x130
        Core::Vec3 Color2; // 0x140
        Core::Vec3 Color3; // 0x150
        GameShared::UIBlendMode BlendMode; // 0x160
        Float32 Alpha1; // 0x164
        Float32 Threshold1; // 0x168
        Float32 Alpha2; // 0x16C
        Float32 Threshold2; // 0x170
        Float32 Alpha3; // 0x174
        Float32 Threshold3; // 0x178
        char pad_0x17C[0x4];
    }; // 0x180
    static_assert(sizeof(BFUIElementSolidChunkFillEntityData) == 0x180);
}
#pragma pack(pop)