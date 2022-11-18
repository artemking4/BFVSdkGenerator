// Object: LevelProgressionQueryData
// ClassId: 2832
// RuntimeId: 54573
// TypeInfo: 0x0000000144D4B970
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LevelProgressionQueryData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Episode; // 0x24
    }; // 0x28
    static_assert(sizeof(LevelProgressionQueryData) == 0x28);
}
#pragma pack(pop)