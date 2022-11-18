// Object: DebugAttachmentFilterEntityData
// ClassId: 2606
// RuntimeId: 40028
// TypeInfo: 0x0000000144D01720
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DebugAttachmentFilterEntityData : public Entity::EntityData {
        Int32 AttachmentIndex; // 0x20
        char pad_0x24[0x4];
        CString CatagoryFilter; // 0x28
    }; // 0x30
    static_assert(sizeof(DebugAttachmentFilterEntityData) == 0x30);
}
#pragma pack(pop)