// Object: UIGameScoringEntityData
// ClassId: 3708
// RuntimeId: 38971
// TypeInfo: 0x0000000144D20D70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIGameScoringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIGameScoringEntityData) == 0x28);
}
#pragma pack(pop)