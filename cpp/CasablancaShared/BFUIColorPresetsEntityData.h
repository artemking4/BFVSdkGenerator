// Object: BFUIColorPresetsEntityData
// ClassId: 2171
// RuntimeId: 24613
// TypeInfo: 0x0000000144D20C70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UIIconState.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIColorPresetsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::UIIconState ColorState; // 0x24
    }; // 0x28
    static_assert(sizeof(BFUIColorPresetsEntityData) == 0x28);
}
#pragma pack(pop)