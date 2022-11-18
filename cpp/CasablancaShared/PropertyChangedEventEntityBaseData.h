// Object: PropertyChangedEventEntityBaseData
// ClassId: 3055
// RuntimeId: 38477
// TypeInfo: 0x0000000144D12A80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class PropertyChangedEventEntityBaseData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean TriggerOnInitialValue; // 0x24
        Boolean TriggerOnValueChangeOnly; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(PropertyChangedEventEntityBaseData) == 0x28);
}