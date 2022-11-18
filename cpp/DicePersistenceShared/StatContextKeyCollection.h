// Object: StatContextKeyCollection
// ClassId: 761
// RuntimeId: 1739
// TypeInfo: 0x0000000144DC8280
#include "../Core/Asset.h"
#include "../DicePersistenceShared/StatContextTypeInfo.h"
#include "../DicePersistenceShared/StatContextKeyData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatContextKeyCollection : public Core::Asset {
        Array<DicePersistenceShared::StatContextTypeInfo> ContextTypes; // 0x20
        Array<DicePersistenceShared::StatContextKeyData> Keys; // 0x28
    }; // 0x30
    static_assert(sizeof(StatContextKeyCollection) == 0x30);
}
#pragma pack(pop)