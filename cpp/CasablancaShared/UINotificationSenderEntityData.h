// Object: UINotificationSenderEntityData
// ClassId: 3744
// RuntimeId: 7098
// TypeInfo: 0x0000000144D1F2F0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINotificationSenderEntityData : public Entity::EntityData {
        CString Headline; // 0x20
        CString Text; // 0x28
        Int32 Duration; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINotificationSenderEntityData) == 0x38);
}
#pragma pack(pop)