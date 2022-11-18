// Object: PersistenceCategorizationObject
// ClassId: 4413
// RuntimeId: 47270
// TypeInfo: 0x0000000144DC9D40
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceCategorizationObject : public Core::DataContainer {
        Int32 CategorizationIndex; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PersistenceCategorizationObject) == 0x20);
}
#pragma pack(pop)