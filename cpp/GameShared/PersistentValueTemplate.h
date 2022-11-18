// Object: PersistentValueTemplate
// ClassId: 5248
// RuntimeId: 28716
// TypeInfo: 0x0000000144E75BC0
#include "../GameShared/AbstractPersistentValueTemplate.h"
#include "../GameShared/PersistentValueTemplateData.h"

#pragma pack(push, 8)
namespace GameShared {
    class PersistentValueTemplate : public GameShared::AbstractPersistentValueTemplate {
        GameShared::PersistentValueTemplateData Data; // 0x18
    }; // 0x40
    static_assert(sizeof(PersistentValueTemplate) == 0x40);
}
#pragma pack(pop)