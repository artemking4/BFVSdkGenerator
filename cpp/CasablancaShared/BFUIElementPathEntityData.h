// Object: BFUIElementPathEntityData
// ClassId: 3661
// RuntimeId: 46138
// TypeInfo: 0x0000000144D9CF10
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/UIPathData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementPathEntityData : public CasablancaShared::BFUIElementEntityData {
        CasablancaShared::UIPathData PathData; // 0x130
        Float32 AntialiasWidth; // 0x138
        Boolean UseAbsolutePathCoordinates; // 0x13C
        char pad_0x13D[0x3];
    }; // 0x140
    static_assert(sizeof(BFUIElementPathEntityData) == 0x140);
}
#pragma pack(pop)