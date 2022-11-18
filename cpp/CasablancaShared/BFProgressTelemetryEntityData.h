// Object: BFProgressTelemetryEntityData
// ClassId: 2113
// RuntimeId: 1171
// TypeInfo: 0x0000000144D6D730
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFProgressTelemetryEntityData : public Entity::EntityData {
        Int32 Time_Limit; // 0x20
        Int32 Time_Remaining; // 0x24
        Int32 Score_Team1_Initial; // 0x28
        Int32 Score_Team1_Remaining; // 0x2C
        Int32 Score_Team2_Initial; // 0x30
        Int32 Score_Team2_Remaining; // 0x34
    }; // 0x38
    static_assert(sizeof(BFProgressTelemetryEntityData) == 0x38);
}
#pragma pack(pop)