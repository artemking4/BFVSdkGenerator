// Object: BFCurrentLevelObjectiveData
// ClassId: 2096
// RuntimeId: 34107
// TypeInfo: 0x0000000144C32B70
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFCurrentLevelObjectiveData : public Entity::EntityData {
        CString CurrentObjective; // 0x20
    }; // 0x28
    static_assert(sizeof(BFCurrentLevelObjectiveData) == 0x28);
}
#pragma pack(pop)