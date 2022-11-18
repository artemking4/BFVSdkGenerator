// Object: StatEventData
// ClassId: 5264
// RuntimeId: 54444
// TypeInfo: 0x0000000144DC7C00
#include "../DicePersistenceShared/AbstractStatEventData.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../DicePersistenceShared/StatEventParameterData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatEventData : public DicePersistenceShared::AbstractStatEventData {
        CString Name; // 0x18
        Uint32 Index; // 0x20
        char pad_0x24[0x4];
        Array<DicePersistenceShared::StatEventParameterData> Parameters; // 0x28
    }; // 0x30
    static_assert(sizeof(StatEventData) == 0x30);
}
#pragma pack(pop)