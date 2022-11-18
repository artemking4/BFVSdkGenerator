// Object: ConsumableTriggerEntityData
// ClassId: 3462
// RuntimeId: 24867
// TypeInfo: 0x0000000144D5C960
#include "../GameShared/TriggerEntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/ConsumableUnlock.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ConsumableTriggerEntityData : public GameShared::TriggerEntityData {
        CasablancaShared::ConsumableUnlock ConsumableUnlock; // 0x70
        CString StatCode; // 0x78
        Boolean Persistent; // 0x80
        Boolean IncrementalConsumable; // 0x81
        Boolean SendTelemetry; // 0x82
        char pad_0x83[0xD];
    }; // 0x90
    static_assert(sizeof(ConsumableTriggerEntityData) == 0x90);
}
#pragma pack(pop)