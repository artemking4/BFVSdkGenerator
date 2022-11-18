// Object: StateNodeEntityBaseData
// ClassId: 3522
// RuntimeId: 53544
// TypeInfo: 0x0000000144F6DCC0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

namespace UIIncubatorShared {
    class StateNodeEntityBaseData : public Entity::EntityData {
        CString StateName; // 0x20
        Core::Realm Realm; // 0x28
        Boolean IsRoot; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(StateNodeEntityBaseData) == 0x30);
}