// Object: PersistenceContextObjectCollection
// ClassId: 4415
// RuntimeId: 11261
// TypeInfo: 0x0000000144DC8400
#include "../Core/DataContainer.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceContextObjectCollection : public Core::DataContainer {
        Array<DicePersistenceShared::PersistenceContextObject> Contexts; // 0x18
    }; // 0x20
    static_assert(sizeof(PersistenceContextObjectCollection) == 0x20);
}
#pragma pack(pop)