// Object: PersistenceContextObject
// ClassId: 4414
// RuntimeId: 21842
// TypeInfo: 0x0000000144DC7590
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../DicePersistenceShared/StatContextType.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceContextObject : public Core::DataContainer {
        Int32 ContextId; // 0x18
        DicePersistenceShared::StatContextType ContextType; // 0x1C
    }; // 0x20
    static_assert(sizeof(PersistenceContextObject) == 0x20);
}
#pragma pack(pop)