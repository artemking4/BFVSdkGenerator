// Object: BFUIGetCapturePointSpawnPointEntityData
// ClassId: 2219
// RuntimeId: 62652
// TypeInfo: 0x0000000144D1EFF0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/SelectionMappingSpawnType.h"
#include "../CasablancaShared/BFUICapturePointObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetCapturePointSpawnPointEntityData : public Entity::EntityData {
        CasablancaShared::SelectionMappingSpawnType SpawnerSpawnPointType; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUICapturePointObject CapturePoint; // 0x28
        Boolean UpdateAutomatically; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIGetCapturePointSpawnPointEntityData) == 0x38);
}
#pragma pack(pop)