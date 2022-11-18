// Object: UILevelInfoEntityData
// ClassId: 3723
// RuntimeId: 28606
// TypeInfo: 0x0000000144D21370
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILevelInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString CheckpointLevelPath; // 0x28
    }; // 0x30
    static_assert(sizeof(UILevelInfoEntityData) == 0x30);
}
#pragma pack(pop)