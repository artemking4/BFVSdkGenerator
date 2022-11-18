// Object: DynamicAreaTriggerEntityData
// ClassId: 3455
// RuntimeId: 10670
// TypeInfo: 0x0000000144D0C0B0
#include "../GameShared/AreaTriggerEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DynamicAreaTriggerEntityData : public GameShared::AreaTriggerEntityData {
        Boolean IsDynamicEnabled; // 0xD0
        char pad_0xD1[0xF];
    }; // 0xE0
    static_assert(sizeof(DynamicAreaTriggerEntityData) == 0xE0);
}
#pragma pack(pop)