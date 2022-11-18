// Object: StatEventParameterData
// ClassId: 4916
// RuntimeId: 39616
// TypeInfo: 0x0000000144DC7D00
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../DicePersistenceShared/StatParameterType.h"
#include "../DicePersistenceShared/StatContextType.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatEventParameterData : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 ParentEventIndex; // 0x20
        Uint32 Index; // 0x24
        DicePersistenceShared::StatParameterType ParameterType; // 0x28
        DicePersistenceShared::StatContextType ContextType; // 0x2C
        Int32 DefaultInteger; // 0x30
        Float32 DefaultFloat; // 0x34
        Int32 DefaultCategorizationIndex; // 0x38
        Boolean DefaultBool; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(StatEventParameterData) == 0x40);
}
#pragma pack(pop)