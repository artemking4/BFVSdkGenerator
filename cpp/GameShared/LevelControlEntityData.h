// Object: LevelControlEntityData
// ClassId: 2827
// RuntimeId: 30338
// TypeInfo: 0x0000000144E773C0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class LevelControlEntityData : public Entity::EntityData {
        CString LevelToLoad; // 0x20
        CString InclusionOptions; // 0x28
        CString StartPoint; // 0x30
        Boolean RollCredits; // 0x38
        Boolean DoPersistentSave; // 0x39
        Boolean CheckSinglePlayerLevelInstalled; // 0x3A
        Boolean ForceReloadResources; // 0x3B
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(LevelControlEntityData) == 0x40);
}
#pragma pack(pop)