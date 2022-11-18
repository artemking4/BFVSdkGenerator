// Object: UIMenuListEntryEntityData
// ClassId: 3732
// RuntimeId: 48526
// TypeInfo: 0x0000000144D9AE10
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMenuListEntryEntityData : public Entity::EntityData {
        CString Sid; // 0x20
        CString HintSid; // 0x28
        Boolean Enabled; // 0x30
        Boolean Visible; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(UIMenuListEntryEntityData) == 0x38);
}
#pragma pack(pop)