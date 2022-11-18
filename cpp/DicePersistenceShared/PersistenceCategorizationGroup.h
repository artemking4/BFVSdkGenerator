// Object: PersistenceCategorizationGroup
// ClassId: 622
// RuntimeId: 24190
// TypeInfo: 0x0000000144DCA040
#include "../Core/Asset.h"
#include "../DicePersistenceShared/PersistenceCategorizationData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceCategorizationGroup : public Core::Asset {
        Array<DicePersistenceShared::PersistenceCategorizationData> Members; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceCategorizationGroup) == 0x28);
}
#pragma pack(pop)