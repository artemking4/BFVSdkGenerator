// Object: StatReferenceObject
// ClassId: 4918
// RuntimeId: 20721
// TypeInfo: 0x0000000144DC9C40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatReferenceObject : public Core::DataContainer {
        CString StatKey; // 0x18
    }; // 0x20
    static_assert(sizeof(StatReferenceObject) == 0x20);
}
#pragma pack(pop)