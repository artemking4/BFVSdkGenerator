// Object: MapNavigationOverrideEntityData
// ClassId: 2877
// RuntimeId: 59995
// TypeInfo: 0x0000000144D2A820
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UIMapNavigationData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MapNavigationOverrideEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::UIMapNavigationData MapNavigationData; // 0x24
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(MapNavigationOverrideEntityData) == 0x40);
}
#pragma pack(pop)