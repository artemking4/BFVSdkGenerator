// Object: BFUIElementDarkenEntityData
// ClassId: 3650
// RuntimeId: 3745
// TypeInfo: 0x0000000144D9C690
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementDarkenEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec4 UVRect; // 0x130
        CString TextureId; // 0x140
        Boolean DrawEnable; // 0x148
        char pad_0x149[0x7];
    }; // 0x150
    static_assert(sizeof(BFUIElementDarkenEntityData) == 0x150);
}
#pragma pack(pop)