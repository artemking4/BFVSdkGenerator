// Object: StatContextKeyData
// ClassId: 4913
// RuntimeId: 47180
// TypeInfo: 0x0000000144DC8300
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../DicePersistenceShared/StatContextType.h"
#include "../DicePersistenceShared/StatParameterType.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatContextKeyData : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 Index; // 0x20
        DicePersistenceShared::StatContextType ContextType; // 0x24
        DicePersistenceShared::StatParameterType KeyType; // 0x28
        Int32 DefaultInteger; // 0x2C
        Float32 DefaultFloat; // 0x30
        Int32 DefaultCategorizationIndex; // 0x34
        Boolean DefaultBool; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(StatContextKeyData) == 0x40);
}
#pragma pack(pop)