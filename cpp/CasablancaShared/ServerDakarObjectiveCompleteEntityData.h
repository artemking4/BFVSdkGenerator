// Object: ServerDakarObjectiveCompleteEntityData
// ClassId: 3159
// RuntimeId: 61245
// TypeInfo: 0x0000000144D504D0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/DakarObjectiveType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerDakarObjectiveCompleteEntityData : public Entity::EntityData {
        CasablancaShared::DakarObjectiveType ObjectiveType; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerDakarObjectiveCompleteEntityData) == 0x28);
}
#pragma pack(pop)