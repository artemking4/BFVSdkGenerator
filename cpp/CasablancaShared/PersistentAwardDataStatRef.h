// Object: PersistentAwardDataStatRef
// ClassId: 85
// RuntimeId: 45206
// TypeInfo: 0x0000000144D49F70
#include "../GameShared/AbstractPersistentStatRef.h"
#include "../CasablancaShared/AwardData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistentAwardDataStatRef : public GameShared::AbstractPersistentStatRef {
        CasablancaShared::AwardData Definition; // 0x18
    }; // 0x20
    static_assert(sizeof(PersistentAwardDataStatRef) == 0x20);
}
#pragma pack(pop)