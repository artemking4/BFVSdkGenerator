// Object: BFUIInputEntityData
// ClassId: 2285
// RuntimeId: 22522
// TypeInfo: 0x0000000144D21570
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/CursorConfinementRect.h"
#include "../CasablancaShared/ScreenPosition.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIInputEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::CursorConfinementRect CursorConfinement; // 0x24
        CasablancaShared::ScreenPosition CursorPosition; // 0x34
        Boolean DisableGameInput; // 0x3C
        Boolean DisableAimingInput; // 0x3D
        Boolean EnableHybridMouseInput; // 0x3E
        Boolean OwnTheMouse; // 0x3F
    }; // 0x40
    static_assert(sizeof(BFUIInputEntityData) == 0x40);
}
#pragma pack(pop)