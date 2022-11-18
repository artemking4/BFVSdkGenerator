// Object: LevelDifficultyData
// ClassId: 2830
// RuntimeId: 25076
// TypeInfo: 0x0000000144D2A1A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LevelDifficultyData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 DifficultyLevel; // 0x24
    }; // 0x28
    static_assert(sizeof(LevelDifficultyData) == 0x28);
}
#pragma pack(pop)