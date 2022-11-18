// Object: PersistentValueTemplateStatRef
// ClassId: 87
// RuntimeId: 36389
// TypeInfo: 0x0000000144E75AC0
#include "../GameShared/AbstractPersistentStatRef.h"
#include "../GameShared/PersistentValueTemplate.h"

#pragma pack(push, 8)
namespace GameShared {
    class PersistentValueTemplateStatRef : public GameShared::AbstractPersistentStatRef {
        GameShared::PersistentValueTemplate Definition; // 0x18
    }; // 0x20
    static_assert(sizeof(PersistentValueTemplateStatRef) == 0x20);
}
#pragma pack(pop)