// Object: DebugAttachmentFilterIteratorEntityData
// ClassId: 2607
// RuntimeId: 10797
// TypeInfo: 0x0000000144D015A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DebugAttachmentFilterIteratorEntityData : public Entity::EntityData {
        Boolean JustTheSkinsPlease; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(DebugAttachmentFilterIteratorEntityData) == 0x28);
}
#pragma pack(pop)