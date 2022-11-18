// Object: MultipleTriggerEntityData
// ClassId: 3469
// RuntimeId: 43172
// TypeInfo: 0x0000000144E8ED60
#include "../GameShared/TriggerEventEntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class MultipleTriggerEntityData : public GameShared::TriggerEventEntityData {
        Int32 TriggerAmount; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(MultipleTriggerEntityData) == 0x80);
}
#pragma pack(pop)