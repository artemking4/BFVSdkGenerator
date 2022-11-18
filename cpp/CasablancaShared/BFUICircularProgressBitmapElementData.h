// Object: BFUICircularProgressBitmapElementData
// ClassId: 3642
// RuntimeId: 4878
// TypeInfo: 0x0000000144D9D210
#include "../CasablancaShared/BFUIElementBitmapEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUICircularProgressBitmapElementData : public CasablancaShared::BFUIElementBitmapEntityData {
        Core::Vec3 LeftSideColor; // 0x190
        Core::Vec3 RightSideColor; // 0x1A0
        Float32 LeftSideAlpha; // 0x1B0
        Float32 RightSideAlpha; // 0x1B4
        Float32 Progress; // 0x1B8
        char pad_0x1BC[0x4];
    }; // 0x1C0
    static_assert(sizeof(BFUICircularProgressBitmapElementData) == 0x1C0);
}
#pragma pack(pop)