// Object: LogGameEventData
// ClassId: 2850
// RuntimeId: 13075
// TypeInfo: 0x0000000144C82EC0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class LogGameEventData : public Entity::EntityData {
        CString EventCategory; // 0x20
        CString EventName; // 0x28
        Int32 IntResult; // 0x30
        Float32 FloatResult; // 0x34
        CString StringResult; // 0x38
        Boolean LogToTelemetry; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(LogGameEventData) == 0x48);
}
#pragma pack(pop)