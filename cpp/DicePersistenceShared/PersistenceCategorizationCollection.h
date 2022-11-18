// Object: PersistenceCategorizationCollection
// ClassId: 621
// RuntimeId: 32157
// TypeInfo: 0x0000000144DC9FC0
#include "../Core/Asset.h"
#include "../DicePersistenceShared/PersistenceCategorizationData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceCategorizationCollection : public Core::Asset {
        Array<DicePersistenceShared::PersistenceCategorizationData> CategorizationData; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceCategorizationCollection) == 0x28);
}
#pragma pack(pop)