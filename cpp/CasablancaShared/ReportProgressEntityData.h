// Object: ReportProgressEntityData
// ClassId: 3111
// RuntimeId: 48445
// TypeInfo: 0x0000000144D5AF60
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ReportProgressEntityData : public Entity::EntityData {
        Int32 Progress; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ReportProgressEntityData) == 0x28);
}
#pragma pack(pop)